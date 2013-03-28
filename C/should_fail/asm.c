int main(int argc, char **argv)
{
	unsigned x;
	__asm__(  " /* %[DOESNOTEXIST] */" : [foo] "=r" (x) : "r" (argc));
	__asm__(  "/* %[DOES"
			  "NOTEXIST] */" : [foo] "=r" (x) : "r" (argc));
	return x-x;
}
