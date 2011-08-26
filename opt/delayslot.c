/* Example crashes for SPARC backend during delay slot picking because
 * candidate for delay slot is in a different basic block. */

struct magic {
	char* mg_ptr;
};

struct ufuncs {
	long (*uf_val)(long);
	long uf_index;
};

int magic(struct magic *mg)
{
	struct ufuncs *uf = (struct ufuncs *)mg->mg_ptr;

	if (uf && uf->uf_val)
		(*uf->uf_val)(uf->uf_index);
	return 0;
}

int main()
{
	return 0;
}
