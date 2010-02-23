/* make sure the format checker doesn't crash on strange input */
#include <stdlib.h>

extern int __attribute__((format(printf, 3, 4))) snprintf(char *buffer, size_t len, const char *str, ...);

char buffer[128];

int main(void)
{
	/* we print into the buffer as I don't know how printfs on different archs
	 * react to these formats */
	snprintf(buffer, sizeof(buffer), "%");
	snprintf(buffer, sizeof(buffer), "%l");
	snprintf(buffer, sizeof(buffer), "%h");
	snprintf(buffer, sizeof(buffer), "%L");
	snprintf(buffer, sizeof(buffer), "%%");
	snprintf(buffer, sizeof(buffer), "%w");
	return 0;
}
