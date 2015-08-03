/*$ -O0 $*/

/* cparser -O0 -c thisfile.c
 * -->
 * assertion "bitset_is_set(available, col) && "pre-colored register must be free"" failed: file "ir/be/bechordal.c", line 316, function "assign"
 * Abort trap (core dumped)
 *
 * no error with -O1 , -O2 , -O3 , -O4 , -Os
 *
 * cparser '20150802' == cparser 0.9.14(a00b7515363bfd85bdd1ec6383edb4896836523c) using libFirm 1.21(5ddb39dbdbe3c75113856ed0252120c31595e68d)
 * OpenBSD 5.7 32 bit, Intel core i5
 */

int   ga = 0;
short gb = 0;
int   l1 = 1;

void  func(int p)
{
   ((gb = p) != (ga != 123, l1)) < l1 == (int)&p;
}

int main(void) { return 0; }
