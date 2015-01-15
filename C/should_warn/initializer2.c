static int a;
static int b[1] = { 0, a };

int main(void)
{
	return b[0];
}
