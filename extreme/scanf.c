#include <stdio.h>
#include <wchar.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <math.h>

int do_test(int func, const char *name,
	const char *fmt, const wchar_t *wfmt,
	const char *input, int xret, int xlen,
	const void *expect, size_t size, void *obuf)
{
	int consumed = 0;
	int err = 0;
	FILE *f;
	int ret;
	int same;

	if (func&1) {
		f = tmpfile();
		if (!f) {
			printf("%s: cannot create temp file: %s\n",
				name, strerror(errno));
			return 1;
		}
		if (func&2) fwprintf(f, L"%s", input);
		else fputs(input, f);
		rewind(f);
		if (func&2) ret = fwscanf(f, wfmt, obuf, &consumed);
		else ret = fscanf(f, fmt, obuf, &consumed);
	} else {
		wchar_t winput[1024];
		swprintf(winput, 1024, L"%s", input);
		if (func&2) ret = swscanf(winput, wfmt, obuf, &consumed);
		else ret = sscanf(input, fmt, obuf, &consumed);
	}

	if (func&1) {
		int final = ftell(f);
		if (final != xlen) {
			printf("%s: wrong final position %d, should be %d\n",
				name, final, xlen);
			err = 1;
		}
		fclose(f);
	}

	if (ret != xret) {
		if (ret>0)
			printf("%s: returned %d (consumed %d), expected %d\n",
				name, ret, consumed, xret);
		else
			printf("%s: returned %d, expected %d\n",
				name, ret, xret);
		return 1;
	}

	if (ret <= 0) return err;

	if (consumed != xlen) {
		printf("%s: consumed %d, should have consumed %d\n",
			name, consumed, xlen);
		err = 1;
	}

	/* We assume no padding bits except possibly long double. */
	if (size == sizeof(long double) && strchr(fmt, 'L'))
		same = *(long double *)obuf == *(long double *)expect;
	else
		same = !memcmp(expect, obuf, size);
	if (!same) {
		printf("%s: wrong value: ", name);
		return 2;
	}

	return err;
}


#define TEST_1(func,name,fmt,in,xr,xl,type,ex,ofmt,obuf) do { \
	memset(obuf, 0, sizeof ex); \
	switch (do_test(func,name,fmt "%n",fmt L"%n",in,xr,xl,(type[]){ex},sizeof ex,obuf)) { \
	case 2: if (#ex[0]=='"' || #ex[0]=='L') \
	printf(ofmt ", expected " ofmt "\n", (type *)obuf, ex); \
	else printf(ofmt ", expected " ofmt "\n", *(type *)obuf, ex); \
	case 1: err++; } } while (0)

