int g(int x, int y)
{
	int w = x / y;
	/* this leads to a movl %eax, %edi; xchgl %eax, %edi */
	int v = w / y;
	return w + v;
}

int main(void) { return 0;}
