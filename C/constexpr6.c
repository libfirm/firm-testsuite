typedef struct foobar_t {
	int a, b;
} foobar_t;

static foobar_t foobar = {
	42, 13
};
/* cparser didn't akzept the following as constant expression */
static const foobar_t *p = 1 ? &foobar : (foobar_t*)0;

int main(void)
{
	(void) p;
	return 0;
}
