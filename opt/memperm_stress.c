#include <stdio.h>

#define SWAP(a, b) tmp = x##a; x##a = x##b; x##b = tmp;
#define CYCLE3(a, b, c) tmp = x##a; x##a = x##b; x##b = x##c; x##c = tmp;
#define TEN(x) x x x x x x x x x x

int g;

void f()
{
	int tmp;
	int x1 = 1;
	int x2 = 2;
	int x3 = 3;
	int x4 = 4;
	int x5 = 5;
	int x6 = 6;
	int x7 = 7;
	int x8 = 8;
	int x9 = 9;
	int x10 = 10;
	int x11 = 11;
	int x12 = 12;
	int x13 = 13;
	int x14 = 14;
	int x15 = 15;
	int x16 = 16;
	int x17 = 17;
	int x18 = 18;
	int x19 = 19;
	int x20 = 20;
	int x21 = 21;
	int x22 = 22;
	int x23 = 23;
	int x24 = 24;
	int x25 = 25;
	int x26 = 26;
	int x27 = 27;
	int x28 = 28;
	int x29 = 29;
	int x30 = 30;
	int x31 = 31;
	int x32 = 32;
	int x33 = 33;
	int x34 = 34;
	int x35 = 35;
	int x36 = 36;
	int x37 = 37;
	int x38 = 38;
	int x39 = 39;
	int x40 = 40;
	int x41 = 41;
	int x42 = 42;
	int x43 = 43;
	int x44 = 44;

	if (g) {
		SWAP(1, 2);
		SWAP(3, 4);
		SWAP(5, 6);
		SWAP(7, 8);
		SWAP(9, 10);
		SWAP(11, 12);
		SWAP(13, 14);
		SWAP(15, 16);
		SWAP(17, 18);
		SWAP(19, 20);
		SWAP(21, 22);
		CYCLE3(23, 24, 25);
		CYCLE3(26, 27, 28);
		CYCLE3(29, 30, 31);
		CYCLE3(32, 33, 34);
		CYCLE3(35, 36, 37);
		CYCLE3(38, 39, 40);
		x41 = x40;
		x42 = x40;
		x43 = x40;
		x44 = x40;
	}

	printf(TEN("%d ") TEN("%d ") TEN("%d ") TEN("% d") " %d %d %d %d\n",
		x1, x2, x3, x4, x5, x6, x7, x8, x9, x10,
		x11, x12, x13, x14, x15, x16, x17, x18, x19, x20,
		x21, x22, x23, x24, x25, x26, x27, x28, x29, x30,
		x31, x32, x33, x34, x35, x36, x37, x38, x39, x40,
		x41, x42, x43, x44);
}

int main()
{
	g = 0;
	f();
	g = 1;
	f();
	return 0;
}
