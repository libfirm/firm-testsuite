int x = 42;
int k = 13;
int __attribute__((alias("k"))) x;

int main(void)
{
	return 0;
}
