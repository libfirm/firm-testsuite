"""
Convenience function
Alternative to subprocess and os.system
"""
import subprocess
import resource
import sys
import signal

class SigKill(Exception):
	def __init__(self, retcode, name):
		self.retcode = retcode
		self.name = name

_EXIT_CODES = dict((-k, v) for v, k in signal.__dict__.iteritems() if v.startswith('SIG'))
del _EXIT_CODES[0]

def execute(cmd, env=None, timeout=0):
	"""Execute a command and return stderr and stdout data"""
	preexec_fn = None
	if timeout > 0.0:
		def set_timeout():
			 resource.setrlimit(resource.RLIMIT_CPU, (timeout, timeout))
		preexec_fn = set_timeout
	cmd = filter(lambda x: x, cmd.split(' '))
	proc = subprocess.Popen(cmd,
							stdin =subprocess.PIPE,
							stdout=subprocess.PIPE,
							stderr=subprocess.PIPE,
							preexec_fn = preexec_fn,
							env=env)
	out, err = proc.communicate(input="")
	# Usually python can recognize application terminations triggered by
	# signals, but somehow it doesn't do this for java (I suspect, that java
	# catches the signals itself but then shuts down more 'cleanly' than it
	# should. Calculate to python convention returncode
	if proc.returncode > 127:
		proc.returncode = 128 - proc.returncode
	if proc.returncode in _EXIT_CODES:
		raise SigKill(proc.returncode, _EXIT_CODES[proc.returncode])
	return (out, err, proc.returncode)

def silent_shell(cmd, env=None, debug=False):
	"""Execute a shell command"""
	if debug:
		print "silent_shell", cmd
		stdout = None
		stderr = None
	else:
		stdout = open("/dev/null", 'a')
		stderr = subprocess.STDOUT
	try:
	    return subprocess.call(cmd, shell=True, stdout=stdout, stderr=stderr, env=env)
	except OSError, e:
	    print >>sys.stderr, "Execution failed:", e

def write_file(filename, content):
	fh = open(filename, 'w')
	fh.write(content)
	fh.close()

if __name__ == "__main__":
	out,err,retcode = execute("hostname")
	print out
