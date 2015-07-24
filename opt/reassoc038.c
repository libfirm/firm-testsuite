int a;
int b;

int main(void)
{
	int c = b;
	int d = a | 1;
	int e = c ^ d;
	return a & e & 1;
}
