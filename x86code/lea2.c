/*$ check leal\s+_?a.*\(%.*,%.*,4\), %eax $*/
unsigned a;

unsigned lea(unsigned base, unsigned index)
{
	unsigned offset = base + (index << 2);
	return (unsigned)&a + offset;
}

int main(void)
{
	(void)lea;
	return 0;
}
