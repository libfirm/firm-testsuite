int \U00002115 = 42;
int \u9FA5 = 21;
int n\u9FA5 = 100;

/* some compilers (=icc) mangle utf8 idents with _uXXXX which might already
 * be used by existing literals */
int n_u9fa5 = 7;
int n_u9FA5 = 13;

extern int printf(const char *str, ...);

int main(void)
{
	printf("Dollar: \u0024\n");
	printf("Some Numbers: %d %d %d\n", n\U00009fa5, n_u9FA5, n_u9fa5);
	return \u2115 - \U00009Fa5*2;
}
