int a = 1;
int *b = &a;

int main(void)
{
	return *b = a % a;
}
