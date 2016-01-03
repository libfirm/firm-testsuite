extern int puts(const char *str);

typedef struct name_t {
	unsigned char *name;
} name_t;

name_t n = { "world" };

int hello(name_t const *const n) {
	puts("Hello ");
	puts(n->name);
	return 0;
}
