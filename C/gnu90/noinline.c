/*$ -fno-inline $*/
#include <stdlib.h>

inline void inlinef(void) {
	rand();
}

int main(void)
{
	inlinef();

	return 0;
}
