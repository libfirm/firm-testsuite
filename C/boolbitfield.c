struct S {
	_Bool b:1;
} s;

unsigned z = 19;

int main(void)
{
	s.b = z & 2;
	return !s.b;
}
