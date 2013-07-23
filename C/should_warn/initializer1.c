static struct {
	int a;
} foo = { { 42 } };

int main(void)
{
	return foo.a - 42;
}
