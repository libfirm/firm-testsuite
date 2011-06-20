struct options {
	char server[128];
} options;

struct options* opt;
static char *blafoo = opt->server;

int main(void)
{
	(void) blafoo;
	return 0;
}
