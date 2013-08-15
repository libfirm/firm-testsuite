int main(void)
{
	return 0;
}

extern int __attribute__((alias("doesnotexist"))) var;
