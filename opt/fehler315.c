union {
	int *a;
	unsigned short b[2];
} u;

int main(void)
{
	u.a = 0;
	return u.b[1];
}
