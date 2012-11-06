#include <signal.h>
#include <stdio.h>
#include <unistd.h>

static void __attribute__((noinline)) f(void)
{
	puts("ok 1");
	int x;
	do x = 1; while (x);
}

static void handler(int sig)
{
	puts("ok 2");
	fflush(stdout);
	_exit(0);
}

int main(void)
{
	signal(SIGALRM, handler);
	alarm(1);
	f();
	return 0;
}
