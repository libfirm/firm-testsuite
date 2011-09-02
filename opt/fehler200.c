struct S0 {
	int f0;
};

struct S0 global = {1};

struct S0 copy(struct S0 original)
{
	return original;
}

int main(void)
{
	struct S0 local = {0};

	global = copy(local);

	return global.f0;
}
