/* Examples from the paper "Finding and Understanding Bugs in C Compilers" */

#include <stdio.h>

int foo (void) {
   signed char x = 1;
   unsigned char y = 255;
   return x > y;
}

int bar (unsigned x) {
   return -1 <= (1 && x);
}

static int g[1];
static int *p = &g[0];
static int *q = &g[0];
int foo2 (void) {
   g[0] = 1;
   *p = 0;
   *p = *q;
   return g[0];
}

int x = 4;
int y;
void foo3 (void) {
   for (y = 1; y < 8; y += 7) {
      int *p = &y;
      *p = x;
   }
}

int foo4 (void) {
   int x;
   for (x = 0; x < 5; x++) {
      if (x) continue;
      if (x) break;
   }
   return x;
}

int main (void) {
   printf("zero: %d\n", foo());
   printf("one: %d\n", bar(1337));
   printf("zero: %d\n", foo2());
   foo3();
   printf("eleven: %d\n", y);
   printf("five: %d\n", foo4());
   return 0;
}
