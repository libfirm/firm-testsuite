/* strictly the behaviour of this is implementation defined I think, but every
 * sane compiler should report an error here */
int a[2147483647][2147483647][2147483647];

int main(void)
{
	a[2147483646][2147483646][2147483646] = 0;
	return a[2147483646][2147483646][2147483646] = 0;
}
