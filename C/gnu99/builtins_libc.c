#include <stdio.h>

char vals0[] = { 1, 2, 3, 4, 5 };
char vals1[5];
char hello[] = "Hello gcc";

int main(void)
{
	char buf[128];

	int ab = __builtin_abs(-7) - __builtin_abs(5);
	printf("Res1: %d\n", ab);
	__builtin_memcpy(vals1, vals0, sizeof(vals0));
	printf("Res2: %d\n", __builtin_memcmp(vals0, vals1, sizeof(vals0)));
	__builtin_memset(vals0, 0, sizeof(vals0));
	printf("Res3: %d %d %d %d %d\n", vals0[0], vals0[1], vals0[2], vals0[3], vals0[4]);
	printf("Res4: %d\n", (int) __builtin_strlen("Hello World"));
	printf("Res5: %d\n", __builtin_strcmp(hello, "Hello World"));
	__builtin_strcpy(buf, hello);
	printf("Res6: %s\n", buf);

	return 0;
}
