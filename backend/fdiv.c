/* produces invalid assembler instruction fdivt (with cparser) */

#define PI (3.14159265358979323846)
#define RADIANS_PER_DEGREE (PI/180.0)

int foo(double k)
{
	return k / RADIANS_PER_DEGREE;
}

int main(void)
{
	return 0;
}
