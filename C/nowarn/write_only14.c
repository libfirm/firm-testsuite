static int global[2] = {0, 0};

static void f(void)
{
	int index = 0;

	global[index]++;
}

int main(void)
{
	f();
	return 0;
}
