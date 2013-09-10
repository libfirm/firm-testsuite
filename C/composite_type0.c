enum E {
	A = -1,
	B =  0,
	C =  1
};

enum E x;
int    x;

enum E* y;
int*    y;

int main(void)
{
	int z = 0;
	return *(1 ? y : &z);
}
