struct S0 {
	int field;
};

static struct S0 global_1 = {1};
static struct S0 global_2 = {2};

static struct S0 zero(void)
{
	struct S0 zero = {0};

	return zero;
}

int main(void)
{
	global_1 = global_2 = zero();

	return global_1.field;
}
