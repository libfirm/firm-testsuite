#include <stdio.h>
#ifdef __APPLE__
#	include <machine/endian.h>
#else
#	include <endian.h>
#endif

/* Warning: This program contains undefined behaviour according to the C
 * standard. Still keeping it as you can find stuff like this in real world
 * programs */
int __signbit (double __x) {
  union {
	  double __d;
	  int __i[3];
  } __u = { __d: __x };

#ifndef BYTE_ORDER
#error "can't determine endianess"
#endif
#if BYTE_ORDER == LITTLE_ENDIAN
  return __u.__i[1] < 0;
#else
  return __u.__i[0] < 0;
#endif
}

int main() {
  printf("%d %d\n", __signbit(-1), __signbit(2.0));
  return 0;
}
