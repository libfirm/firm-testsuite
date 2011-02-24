#include <stdio.h>

static double _Complex inc = 2 + (__extension__ 5.0iF);

static double _Complex complex_identity (double _Complex x) {
   return x + inc;
}

int main(void) {
   double _Complex x = 6 + (__extension__ 3.0iF);
   double _Complex y = complex_identity(x);
   printf("%f + %fi\n", __real__ y, __imag__ y);
}
