int main(void)
{
	struct { unsigned x : 3; } x;
	int a;

	a = (x.x = -1);
	return a != 7;
}
