#include <stdio.h>

char const* s = "bla";

int main(void)
{
	char const* const v = s;
#define M___1 puts(v);
#define M___2 M___1 M___1
#define M___4 M___2 M___2
#define M___8 M___4 M___4
#define M___8 M___4 M___4
#define M__16 M___8 M___8
#define M__32 M__16 M__16
#define M__64 M__32 M__32
#define M_128 M__64 M__64
#define M_256 M_128 M_128
#define M_512 M_256 M_256
#define M1024 M_512 M_512
	M_256
	return 0;
}
