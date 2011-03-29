/* Courtesy of regehr http://news.ycombinator.com/item?id=2382742 */

#include <stdio.h>

int main(void) {
   printf("%d\n", 1 ? : 2);
   printf("%d\n", 0 ? : 2);
   return 0;
}
