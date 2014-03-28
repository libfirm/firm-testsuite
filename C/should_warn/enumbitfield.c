enum foobar {
	a, b, c, d, e
};

struct baz {
	enum foobar baz : 2; /* enum foobar has 5 entries and should get 3 bits */
};

int main(void)
{
	return 0;
}
