int a[14];

#define IF(val) if (a##val != 0 && a##val != 3 && a##val != 6) { return val; }

int main(void) {
	int a0 = a[0];
	int a1 = a[1];
	int a2 = a[2];
	int a3 = a[3];
	int a4 = a[4];
	int a5 = a[5];
	int a6 = a[6];
	int a7 = a[7];
	int a8 = a[8];
	int a9 = a[9];
	int a10 = a[10];
	int a11 = a[11];
	int a12 = a[12];
	int a13 = a[13];

	IF(0);
	IF(1);
	IF(2);
	IF(3);
	IF(4);
	IF(5);
	IF(6);
	IF(7);
	IF(8);
	IF(9);
	IF(10);
	IF(11);
	IF(12);
	IF(13);

	return 0;
}
