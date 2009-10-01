extern int printf(const char *str, ...);

int __attribute__((noinline)) many_params(
		int p0,
		int p1,
		int p2,
		int p3,
		int p4,
		int p5,
		int p6,
		int p7,
		int p8,
		int p9,
		int p10,
		int p11,
		int p12,
		int p13,
		int p14,
		int p15,
		int p16,
		int p17,
		int p18,
		int p19,
		int p20,
		int p21,
		int p22,
		int p23,
		int p24,
		int p25,
		int p26,
		int p27,
		int p28,
		int p29,
		int p30)
{
	return p0
		+ p1
		+ p2
		+ p3
		+ p4
		+ p5
		+ p6
		+ p7
		+ p8
		+ p9
		+ p10
		+ p11
		+ p12
		+ p13
		+ p14
		+ p15
		+ p16
		+ p17
		+ p18
		+ p19
		+ p20
		+ p21
		+ p22
		+ p23
		+ p24
		+ p25
		+ p26
		+ p27
		+ p28
		+ p29
		+ p30;
}

int __attribute__((noinline)) test(int a, int b, int c)
{
  int d, e;

  d = a/b;
//  e = b/c;

  return d;
}

int main()
{
	printf("Result: %d\n", test(1,2,3));
	printf("Result2: %d\n",
			many_params(0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
				11, 12, 13, 14, 15, 16, 17, 18, 19, 20,
				21, 22, 23, 24, 25, 26, 27, 28, 29, 30));
	return 0;
}
