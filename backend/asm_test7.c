int xchg(int* x, int y)
{
	asm volatile("xchgl %0, %1" : "+m" (*x), "+r" (y));
	return (y);
}

int main() { return 0; }
