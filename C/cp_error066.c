struct options {
	char server[128];
} options;

/* cparser complained that options.server is not a constant expression */
static char *blafoo = options.server;

int main(void)
{
	(void) blafoo;
	return 0;
}
