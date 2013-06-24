void blup(x)
	_Static_assert(2, "old-school K&R with new-school assert");
	int x;
{
}
int main(void)
{
	for (_Static_assert(4, "in for"); 0;) {
	}
	return 0;
}
