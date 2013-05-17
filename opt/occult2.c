#include <stdio.h>
#include <stdint.h>

unsigned char x = 0xFC;
unsigned char y = 0xFC;
unsigned char z = 0;

void __attribute__((noinline))add(void) {
	unsigned add8 = (x + y) >> 8;

	printf("add = %u\n", add8);
}

void __attribute__((noinline)) minus(void) {
	unsigned minus8 = (-z) >> 8;

	printf("minus = %u\n", minus8);
}

void __attribute__((noinline)) mul(void) {
	unsigned mul8 = (x * y) >> 8;

	printf("mul = %u\n", mul8);
}

void __attribute__((noinline)) shl(void) {
	unsigned sub8 = (x << y) >> 8;

	printf("shl = %u\n", sub8);
}

void __attribute__((noinline)) sub(void) {
	unsigned sub8 = (x - y) >> 8;

	printf("sub = %u\n", sub8);
}

int main() {

	add();
	minus();
	mul();
	shl();
	sub();

	return 0;
}