#define TEST(fmt,in,xr,xl,type,ex,ofmt) do { \
TEST_1(0,"sscanf(" #in "," #fmt ")",fmt,in,xr,xl,type,ex,ofmt,obuf); \
TEST_1(1,"fscanf(" #in "," #fmt ")",fmt,in,xr,xl,type,ex,ofmt,obuf); \
TEST_1(2,"swscanf(" #in "," #fmt ")",fmt,in,xr,xl,type,ex,ofmt,obuf); \
TEST_1(3,"fwscanf(" #in "," #fmt ")",fmt,in,xr,xl,type,ex,ofmt,obuf); \
} while (0)

/* TEST macro takes 7 arguments:
 * - format string ("%n" is automatically appended to test termination)
 * - input text to scan
 * - expected return value (-1, 0, or 1)
 * - expected number of characters consumed
 * - data type (char or wchar_t for strings) of result
 * - expected result
 * - format for printing result mismatches
 * All arguments should be literals of the correct type, not
 * programmatically generated. The macro does some crazy stuff.
 */

int main()
{
	void *obuf = malloc(256);
	int err=0;

	TEST("%9d", "9999999999", 1, 9, int, 999999999, "%d");
	TEST("%5s", "abcdefg", 1, 5, char, "abcde", "%s");
	TEST("%5[abc]", "ababab", 1, 5, char, "ababa", "%s");
	TEST("%x", "0xq", 0, 2, int, 0, "%d");
	TEST("%Lf", "1.0", 1, 3, long double, 1.0, "%La");

	TEST("%d", "123", 1, 3, int, 123, "%d");
	TEST("%d", "123a", 1, 3, int, 123, "%d");
	TEST("%d", "0x2", 1, 1, int, 0, "%d");
	TEST("%3d", "12345", 1, 3, int, 123, "%d");
	TEST("%d", "0123", 1, 4, int, 123, "%d");
	TEST("%d", "088", 1, 3, int, 88, "%d");
	TEST("%d", "  123", 1, 5, int, 123, "%d");
	TEST("%d", "+", 0, 1, int, 0, "%d");
	TEST("%1d", "+1", 0, 1, int, 0, "%d");
	TEST("%d", "+inf", 0, 1, int, 0, "%d");
	TEST("%d", "", -1, 0, int, 0, "%d");
	TEST("%d", "hello", 0, 0, int, 0, "%d");

	TEST("%i", "123", 1, 3, int, 123, "%d");
	TEST("%i", "123a", 1, 3, int, 123, "%d");
	TEST("%i", "0x2", 1, 3, int, 2, "%#x");
	TEST("%3i", "12345", 1, 3, int, 123, "%d");
	TEST("%i", "0123", 1, 4, int, 0123, "%#o");
	TEST("%i", "088", 1, 1, int, 0, "%d");
	TEST("%i", "  123", 1, 5, int, 123, "%d");
	TEST("%i", "+", 0, 1, int, 0, "%d");
	TEST("%1i", "+1", 0, 1, int, 0, "%d");
	TEST("%i", "+inf", 0, 1, int, 0, "%d");
	TEST("%i", "", -1, 0, int, 0, "%d");
	TEST("%i", "hello", 0, 0, int, 0, "%d");

	TEST("%o", "7", 1, 1, unsigned, 7, "%#o");
	TEST("%o", "007", 1, 3, unsigned, 7, "%#o");
	TEST("%o", "3778", 1, 3, unsigned, 0377, "%#o");
	TEST("%2o", "377", 1, 2, unsigned, 037, "%#o");
	TEST("%o", " 7", 1, 2, unsigned, 7, "%#o");
	TEST("%o", "+", 0, 1, unsigned, 0, "%#o");
	TEST("%1o", "+1", 0, 1, unsigned, 0, "%#o");
	TEST("%o", "+@", 0, 1, unsigned, 0, "%#o");
	TEST("%o", "", -1, 0, unsigned, 0, "%#o");
	TEST("%o", "hello", 0, 0, unsigned, 0, "%#o");

	TEST("%u", "-1", 1, 2, unsigned, -1U, "%u");
	TEST("%u", " 1", 1, 2, unsigned, 1U, "%u");
	TEST("%u", "- 1", 0, 1, unsigned, 0U, "%u");

	TEST("%x", "101", 1, 3, unsigned, 0x101, "%#x");
	TEST("%x", "123a", 1, 4, unsigned, 0x123a, "%#x");
	TEST("%x", "0xff", 1, 4, unsigned, 0xff, "%#x");
	TEST("%x", "123g", 1, 3, unsigned, 0x123, "%#x");
	TEST("%3x", "12345", 1, 3, unsigned, 0x123, "%#x");
	TEST("%x", "0123", 1, 4, unsigned, 0x123, "%#x");
	TEST("%x", "088", 1, 3, unsigned, 0x88, "%#x");
	TEST("%x", " 101", 1, 4, unsigned, 0x101, "%#x");
	TEST("%x", "+", 0, 1, unsigned, 0, "%#x");
	TEST("%1x", "+1", 0, 1, unsigned, 0, "%#x");
	TEST("%x", "-0x", 0, 3, unsigned, 0, "%#x");
	TEST("%3x", "-0x1", 0, 3, unsigned, 0, "%#x");
	TEST("%x", "", -1, 0, unsigned, 0, "%#x");
	TEST("%x", "hello", 0, 0, unsigned, 0, "%#x");

	TEST("%f", "1.1", 1, 3, float, 1.1f, "%a");
	TEST("%lf", "1.1", 1, 3, double, 1.1, "%a");
	TEST("%Lf", "1.1", 1, 3, long double, 1.1l, "%a");
	TEST("%4f", "1.251", 1, 4, float, 1.25f, "%a");
	TEST("%f", "1.25p", 1, 4, float, 1.25f, "%a");
	TEST("%f", "-0x1p-2", 1, 7, float, -0x1p-2f, "%a");
	TEST("%f", "+1.e5", 1, 5, float, 100000.0f, "%f");
	TEST("%f", "-inf", 1, 4, float, -INFINITY, "%f");
	TEST("%f", " 1.0", 1, 4, float, 1.0f, "%a");

	TEST("%f", "+", 0, 1, float, 0.0f, "%a");
	TEST("%f", "+.", 0, 2, float, 0.0f, "%a");
	TEST("%f", "+..", 0, 2, float, 0.0f, "%a");
	TEST("%f", "+.e", 0, 2, float, 0.0f, "%a");
	TEST("%f", "+.e0", 0, 2, float, 0.0f, "%a");
	TEST("%f", "+1.e", 0, 4, float, 0.0f, "%a");
	TEST("%f", "+1.e.", 0, 4, float, 0.0f, "%f");
	TEST("%6f", "-0x1p-2", 0, 6, float, 0.0f, "%a");

	TEST("%f", "", -1, 0, float, 0.0f, "%f");
	TEST("%f", "bye", 0, 0, float, 0.0f, "%f");

	TEST("%f", "i", 0, 1, float, 0.0f, "%f");
	TEST("%f", "in", 0, 2, float, 0.0f, "%f");
	TEST("%f", "inf", 1, 3, float, INFINITY, "%f");
	TEST("%f", "infi", 0, 4, float, 0.0f, "%f");
	TEST("%f", "infin", 0, 5, float, 0.0f, "%f");
	TEST("%f", "infini", 0, 6, float, 0.0f, "%f");
	TEST("%f", "infinit", 0, 7, float, 0.0f, "%f");
	TEST("%f", "infinity", 1, 8, float, INFINITY, "%f");
	TEST("%f", "  inf", 1, 5, float, INFINITY, "%f");

	TEST("%s", "happy", 1, 5, char, "happy", "%s");
	TEST("%s", "happy birthday", 1, 5, char, "happy", "%s");
	TEST("%s", "   hello", 1, 8, char, "hello", "%s");
	TEST("%s", "goodbye   ", 1, 7, char, "goodbye", "%s");
	TEST("%4s", "goodbye", 1, 4, char, "good", "%s");
	TEST("%s", "", -1, 0, char, "", "%s");
	TEST("%s", "     ", -1, 5, char, "", "%s");

	TEST("%ls", "happy", 1, 5, wchar_t, L"happy", "%ls");
	TEST("%ls", "happy birthday", 1, 5, wchar_t, L"happy", "%ls");
	TEST("%ls", "   hello", 1, 8, wchar_t, L"hello", "%ls");
	TEST("%ls", "goodbye   ", 1, 7, wchar_t, L"goodbye", "%ls");
	TEST("%4ls", "goodbye", 1, 4, wchar_t, L"good", "%ls");
	TEST("%ls", "", -1, 0, wchar_t, L"", "%ls");
	TEST("%ls", "     ", -1, 5, wchar_t, L"", "%ls");

	TEST("%[abc]", "abab", 1, 4, char, "abab", "%s");
	TEST("%[abc]", "abadaba", 1, 3, char, "aba", "%s");
	TEST("%3[abc]", "abab", 1, 3, char, "aba", "%s");
	TEST("%[abc]", "", -1, 0, char, "", "%s");
	TEST("%[abc]", "d", 0, 0, char, "", "%s");
	TEST("%[]]", "][", 1, 1, char, "]", "%s");
	TEST("%[^]]", "][", 0, 0, char, "", "%s");
	TEST("%[-]", "--", 1, 2, char, "--", "%s");
	TEST("%[@-]", "A", 0, 0, char, "", "%s");
	TEST("%[-z]", "a", 0, 0, char, "", "%s");
	TEST("%[abc]", " abab", 0, 0, char, "", "%s");
	TEST("%[ abc]", " abab", 1, 5, char, " abab", "%s");

	TEST("%l[abc]", "abab", 1, 4, wchar_t, L"abab", "%ls");
	TEST("%l[abc]", "abadaba", 1, 3, wchar_t, L"aba", "%ls");
	TEST("%3l[abc]", "abab", 1, 3, wchar_t, L"aba", "%ls");
	TEST("%l[abc]", "", -1, 0, wchar_t, L"", "%ls");
	TEST("%l[abc]", "d", 0, 0, wchar_t, L"", "%ls");
	TEST("%l[]]", "][", 1, 1, wchar_t, L"]", "%ls");
	TEST("%l[^]]", "][", 0, 0, wchar_t, L"", "%ls");
	TEST("%l[-]", "--", 1, 2, wchar_t, L"--", "%ls");
	TEST("%l[@-]", "A", 0, 0, wchar_t, L"", "%ls");
	TEST("%l[-z]", "a", 0, 0, wchar_t, L"", "%ls");
	TEST("%l[abc]", " abab", 0, 0, wchar_t, L"", "%s");
	TEST("%l[ abc]", " abab", 1, 5, wchar_t, L" abab", "%s");

	TEST("%c", "wow", 1, 1, char, "w", "%s");
	TEST("%3c", "wow", 1, 3, char, "wow", "%s");
	TEST("%3c", "wo", 0, 2, char, "", "%s");
	TEST("%c", "", -1, 0, char, "", "%s");
	TEST("%c", " wow", 1, 1, char, " ", "%s");

	TEST("%lc", "wow", 1, 1, wchar_t, L"w", "%ls");
	TEST("%3lc", "wow", 1, 3, wchar_t, L"wow", "%ls");
	TEST("%3lc", "wo", 0, 2, wchar_t, L"", "%ls");
	TEST("%lc", "", -1, 0, wchar_t, L"", "%ls");
	TEST("%lc", " wow", 1, 1, wchar_t, L" ", "%ls");

	return !!err;
}
