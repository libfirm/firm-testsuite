int* HdTrue;
int x;

static void f (int pos, int* hdVal)
{
	if ( pos <= 2 && hdVal == HdTrue && HdTrue == HdTrue) {
		x;
	}
}

int main(void) {
	f(0, &x);
	return 0;
}
