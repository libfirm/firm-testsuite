/* Copyright (C) 2000  Free Software Foundation.

   Ensure builtin strlen, strcmp, strchr, strrchr and strncpy
   perform correctly.

   Written by Jakub Jelinek, 11/7/2000.  */

#include <string.h>

int x = 6;
int y = 1;
const char *const bar = "hi world";
char buf [64];

int main()
{
  const char *const foo = "hello world";
  char dst [64];

  dst[5] = ' ';
  dst[6] = '\0';
  x = 5;
  y = 1;
  if (strncpy (dst + 1, foo + (x++ & 3), 4) != dst + 1
      || x != 6
      || strcmp (dst + 1, "ello "))
    return 1;
  memset (dst, ' ', sizeof dst);
  if (strncpy (dst + (++x & 1), (y++ & 3) + "foo", 10) != dst + 1
      || x != 7
      || y != 2
      || memcmp (dst, " oo\0\0\0\0\0\0\0\0 ", 12))
    return 2;
  memset (dst, ' ', sizeof dst);
  if (strncpy (dst, "hello", 8) != dst || memcmp (dst, "hello\0\0\0 ", 9))
    return 3;
  x = '!';
  memset (buf, ' ', sizeof buf);
  if (memset (buf, x++, ++y) != buf
      || x != '!' + 1
      || y != 3
      || memcmp (buf, "!!!", 3))
    return 4;
  if (memset (buf + y++, '-', 8) != buf + 3
      || y != 4
      || memcmp (buf, "!!!--------", 11))
    return 5;
  x = 10;
  if (memset (buf + ++x, 0, y++) != buf + 11
      || x != 11
      || y != 5
      || memcmp (buf + 8, "---\0\0\0", 7))
    return 6;
  if (memset (buf + (x += 4), 0, 6) != buf + 15
      || x != 15
      || memcmp (buf + 10, "-\0\0\0\0\0\0\0\0\0", 11))
    return 7;

  return 0;
}
