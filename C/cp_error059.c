enum NumKind {
	NUM_NONE,
	NUM_DEC,
	NUM_DEC_FLOAT,
	NUM_HEX,
	NUM_HEX_FLOAT,
	NUM_OCT
};

static char const * const num_kind_name[] =
{
	[NUM_NONE]      = "NUM_NONE",
	[NUM_DEC]       = "NUM_DEC",
	[NUM_DEC_FLOAT] = "NUM_DEC_FLOAT",
	[NUM_HEX]       = "NUM_HEX",
	[NUM_HEX_FLOAT] = "NUM_HEX_FLOAT",
	[NUM_OCT]       = "NUM_OCT"
};

extern int puts(const char *str);

int main(void)
{
	puts(num_kind_name[NUM_OCT]);
	return 0;
}
