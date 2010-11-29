/* some cases of nested switchs fail during firmgraph construction */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a = 1;
	int b = 2;
	int c = 3;
	switch (a+b) {
	case 127000:
		c = c-1;
		switch (c+b) {
		case 1:
			return 1;
		default:
			return 4;
		}
		break;
	default:
		c = c+1;
	}
	return 0;
}
