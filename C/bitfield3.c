int main(void)
{
	struct { unsigned y : 7; unsigned x : 3; unsigned z : 2;  } x = { 0, 0, 0};
	int a;

	a = (x.x += -1);
	return a != 7;
}
