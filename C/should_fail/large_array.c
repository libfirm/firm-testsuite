/* strictly the behaviour of this is implementation defined I think, but every
 * sane compiler should report an error here
 * 3 * 7 * 29 * 36760123 * 823996703 = 2^64 + 5 */
int a[609][36760123][823996703];

int main(void)
{
	a[608][36760122][823996702] = 0;
	return a[608][36760122][823996702] = 0;
}
