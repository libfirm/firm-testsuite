struct S1
{
	int bla;
};

static struct S1 bar(void)
{
	while(1) {
	}
}

void foo(void)
{
	bar();
}

int main(void)
{
	return 0;
}
