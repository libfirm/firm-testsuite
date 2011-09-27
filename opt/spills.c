extern int printf(const char *str, ...);

int array[] = {
	0, -1, 2, -1, 2, -2, -1, 4, 2, 3, 4,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	[25] = 1};
int dummy;
int *ptr = &dummy;

unsigned __attribute__((noinline)) foo(void)
{
	int x0  = array[0];
	int x1  = array[1];
	int x2  = array[2];
	int x3  = array[3];
	int x4  = array[4];
	int x5  = array[5];
	int x6  = array[6];
	int x7  = array[7];
	int x8  = array[8];
	int x9  = array[9];
	int x10 = array[10];
	int x11 = array[11];
	int x12 = array[12];
	int x13 = array[13];
	int x14 = array[14];
	int x15 = array[15];
	int x16 = array[16];
	int x17 = array[17];
	int x18 = array[18];
	int x19 = array[19];
	int x20 = array[20];
	int x21 = array[21];
	int x22 = array[22];
	int x23 = array[23];
	int x24 = array[24];
	*ptr = 42;
	int x25 = array[25];

	return (x25 - x24)
		* (x25 - x23)
		* (x25 - x22)
		* (x25 - x21)
		* (x25 - x20)
		* (x25 - x19)
		* (x25 - x18)
		* (x25 - x17)
		* (x25 - x16)
		* (x25 - x15)
		* (x25 - x14)
		* (x25 - x13)
		* (x25 - x12)
		* (x25 - x11)
		* (x25 - x10)
		* (x25 - x9)
		* (x25 - x8)
		* (x25 - x7)
		* (x25 - x6)
		* (x25 - x5)
		* (x25 - x4)
		* (x25 - x3)
		* (x25 - x2)
		* (x25 - x1)
		* (x25 - x0);
}

int main(void)
{
	printf("Res: %u\n", foo());
	return 0;
}
