/* No TLS support. */
#ifdef __APPLE__
#	define __thread
#endif

#ifdef _WIN32
#define __thread   __declspec( thread )
#endif

extern int printf(const char *str, ...);

__thread int tls_g;
__thread const int h = 42;
__thread int tls_i[10];
__thread int tls_j = 5;

int test(int i) {
	tls_j = i;
	return tls_i[i];
}

int main()
{
	static __thread int tl1;
	static __thread int tl2 = 42;
    printf("tls_i: %d\n", test(3));
    printf("tls_j: %d\n", tls_j);
    printf("tls_d: %d\n", tls_g);
    printf("tls_cnst: %d\n", h);
    printf("tls_cnst: %d\n", tl1);
    printf("tls_cnst: %d\n", tl2);
    return 0;
}
