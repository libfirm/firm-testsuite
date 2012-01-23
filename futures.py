import threading
"""
Futures are a simple way to execute stuff in parallel.
Synchronization is left to the user, though.
"""

class Promise:
	def __init__(self, func):
		self.func = func
		self.lock = threading.Lock()
		self.done = False
	def force(self):
		self.lock.acquire()
		try:
			if not self.done:
				self.result = self.func()
				self.done = True
		finally:
			self.lock.release()
		return self.result

_PROMISES = list()

def _do_promise():
	while len(_PROMISES) > 0:
		p = _PROMISES.pop(0) # empty list exception in concurrent case?
		p.force()

def add_worker(n=1):
	"""Add a worker thread to fulfill promises"""
	t = None
	for i in xrange(n):
		t = threading.Thread(target=_do_promise)
		t.setDaemon(True)
		t.start()
	return t

_BASE_WORKER = None

def _keep_base_worker_alive():
	"""At least one thread should work on the promises"""
	global _BASE_WORKER
	if not _BASE_WORKER or not _BASE_WORKER.isAlive():
		_BASE_WORKER = add_worker()
	threading.Timer(10.0, _keep_base_worker_alive)
_keep_base_worker_alive()

def future(func, *args, **kwargs):
	"""Returns a promise of the result of func()"""
	p = Promise(lambda: func(*args, **kwargs))
	_PROMISES.append(p)
	#print len(_PROMISES), _BASE_WORKER
	return p

if __name__ == "__main__":
	import sys, time
	extra_threads = 0
	if len(sys.argv) > 1:
		extra_threads = int(sys.argv[1])
	S = 0
	end = 20
	def add(i):
		global S
		S += i
		time.sleep(1.0)
	promises = []
	for i in range(end):
		promises.append( future(add, i) )
	add_worker(extra_threads)
	print "started %d extra worker threads" % extra_threads
	for p in promises:
		p.force()
	print S, sum(range(end))
