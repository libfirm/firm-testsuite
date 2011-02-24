#include <assert.h>

unsigned __attribute__((noinline)) bit_set(unsigned val, unsigned bit)
{
	return ((1u << bit) & val) != 0;
}

unsigned __attribute__((noinline)) bit_clear(unsigned val, unsigned bit)
{
	return ((1u << bit) & val) == 0;
}

unsigned __attribute__((noinline)) bit_set2(unsigned val, unsigned bit)
{
	/* this should be normalized to the same as bit_set by firm */
	return ((1u << bit) & val) == (1u << bit);
}

unsigned __attribute__((noinline)) bit_clear2(unsigned val, unsigned bit)
{
	/* this should be normalized to the same as bit_clear by firm */
	return ((1u << bit) & val) != (1u << bit);
}

unsigned __attribute__((noinline)) bit_set3(unsigned val, unsigned bit)
{
	/* this should be normalized to the same as bit_set by firm */
	return ((1u << bit) & val) > 0;
}

unsigned __attribute__((noinline)) bit_clear3(unsigned val, unsigned bit)
{
	/* this should be normalized to the same as bit_clear by firm */
	return ((1u << bit) & val) < (1u << bit);
}

unsigned __attribute__((noinline)) not_a_bit_clear(unsigned val, unsigned bit)
{
	/* this could be normalized to a return 0 (but I haven't seen any compiler
	 * doing this) */
	return ((1u << bit) & val) > (1u << bit);
}

int main(void)
{
	assert(bit_set(0xdeadbeef, 18));
	assert(bit_set2(0xdeadbeef, 18));
	assert(bit_set3(0xdeadbeef, 18));
	assert(!bit_set(0xdeadbeef, 17));
	assert(!bit_set2(0xdeadbeef, 17));
	assert(!bit_set3(0xdeadbeef, 17));

	assert(bit_clear(0xdeadbeef, 17));
	assert(bit_clear2(0xdeadbeef, 17));
	assert(bit_clear3(0xdeadbeef, 17));
	assert(!bit_clear(0xdeadbeef, 18));
	assert(!bit_clear2(0xdeadbeef, 18));
	assert(!bit_clear3(0xdeadbeef, 18));

	assert(!not_a_bit_clear(0xdeadbeef, 18));
	assert(!not_a_bit_clear(0xdeadbeef, 17));
	return 0;
}
