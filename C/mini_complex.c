#include <stdio.h>
#include <complex.h>

int main(void) {
   double complex c1 = 2 + 3*I;
   double complex c2 = 4 + 2*I;
   double complex erg = c1 * c2;
   printf("%f + %fi\n",creal(erg),cimag(erg));
}
