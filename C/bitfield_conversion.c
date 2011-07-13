/* Source: http://blog.regehr.org/archives/558 */

#include <stdio.h>
struct S0 {
  unsigned f1 : 1;
};

struct S0 s;

int main (void) {
  int x = -3;
  int y = x >= (0, s.f1);
  printf ("%d\n", y);
  return 0;
}
