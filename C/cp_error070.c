typedef struct {
	int a, b, c;
} bla;
static bla b = (bla){1,2,3};

/* bug #93 */
static char **x = (char *[]){ "A" };

int main(void)
{
	return 0;
}
