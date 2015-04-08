int a;
int b;

void fn1(void)
{
	switch (a) {
	case 0:
		if (b) {
			fn1();
		}
	}
}

int main(void)
{
	return 0;
}
