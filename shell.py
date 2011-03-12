"""
Convenience function
Alternative to subprocess and os.system
"""
import subprocess
import resource
import sys

class SigKill(Exception):
	def __init__(self, retcode, name):
		self.retcode = retcode
		self.name = name

_EXIT_CODES = {
	-2: "keyboard interrupt",
	-3: "keyboard quit",
	-4: "illegal instruction",
	-6: "aborted",
	-8: "floating point exception",
	-9: "kill",
	-11: "segfault",
	-13: "broken pipe",
	-14: "timeout",
	-15: "termination",
}

def execute(cmd, env=None, timeout=0, stderr=subprocess.STDOUT):
	"""Execute a command and return stderr and/or stdout data"""
	if not stderr:
		stderr = open("/dev/null", 'w')
	preexec_fn = None
	if timeout > 0.0:
		def set_timeout():
			 resource.setrlimit(resource.RLIMIT_CPU, (timeout, timeout))
		preexec_fn = set_timeout
	cmd = filter(lambda x: x, cmd.split(' '))
	proc = subprocess.Popen(cmd,
							stdout=subprocess.PIPE,
							stderr=stderr,
							preexec_fn = preexec_fn,
							env=env)
	out, err = proc.communicate()
	try:
		for line in out.splitlines():
			yield line
	except Exception, e:
		print "'%s' -> %s" % (cmd, e)
	if proc.returncode in _EXIT_CODES:
		raise SigKill(proc.returncode, _EXIT_CODES[proc.returncode])
	elif proc.returncode < 0: # program aborted
		raise Exception(proc.returncode, cmd)

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
	for line in execute("hostname"):
		print line
	for line in execute("hostname", True, True):
		print line
