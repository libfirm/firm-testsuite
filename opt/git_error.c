/* source: git 1.7.4.1 abspath.c */

int main(void) {
   char bufs[2][2];
   char *buf;
   char *next_buf;
   int buf_index = 1;
   int depth = 1;
   void* st;

   while (depth--) {
      int len = readlink(buf, next_buf, 4096);
      buf_index = 1 - buf_index;
      next_buf = bufs[buf_index];
   }
   return 0;
}
