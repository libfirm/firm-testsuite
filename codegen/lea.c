unsigned char* f(unsigned char* a, unsigned b)
{
	/* This can be done in a single lea after loading the parameters:
	 *   lea -2(a, b, 2), %eax
	 * Currently we generate:
	 *   movl 8(%esp), %edx
	 *   movl %edx, %ecx         // !!!
	 *   addl 4(%esp), %ecx
	 *   addl $0xFFFFFFFE, %edx  // !!!
	 *   leal (%ecx,%edx), %eax
	 *   ret
	 * We generate the "good" code when written as:
	 *   return a + 2 * b - 2;
	 * It looks like reassociation does not do The Right Thing(TM).
	 */
	a += b;
	a += b;
	a -= 2;
	return a;
}
