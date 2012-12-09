extern int printf(const char *str, ...);

_Complex double d0 = 0;
_Complex double d1 = 5. + 42.i;
int counter = 0;

_Complex double getd1(void)
{
	return d1;
}

int main(void)
{
	_Complex l = d1;
	_Complex l0;
	printf("%f %f\n", __real__ l, __imag__ l);
	l0 = l++;
	printf("%f %f\n", __real__ l, __imag__ l);
	printf("%f %f\n", __real__ l0, __imag__ l0);
	l0 = l--;
	printf("%f %f\n", __real__ l, __imag__ l);
	printf("%f %f\n", __real__ l0, __imag__ l0);
	l0 = ++l;
	printf("%f %f\n", __real__ l, __imag__ l);
	printf("%f %f\n", __real__ l0, __imag__ l0);
	l0 = --l;
	printf("%f %f\n", __real__ l, __imag__ l);
	printf("%f %f\n", __real__ l0, __imag__ l0);

	printf("%f %f\n", __real__ ({ ++counter; getd1(); }), __imag__ ({ ++counter; getd1(); }));
	printf("%d\n", counter);
	return 0;
}
