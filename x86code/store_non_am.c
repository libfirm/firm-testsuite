/*$ check cmpl \$0, \(%.*\) $*/

int a[] = {0, 1};
int *b;
int *c = a;

int main(void)
{
	int *x = c + 1;
	b = x;
	return *x == 0;
}
