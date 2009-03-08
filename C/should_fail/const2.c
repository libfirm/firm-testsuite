struct X {
	int x;
} xinst;

const struct X* xptr = &xinst;

int main(void)
{
	xptr->x = 0;
	return xptr->x;
}
