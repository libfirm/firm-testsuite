/* Test float2int conversions in presence of overflow! The C standard leaves
 * this as undefined, however IMO constant folding should behave exactly like
 * the hardware instructions. */
#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

static int __attribute__((noinline)) flt2int(float x)
{
	return x;
}

int main(void)
{
#define DEF(num)  numbers[n] = num; folded[n] = (int)(float)num; names[n++] = #num;
	static float numbers[32];
	static int   folded[32];
	static const char *names[32];
	size_t n = 0;
	// define some typical edge cases
	DEF(0x1.fffffcp22f); // 0x07fffff
	DEF(0x1.fffffep23f); // 0x0ffffff
	DEF(0x1.ffffffp23f); // 0x1000000
	DEF(0x1000001);      // 0x1000000
	DEF(0x1000002);      // 0x1000002
	DEF(0x1000003);      // 0x1000004
	DEF(0x1000004);      // 0x1000004
	DEF(0x1000005);      // 0x1000004
	DEF(0x1000006);      // 0x1000006
	DEF(0x1000007);      // 0x1000008
	DEF(0x1000008);      // 0x1000008
	DEF(0x1.p30f);       // 0x40000000
	DEF(0x1.p31f);       // 0x80000000
	DEF(0x1.p32f);       // positive overflow
	DEF(0x1.p33f);       // positive overflow
	DEF(0x1.p127);       // positive overflow
	DEF(2147483648.0f);  // positive overflow
	DEF(2147483647);     // positive overflow

	DEF(-0x1.p30f);      // -1073741824
	DEF(-0x1.p31f);      // -2147483648
	DEF(-0x1.p32f);      // negative overflow
	DEF(-0x1.p33f);      // negative overflow
	DEF(-0x1.p127f);     // negative overflow

	bool fine = true;
	for (size_t i = 0; i < n; ++i) {
		int hardware = flt2int(numbers[i]);
		int fold     = folded[i];
		printf("%02zu: %-15s to int => HW: %11d Folded: %11d\n", i, names[i], hardware, fold);
		if (hardware != fold) {
			printf("Error: hardware/constfold mistmatch!\n");
			fine = false;
		}
	}
	return fine != true;
}
