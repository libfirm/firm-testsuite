/*$ -O0 $*/

int a;
struct {
	int f0 : 16;
} b;

int main(void)
{
	a &= b.f0 = a;
	return 0;
}
