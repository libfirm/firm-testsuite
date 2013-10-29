int *g;

void __attribute__((noinline)) blup(void)
{
	/* load store opt used to kill the load from "g" after merging the store
	 * in front of the loop with the store inside the loop */
	int *ptr = g;
	*ptr = 13;
	int y = 100;
	while (y-- > 0) {
		*ptr = 42;
	}
}

int main(void)
{
	int res = 0;
	g = &res;
	blup();
	return *g != 42;
}
