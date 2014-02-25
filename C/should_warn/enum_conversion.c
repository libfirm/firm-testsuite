enum Foo {
	FOO_A,
	FOO_B,
	FOO_C
};

enum Bar {
	BAR_A,
	BAR_B,
	BAR_C
};

extern int printf(const char *str, ...);

static void print_foo(enum Foo f) {
	(void)f;
}

typedef enum Foo Foo;
typedef enum Bar Bar;

typedef struct {
	Foo f : 10;
	Bar b : 10;
} Blup;

typedef struct {
	Foo f;
	Bar b;
} Blup2;

static Blup b;
static Foo global_foo;
static Bar global_bar;

static Bar get_a_bar(void) {
	return BAR_B;
}

int main(void)
{
	global_bar = BAR_C; // ok
	global_foo = FOO_B; // ok
	global_bar = FOO_B; // bad
	global_foo = get_a_bar(); // bad

	b.f = FOO_C; // ok
	b.b = FOO_A; // bad

	b.f = global_foo; // ok
	b.b = global_foo; // bad

	global_foo = b.b; // bad

	print_foo(BAR_A); // bad
	print_foo(global_bar); // bad
	print_foo(b.b); // bad

	Blup2 b2= {
		.f = get_a_bar(), // bad
		.b = b.f // bad
	};
	(void)b2;
	Blup b3 = {
		.f = get_a_bar(), // bad
		.b = b.f // bad
	};
	(void)b3;

	return 0;
}
