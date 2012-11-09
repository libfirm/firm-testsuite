#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static void __attribute__((noinline)) f(void)
{
	puts("bla");
	exit(0);
}

static int g(void)
{
	int x;
	for (x = 5; ; x += 1) {
		f();
		x = x > 4;
	}
	return 0;
}

static void __attribute__((noinline)) h(void)
{
	g();
}

int main (int argc, char* argv[])
{
	alarm(3);
	h();
	return 0;
}
