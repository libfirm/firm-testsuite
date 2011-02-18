/* source: git 1.7.4.1 abspath.c */
#include <stdio.h>

int main(void) {
   char bufs[2][1] = {{2},{4}};
   char *next_buf = bufs[0];
   int buf_index = 1;
   int depth = 4;

   while (depth--) {
      buf_index = 1 - buf_index;
      next_buf = bufs[buf_index];
   }
   printf("%d\n", next_buf[0]);
   return 0;
}
