int x;
int main(void)
{
	1 && ({ goto L0; 1; });
L0:
	x ? (void)0 : ({ goto L1; });
L1:
	x = (({ goto L2; }), 1);
L2:
	return 0;
}
