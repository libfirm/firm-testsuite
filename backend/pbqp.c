/*$ -bra-chordal-coloring=pbqp $*/

int a;
char b;

int main(void)
{
	if (a) {
		int c = b++;
		b %= a;
		return c;
	}

	return 0;
}
