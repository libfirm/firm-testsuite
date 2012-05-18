#include <stdio.h>
#include <wchar.h>

int main(void)
{
	int i = 42;
	wprintf(L"%x", i);
	return 0;
}
