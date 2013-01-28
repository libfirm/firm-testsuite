#include <stdarg.h>
#include <stdio.h>

void fatal(char *s, ...)
{
  va_list ap;

  va_start (ap, s);

  vfprintf (stderr, s, ap);

  va_end (ap);
}

int main(void)
{
    fatal("i can crash the inliner");

    return 0;
}
