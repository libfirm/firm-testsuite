#include <stdbool.h>

/* the following 2 functions are a typical implementation of a "less than"
 * operator comparing two pairs.
 * Semantically both versions perform the same operation, however the generated
 * code differs quite a bit between compilers.
 */

bool lessthan1(unsigned lx, unsigned rx, unsigned ly, unsigned ry) {
  if (lx != rx)
    return lx < rx;
  return ly < ry;
}

bool lessthan2(unsigned lx, unsigned rx, unsigned ly, unsigned ry) {
  if (lx < rx)
    return true;
  if (lx > rx)
    return false;
  return ly < ry;
}
