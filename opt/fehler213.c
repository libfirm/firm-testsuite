/*
cparser (0.9.14) using libFirm (1.21), x86(32), cygwin

../../ir/be/betranshlp.c:218: libFirm panic in be_transform_node: No transform function registered for node Deleted M[97:35].
*/
int g;

int add(int i1, int i2 ) { return i1 + i2; }

int f(void)
{
   int l=1;

START:
 g = add(1,
           add(3 , 2) /* every number is allowed  - I'm so generous... */
        ) && 1;

   if (l)
      goto START;

	return 0;
}

int main(int argc, char **argv)
{
	if (argc > 1) {
		f();
	}
	return 0;
}
