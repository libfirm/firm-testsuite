static int fn1(void)
{
	return 0;
}

int main(void)
{
	typedef int function(void);
	function *func = &fn1;

	return func();
}
