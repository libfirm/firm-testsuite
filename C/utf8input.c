#include <stdio.h>
#include <wchar.h>
#include <assert.h>

int main(void)
{
#ifdef __STDC_ISO_10646__
	/* K - normal ascii character (a 1 byte UTF-8 encoding) */
	assert(L"K"[0] == 0x004B);
	/* "a - german accents (a 2 byte UTF-8 encoding) */
	assert(L"ä"[0] == 0x00E4);
	/* (R) - symbol (a 2 byte UTF-8 encoding) */
	assert(L"®"[0] == 0x00AE);
	/* Euro symbol (a 3 byte UTF-8 encoding) */
	assert(L"€"[0] == 0x20AC);
	/* violin clef (a 4 byte UTF-8 encoding) */
	assert(L"𝄞"[0] == 0x1D11E);
	/* note: 5 or more byte encodings are forbidden in newer UTF-8 standards */
#endif

	return 0;
}
