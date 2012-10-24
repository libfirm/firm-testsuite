#include <stdio.h>

int main()
{
  static void *code[] = { &&the, &&quick, &&brown, &&fox, &&done };
  void **ip = code;
  goto **ip;

 next:
  ip++;
  goto **ip;

 the:
  puts("the");
  goto next;

 quick:
  puts("quick");
  goto next;

 brown:
  puts("brown");
  goto next;

 fox:
  puts("fox");
  goto next;

 done:
  return 0;
}
