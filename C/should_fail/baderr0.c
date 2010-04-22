void f(void)
{
  /* Bad error message:
	 * baderr0.c:7: error: while parsing function definition
	 * baderr0.c:7: error: got '==', expected {
	 */
	unsigned char* x == 1;
}

int main(void) {}
