#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

__thread int tls_var;

void *func1(void *ptr)
{
	(void)ptr;
	tls_var = 42;
	printf("1: TLS-Var before sleep: %d\n", tls_var);
	sleep(1);
	printf("1: TLS-Var after sleep: %d\n", tls_var);
	sleep(2);
	return NULL;
}

void *func2(void *ptr)
{
	(void)ptr;
	tls_var = 13;
	printf("2: TLS-Var before sleep: %d\n", tls_var);
	sleep(2);
	printf("2: TLS-Var after sleep: %d\n", tls_var);
	sleep(1);
	return NULL;
}

int main(void)
{
	pthread_t thread1;
	pthread_t thread2;
	printf("main: creating\n");
	pthread_create(&thread1, NULL, func1, NULL);
	pthread_create(&thread2, NULL, func2, NULL);
	printf("main: joining...\n");

	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);
	printf("main: all joined\n");
	return 0;
}
