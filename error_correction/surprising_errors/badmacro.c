#define max(x,y)  ((x)>(y)?(x):(y))

extern int printf(const char *str, ...);
int main(void)
{
	/* macro is missing a parameter, we should probably not expand it but
	 * replace it by an error token which avoids further error reports */
	printf("Max: %d\n", max(42));
}
