/*$ check testw .0x2A2A, _?x $*/
unsigned short x = 0x1717;

int main(void)
{
	return (x & 0x2A2A) == 0;
}
