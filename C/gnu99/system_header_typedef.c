/* gcc produces no error if a typedef is repeated in a system header...
 * (and the glibc/gcc headers appear to be broken enough to redfine size_t on
 *  my system here) */
typedef unsigned long BLABLA;
# 1 "XXX" 3
typedef unsigned long BLABLA;

int main(void)
{
}
