/*$ -march=i386 -bia32-unsafe_floatconv $*/

int f2i(float x) { return x; }

float v = 42.23f;

int main(void)
{
	return f2i(v) - 42;
}
