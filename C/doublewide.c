#include <stdio.h>
#include <wchar.h>

int main(void) {
	wchar_t const* s = L"Ha" L"llo\n";
	while (*s != L'\0') {
		putchar(*s++);
	}
	return 0;
}
