int k = 13;
int __attribute__((alias("k"))) l = 42;

int main(void)
{
	return 13 - l;
}
