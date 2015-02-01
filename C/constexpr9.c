typedef struct {
    int field;
} A;
typedef char __C_ASSERT__[((long)&(((A *)0)->field) == 0) ? 1 : -1];

int main(void)
{
	return 0;
}
