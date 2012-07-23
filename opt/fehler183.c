struct _IO_FILE;
typedef struct _IO_FILE FILE;

static int sgf_column = 0;

static void sgf_putc(int c, FILE *file)
{
	if (c == '\n')
		sgf_column = 0;
	else
		sgf_column++;

	if (sgf_column > 60);
}

int main(void)
{
	FILE *file = 0;
	sgf_putc('(', file);
	return 0;
}
