#include <stdio.h>

/* Labels as Values (GCC C extension).
   Basic example from the GCC manual. */

int main()
{
  void *ptr;
  goto bar;

 foo:
  puts("success");
  goto done;

 bar:
  ptr = &&foo;
  goto *ptr;

 done:
  return 0;

}
