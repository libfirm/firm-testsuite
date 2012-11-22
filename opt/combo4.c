int a;

int f(int b, int c)
{
    int d    = 0;
    int notb = !b;

    if (notb) {
	if (c) {
	    d = a;
	}

	a = 0;
    }

    if (!notb && !c) {
	    d = a;
    }

    return a && d;
}

int main(void)
{
	return 0;
}
