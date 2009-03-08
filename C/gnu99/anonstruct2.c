struct X { union { int x; }; } x = { { 0 } };

int main(void)
{
	return x.x;
}
