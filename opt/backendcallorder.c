#include <stdio.h>
#include <math.h>

/* With SPARC backend and soft float enabled, firm chose wrong ordering of
 * call nodes in the backend. */

int numf1s;

double simtest2(double U)
{
   double Su, denom;
   double su, sp;

   su = sp = 0.0;
   if (numf1s)
   {
      su += U;
      sp += U;
   }

   Su =   ((double)numf1s - su * su)
        / ((double)numf1s * ((double)numf1s-1.0));

   Su = sqrt(Su);

   denom =   sqrt((double) numf1s - su*su)
           * sqrt((double) numf1s - sp*sp);

   return denom;
}

int main()
{
   printf("%f\n", simtest2(3.1415));
   return 0;
}
