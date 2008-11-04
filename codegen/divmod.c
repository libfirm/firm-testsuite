struct div
{
	int quot;
	int rem;
};

struct div divmod(int dividend, int divisor)
{
	struct div res;
	res.quot = dividend / divisor;
	res.rem  = dividend % divisor;
	return res;
}
