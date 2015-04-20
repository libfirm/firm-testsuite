signed   char  s1;
unsigned char  u1;
signed   short s2;
unsigned short u2;

void destam_shl(void)
{
	u1 = u1 << 3; /*$ check[1] shlb $*/
	u2 = u2 << 3; /*$ check[1] shlw $*/
}

void destam_shr(void)
{
	u1 = u1 >> 3; /*$ check[1] shrb $*/
	u2 = u2 >> 3; /*$ check[1] shrw $*/
}

void destam_shrs(void)
{
	s1 = s1 >> 3; /*$ check[1] sarb $*/
	s2 = s2 >> 3; /*$ check[1] sarw $*/
}

int main(void)
{
	return 0;
}
