#include <stdlib.h>

int wwrite(long long i);

int wwrite(long long i)
{
  switch(i)
    {
    case 3:
    case 10:
    case 23:
    case 28:
    case 47:
      return 0;
    default:
      return 123;
    }
}

int main()
{
  if (wwrite(0LL) != 123)
    return 1;
  return 0;
}
