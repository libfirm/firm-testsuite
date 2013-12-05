int a = -1L;
int b = -1L;
int c = -1L;
int d = -1L;

int main(void)
{
	return ((a & (int)0x00000080)) <= 0 |
	       ((b & (int)0x00008000)) <= 0 |
	       ((c & (int)0x00800000)) <= 0 |
	       ((d & (int)0x80000000)) >  0;
}
