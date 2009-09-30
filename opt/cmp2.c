#include <limits.h>
#include <stdio.h>

#define CMPS(PRES,a,b)    \
	PRES(a,b,"==",a==b);  \
	PRES(a,b,"<",a<b);    \
	PRES(a,b,"<=",a<=b);  \
	PRES(a,b,">",a>b);    \
	PRES(a,b,">=",a>=b);  \
	PRES(a,b,"!=",a!=b);

int a = -23;
int b = 42;
int c = INT_MAX;
int d = INT_MIN;

unsigned ua = 1;
unsigned ub = 42;
unsigned uc = UINT_MAX;
unsigned ud = 0;


#define PINT(a,b,sym,res)   printf("%d %s %d = %d\n", a, sym, b, res)
#define PUINT(a,b,sym,res)  printf("%u %s %u = %d\n", a, sym, b, res)

int main(void)
{
	CMPS(PINT, a, b);
	CMPS(PINT, a, c);
	CMPS(PINT, a, d);
	CMPS(PINT, b, c);
	CMPS(PINT, b, d);
	CMPS(PINT, c, d);

	CMPS(PUINT, ua, ub);
	CMPS(PUINT, ua, uc);
	CMPS(PUINT, ua, ud);
	CMPS(PUINT, ub, uc);
	CMPS(PUINT, ub, ud);
	CMPS(PUINT, uc, ud);

	return 0;
}
