extern unsigned       a;
extern unsigned short b;

void f(unsigned const* const p1, unsigned char const p2)
{
	unsigned      eax = a;
	unsigned char cl  = 10;
	eax = eax & 0xFFFF0000 | (((eax & 0x0000FFFF) % cl) & 0xFF) << 8 | (eax & 0x0000FFFF) / cl & 0xFF;
	eax = eax & 0xFFFF00FF | p2 << 8 & 0x0000FF00;
	eax = eax & 0xFFFFFF00 | (eax + '0')      & 0x000000FF;
	eax = eax & 0xFFFF00FF | (eax + '0' << 8) & 0x0000FF00;
	b = eax;
	eax = eax & 0xFFFFFF00 | (eax - '0') & 0x000000FF;
	eax = eax & 0xFFFF0000 | (eax & 0x000000FF) * cl;
	eax = eax & 0xFFFFFF00 | (eax + p2) & 0x000000FF;
	a = eax;
}
