unsigned f(unsigned x)
{
	/* Rounding up twoards the next multiple of four is unnecessary, because the
	 * value is already a a multiple of four. */
	return x * 4U + 3U & ~3U;
}
