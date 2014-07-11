int a = 1;
char b;
char *c = &b;
unsigned d;

int main(void)
{
	d = a * -4L;
	*c = d && 1;
	return b - 1;
}
