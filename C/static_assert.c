_Static_assert(1, "Hello");
struct foo {
	_Static_assert(2, "in struct");
};
union bar {
	_Static_assert(3, "in union");
};
int main(void)
{
	_Static_assert(4, "Hello2");
	return 0;
}
