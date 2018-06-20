/*$ -O0 $*/
int main(void)
{
	unsigned long long v = 0;
	v += 0x40000000ULL;
	v += 0x40000000ULL;
	v += 0x40000000ULL;
	v += 0x40000000ULL;
	return v != 0x100000000ULL;
}
