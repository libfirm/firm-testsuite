unsigned arr[10];

unsigned arrfoo(int x)
{
	/* should result int 2 loads with address modes on x86.
	 * (and not calculating the common arr[x] part first and then adding
	 * 0/1 to it) */
	return (arr[x]|arr[x+1]) != 0;
}
