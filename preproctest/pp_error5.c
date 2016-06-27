/* From stltwalker src/stltwalker.c */

#define log_err(M, ...) printf(M "\n", ##__VA_ARGS__)
#define check(A, M, ...) log_err(M, ##__VA_ARGS__);

int main(int argc, char **argv)
{
	(void)argv;
	check(cond, "%d", argc);
}
