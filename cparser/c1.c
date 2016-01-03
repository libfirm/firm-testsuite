typedef struct name_t {
	signed char *name;
} name_t;

extern int hello(name_t const *const n);
extern name_t n;

int main(void)
{
	hello(&n);
}
