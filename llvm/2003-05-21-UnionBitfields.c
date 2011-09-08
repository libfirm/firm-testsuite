#include <stdio.h>
#include <math.h>
#include <endian.h>
#include <stdint.h>

int target_isinf(double x) {
  union {
    double d;
    struct {
      uint32_t mantissa2;
      uint32_t mantissa1 : 20;
      uint32_t exponent  : 11;
      uint32_t sign      :  1;
    } little_endian;
    struct {
      uint32_t sign      :  1;
      uint32_t exponent  : 11;
      uint32_t mantissa1 : 20;
      uint32_t mantissa2;
	} big_endian;
  } u;

  u.d = x;
#ifndef __FLOAT_WORD_ORDER
#error "can't determine endianess"
#endif
#if __FLOAT_WORD_ORDER == __LITTLE_ENDIAN
  return (u.little_endian.exponent == 2047 && u.little_endian.mantissa1 == 0 && u.little_endian.mantissa2 == 0);
#else
  return (u.big_endian.exponent == 2047 && u.big_endian.mantissa1 == 0 && u.big_endian.mantissa2 == 0);
#endif
}

int main()
{
  printf("%d %d\n", target_isinf(1234.42), target_isinf(INFINITY));
  return 0;
}
