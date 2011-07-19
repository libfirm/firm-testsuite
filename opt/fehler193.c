char a = 0;
char b = 0;
int  c = 0x00000000;
int  d = 0x03000000;

int main(void)
{
	return ((a ^ b) | (char)(c ^ d)) != 0;
}
