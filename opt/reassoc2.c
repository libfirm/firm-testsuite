int a = -2;
int b = 2;
int c;

int main(void)
{
	int l = a | b | c;
	return l + (l & b);
}
