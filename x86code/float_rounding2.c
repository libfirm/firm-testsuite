/*$ check[1] fst $*/

double c;

void f(double a, double b)
{
	/* Storing to a double does not require cutting off exess precision beforehand. */
	c = a + b;
}

int main(void) { return 0; }
