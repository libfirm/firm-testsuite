typedef struct foobar {
	int a,b,c;
} foobar;

typedef struct place {
	int id;
} place;

typedef struct indedex_memory_chunk {
	void *ptr;
	int len;
} indedex_memory_chunk;

typedef struct closure {
	int data;
} closure;

extern int printf(const char *str, ...);

void __attribute__((noinline)) blup(closure *data)
{
	printf("%d\n", data->data);
}

indedex_memory_chunk __attribute__((noinline)) evalAt(place p, closure *c, void *profile)
{
	blup(c);
	printf("%d\n", p.id);

	indedex_memory_chunk result;
	result.ptr = 0;
	result.len = 4;
	return result;
}

int main(void)
{
	place p;
	p.id = 1;
	closure c;
	c.data = 42;

	indedex_memory_chunk chunk = evalAt(p, &c, 0);

	return 0;
}
