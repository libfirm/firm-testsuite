struct {
	char f0;
	int f1 : 15;
	int f2 : 9;
} a = {0, 0, 1};

int b;
int c;

int main(void)
{
	a.f0 = a.f2;
	b    = b && c;
	return a.f0 ^ 1;
}
