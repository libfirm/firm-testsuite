/* found in git 1.7.4.1 count-objects.c */
#include <stdio.h>

int main(void)
{
   long long int size_pack = 0;
   for (int i=10; i>0; i--) {
      size_pack += 123456789;
   }
   printf("%lu\n", (unsigned long) (size_pack / 1024));
   return 0;
}
