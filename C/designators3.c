struct pair_t {
	int a, b;
};
struct base_t {
	int op_mode;
};
struct derived0 {
	struct base_t base;
	struct pair_t pair;
};
struct derived1 {
	struct derived0 base;
};

struct derived1 globalvar = {
	.base.base.op_mode = 42,
	.base.pair = {
		.a = 5,
		.b = 7,
	},
};

extern int printf(const char *str, ...);

void __attribute__((noinline)) print_derived(struct derived1 *d)
{
	printf("%d %d %d\n", d->base.base.op_mode, d->base.pair.a, d->base.pair.b);
}

int main(int argc, char **argv)
{
	struct derived1 dynamicvar = {
		.base.base.op_mode = argc,
		.base.pair = { .b = argc+1 },
	};
	print_derived(&globalvar);
	print_derived(&dynamicvar);
}
