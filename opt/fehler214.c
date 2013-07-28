/** libfirm messes up memory dependencies for a const function with
 * aggregate return type... */
typedef struct AVRational{
    int num;
    int den;
} AVRational;
typedef struct foo {
	AVRational x;
} foo;
AVRational __attribute__((const)) av_div_q(void);

int avi_read_header(foo **streams, int tag)
{
    for (;;) {
        switch (tag) {
        case 1:;
            foo *st = streams[0];
            st->x = av_div_q();
        }
    }
}

int main(void)
{
	return 0;
}
