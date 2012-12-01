#ifndef __BYTE_ORDER__
#define __ORDER_LITTLE_ENDIAN__  1234
#define __ORDER_BIG_ENDIAN__     4321

#ifdef __LITTLE_ENDIAN__
#define __BYTE_ORDER__  __ORDER_LITTLE_ENDIAN__
#elif defined(__BIG_ENDIAN__)
#define __BYTE_ORDER__  __ORDER_BIG_ENDIAN__
#elif defined(__i386__) || defined(__arm__)
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__
#elif defined(__sparc__)
#define __BYTE_ORDER__ __ORDER_BIG_ENDIAN__
#else
#error could not determine endianess
#endif

#endif
