#include <assert.h>

struct console_t {
	short text[32768];
	int linewidth;
};

struct console_t con;

int main(void)
{
	assert( (((char*)&con.linewidth - (char*)&con)) == sizeof(short)*32768 );
	return 0;
}
