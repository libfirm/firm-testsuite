/*$ -march=i386 -munsafe_floatconv $*/

int f2i(float x) { return x; }

float v = 42.23f;

int main(void)
{
	return f2i(v) - 42;
}
