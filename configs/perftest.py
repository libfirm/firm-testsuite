class PerformanceTest(CTest):
	def __init__(self, filename, size, environment):
		super(PerformanceTest,self).__init__(filename, environment)
		if size != 0:
			environment.executionargs = " %s" % size

	def check_reference_output(self, out):
		m = re.search('I\s+refs:\s+([0-9,]+)', self.exec_err)
		if m:
			self.error_msg = m.group(1)
		m = re.search('Instructions:\s*([0-9]+)', self.exec_err)
		if m:
			self.error_msg = m.group(1)
		return True

sizes = {
	"opt/simple.c":                 0, # this is here to get a baseline of glibc initialisation code
	"opt/queens-handoptimized.c":   11,
	"opt/Hanoi.c":                  20,
	"opt/Sieve.c":                  150,
	"opt/SieveBits.c":              20000,
	"opt/QuickSort.c":              100000,
	"opt/MergeSort.c":              100000,
	"opt/HeapSort.c":               100000,
	"opt/fib.c":                    30,
	"perf/crafty.c":                100000,
	"perf/serpent.c":               600,
	"perf/vpr0.c":                  3000,
	"langshootout/fannkuch.c":      9,
	"langshootout/bintree.c":       11,
	"langshootout/n-body.c":        2000,
	"langshootout/spectral-norm.c": 300,
	"langshootout/partial-sums.c":  30000,
	"langshootout/fasta.c":         10000,
}
floatheavy = set([
	"perf/vpr0.c",
	"langshootout/n-body.c",
	"langshootout/spectral-norm.c",
	"langshootout/partial-sums.c"
])

def create_performance_testset(config, args):
	global TESTS

	if not args:
		args = sizes.keys()

	for name in args:
		if not name in sizes:
			print "Warning: no size setup for test '%s'" % name
			size = 0
		else:
			size = sizes[name]

		environment = deepcopy(config)
		test = PerformanceTest(name, size, environment)
		TESTS.append(test)

def setup_valgrind(option, opt_str, value, parser):
	global _DEFAULT_DIRS
	_DEFAULT_DIRS = []
	config = parser.values
	config.runexe = "/usr/bin/valgrind --tool=callgrind "

	global CREATE_TESTSET
	CREATE_TESTSET = create_performance_testset

def setup_leonperf(option, opt_str, value, parser):
	setup_valgrind(option, opt_str, value, parser)
	config = parser.values
	config.cflags = "-O3 -std=c99 -msoft-float"
	if "cparser" in config.compiler:
		config.cflags += " -mtarget=sparc-leon-linux-gnu"
	config.ldflags += " -static -msoft-float"
	config.runexe = "qemu-count -r 2.6.40 "
	for b in floatheavy:
		sizes[b] /= 30

configurations["valgrind"] = setup_valgrind
configurations["leonperf"] = setup_leonperf
