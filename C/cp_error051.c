#include <stdio.h>

int main(void)
{
	int i = 1;
	for (__extension__ i = 0;;)
		break;
	puts(i ? "bad" : "good");
	return i;
}
