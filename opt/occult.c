#include <stdio.h>
#include <stdint.h>

uint32_t foo(uint32_t x) {
	uint16_t high = (x & 0xFF00FFFF) >> 16;
	return high & 0x00FF;
}

uint32_t bar(uint32_t x) {
	uint16_t high = (x & 0xFF00FFFF) >> 16;
	return high | 0x00FF;
}

int main() {
	int a  = foo(12345678);
	int b  = foo(87535234);
	printf("a = %d\nb = %d\n", a, b);
	int a2 = bar(12345678);
	int b2 = bar(87535234);
	printf("a2 = %d\nb2 = %d\n", a2, b2);
	return 0;
}
