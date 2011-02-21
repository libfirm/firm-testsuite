/* found in git 1.7.4.1 apply.c */

#include <string.h>

int sane_tz_len(const char *line, int len)
{
 const char *tz, *p;

 tz = line + len - strlen(" +0500");

 for (p = 0; p != len; p++) {}

 return line + len - tz;
}

int main(void) {
   sane_tz_len("blub", 0);
   return 0;
}
