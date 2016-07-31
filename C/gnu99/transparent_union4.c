union tunion {
	int  *a;
	void *b;
} __attribute__ ((__transparent_union__));

extern void foo(union tunion x);
extern void foo(void *x);

int main(void)
{
	return 0;
}
