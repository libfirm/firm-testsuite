int main(void)
{
	/* cparser used to get confused when identifiers had the names
	 * of special characters... */
	goto newline;
newline:
	return 0;
}
