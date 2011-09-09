#include <stdio.h>
#include <math.h>
#ifdef __APPLE__
#	include <machine/endian.h>
#else
#	include <endian.h>
#endif
#include <stdint.h>

#ifndef BYTE_ORDER
#error "can't determine endianess"
#endif

int target_isinf(double x) {
  union {
    double d;
    struct {
#if BYTE_ORDER == LITTLE_ENDIAN
      uint32_t mantissa2;
      uint32_t mantissa1 : 20;
      uint32_t exponent  : 11;
      uint32_t sign      :  1;
#else
      uint32_t sign      :  1;
      uint32_t exponent  : 11;
      uint32_t mantissa1 : 20;
      uint32_t mantissa2;
#endif
		} bits;
  } u;

  u.d = x;
  return (u.bits.exponent == 2047 && u.bits.mantissa1 == 0 && u.bits.mantissa2 == 0);
}

int main()
{
  printf("%d %d\n", target_isinf(1234.42), target_isinf(INFINITY));
  return 0;
}
