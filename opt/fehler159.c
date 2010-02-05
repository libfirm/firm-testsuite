/*$  -fgvn-pre -fno-gcse $*/

#include "rand.h"

int test() {
	int i;
	char inUse16[16];

	i = 0;
   	do {
    	if (my_rand() == 1)
        	inUse16[i] = 1;
        else
        	inUse16[i] = 0;
        ++i;
    } while (i < 16);

    return inUse16[0];
}

int main(void)
{
	return 0;
}
