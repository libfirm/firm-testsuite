int main(void)
{
	(void)sizeof(enum { A });
	enum { B };
	return A + B;
}
