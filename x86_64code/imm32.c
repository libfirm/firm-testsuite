/*$ check leal\s+-1\( $*/
unsigned __attribute__((noinline)) addX(unsigned x)
{
	return x*2 + 0xffffffff;
}

int main(void)
{
	return addX(2) - 3;
}
