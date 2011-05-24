/*$ !check j[a-z]* .L $*/
/*$ cflags -fno-if-conversion $*/

int x;

int main (void) {
	x && x;
	return 0;
}
