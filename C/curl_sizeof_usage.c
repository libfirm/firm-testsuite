/* found in curl/typecheck-gcc.h */
#include <stdio.h>

int main(void) {
   printf("%d\n", sizeof(main));
   printf("%d\n", !(sizeof(main) == sizeof(void*)));
   return 0;
}
