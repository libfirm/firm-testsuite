/*$ -fno-if-conversion $*/
typedef struct
{
	int x;
} struct1;

typedef struct
{
    int x;
    struct1 y;
} struct2;

int a;
struct2 b;
struct1 c;

struct1 __attribute__((noinline)) fn1(void)
{
	return c;
}

int __attribute__((noinline)) fn3(int x)
{
	return a;
}

int fn2(void)
{
    int c = a;
    b.y = fn1();
    fn3(0 > c);

    return 0;
}

int main(void)
{
	return 0;
}
