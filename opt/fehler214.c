/** libfirm messes up memory dependencies for a const function with
 * aggregate return type... */
typedef struct {
	int quot;
	int rem;
} div_t;
typedef struct foo {
	div_t x;
} foo;
div_t __attribute__((const)) div(int number, int denom);

int avi_read_header(foo **streams, int tag)
{
    for (;;) {
        switch (tag) {
        case 1:;
            foo *st = streams[0];
            st->x = div(42, 13);
        }
    }
}

int main(void)
{
	return 0;
}
