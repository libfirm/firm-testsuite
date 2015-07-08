#include <stdarg.h>
#include <stdio.h>

void fatal(char *s, ...)
{
  va_list ap;

  va_start (ap, s);

  vfprintf (stdout, s, ap);

  va_end (ap);
}

int main(void)
{
    fatal("i can crash the inliner\n");

    return 0;
}
