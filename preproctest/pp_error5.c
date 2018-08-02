/* From stltwalker src/stltwalker.c */

#define err(...) (void)0;
#define check(...) err(1, ##__VA_ARGS__)

int main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	check()
	check("")
	check("", "")
}
