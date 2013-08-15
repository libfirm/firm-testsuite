int __attribute__((alias("bar"))) x;
int bar = 42;

int x = 13;

int main(void)
{
	return x - 13;
}
