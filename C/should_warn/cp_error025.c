struct s {
	char x[30];
};

/* should warn about missing braces around initializer */
static struct s x[] = { "blup" };

int main(void)
{
	return x[0].x[0] != 'b';
}
