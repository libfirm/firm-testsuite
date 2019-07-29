struct s {
	union {
		int a;
	};
} s1 = { .a = 42 };

int main(void)
{
	s1 = (struct s) { .a = 42 };
	return __builtin_offsetof(struct s, a);
}
