typedef unsigned long T;

T fun(T n)
{
	T k = n;
	while (--k) {
		asm("");
	}
	return n;
}
