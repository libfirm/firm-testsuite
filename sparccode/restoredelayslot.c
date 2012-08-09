int a = 0;
int n = 1;

extern int rand();

int main(void)
{
	rand();
	/* cparse used to pull up the restore into the div delay slot
	 * (and mess up the registers) */
	return a / n;
}
