int main(int argc, char **argv)
{
	unsigned x;
	__asm__(  " /* %[foo] */" : [foo] "=r" (x) : [foo] "0" (x));
	return x-x;
}
