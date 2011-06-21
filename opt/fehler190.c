extern int puts(const char *str);

int main(int argc, char **argv)
{
	/* switch lowering code incorrectly changed default_pn to a number already
	 * taken */
	switch(argc) {
	case '.':    puts("."); break;
	case '\377': puts("jo"); break;
	case '0': case '1': case '2': case '3': puts("zigger"); break;
	default:     puts("blo"); break;
	}
	return 0;
}
