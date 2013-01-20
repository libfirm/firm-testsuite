/*$ -finput-charset=iso8859-1 $*/
#include <stdio.h>
#include <wchar.h>
#include <assert.h>

int main(void)
{
#ifdef __STDC_ISO_10646__
	assert(L"K"[0] == 0x004B);
	assert(L"ä"[0] == 0x00E4);
	assert(L"ÿ"[0] == 0x00FF);
	assert(L" "[0] == 0x00A0);
#endif

	return 0;
}
