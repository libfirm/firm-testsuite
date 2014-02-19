/* globalrefs.c - Test symbolic constant expressions constructed from
 * global addresses and index expressions into global addresses.
 * Do this both with global constants and with inline constant.
 * Instead of printing absolute addresses, print out the differences in
 * memory addresses to get output that matches that of the native compiler.
 */

#include <stdio.h>
#include <assert.h>

#define __STDC_LIMIT_MACROS 1
#include <inttypes.h>

struct test {
  long A;
  struct { unsigned X; unsigned Y; } S;
  struct test* next;
};

struct test  TestArray[10];
struct test  Test1;

/* Create global symbolic constants from the addresses of the above globals */

struct test* TestArrayPtr = &TestArray[3];
long*        Aptr         = &Test1.A;
unsigned*    Yptr         = &Test1.S.Y;
struct test** NextPtr     = &Test1.next;

unsigned long
diff(void* p1, void* p2)
{
  return (unsigned long) p1 - (unsigned long) p2;
}

int
main(int argc, char** argv)
{
  unsigned long diff1, diff2, diff3, diff4;

  assert(sizeof(struct test) == (sizeof(long) + sizeof(unsigned) * 2
                                + sizeof(struct test*)));

  assert(diff(&TestArray[3], TestArray) == sizeof(struct test) * 3);
  assert(diff(&Test1.S.Y, &Test1.A) == sizeof(long) + sizeof(unsigned));
  assert(diff(&Test1.next, &Test1.S.Y) == sizeof(unsigned));

  assert(diff(TestArrayPtr, TestArray) == sizeof(struct test) * 3);
  assert(diff(Yptr, Aptr) == (sizeof(long) + sizeof(unsigned)));
  assert(diff(NextPtr, Yptr) == sizeof(unsigned));

  return 0;
}
