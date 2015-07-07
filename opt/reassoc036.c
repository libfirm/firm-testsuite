int a;

void fn1(void )
{
	for (a = 1; a; ++a) {
		short c = a + 1;
		if ((short)(c + a)) {
			a = 0;
		}
	}
}

int main(void)
{
	return 0;
}
