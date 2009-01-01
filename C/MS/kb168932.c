/* KB168932  http://support.microsoft.com/?scid=kb%3Ben-us%3B168932 */

/* Compiler options: Use .cpp extension or /Tp switch */
#include <stdio.h>


void *pBase   = (void*)0x00010000;
void *pGlobal = (void*)0x00010000;


void __based(pBase)* SomeFunction()
{
	static void* pv = (void*)0x00010000;
	return (void __based(pBase)*)pv;
}


int main()
{
	int __based(pBase)* test1;


	/* The following conversion always fails.  A possible solution is to have
	 * SomeFunction() simply return a void*. */
	test1 = (int __based(pBase)*)SomeFunction();
	printf("Conversion 1 = %08lX, should be 00000000\n", (unsigned long)test1);


	/* This conversion fails on some versions.  In this example, the double
	 * conversion isn't necessary. */
	test1 = (int __based(pBase)*)(void __based(pBase)*)(void*)0x00010000;
	printf("Conversion 2 = %08lX, should be 00000000\n", (unsigned long)test1);


	/* This conversion always works. */
	test1 = (int __based(pBase)*)(void __based(pBase)*)pGlobal;
	printf("Conversion 3 = %08lX, should be 00000000\n", (unsigned long)test1);
}
