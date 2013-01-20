/*$ -finput-charset=iso8859-15 $*/
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
	assert(L"¤"[0] == 0x20AC);
	assert(L"¦"[0] == 0x0160);
	assert(L"¨"[0] == 0x0161);
	assert(L"´"[0] == 0x017D);
	assert(L"¸"[0] == 0x017E);
	assert(L"¼"[0] == 0x0152);
	assert(L"½"[0] == 0x0153);
	assert(L"¾"[0] == 0x0178);
#endif

	return 0;
}
