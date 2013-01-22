/* all this stuff is undefined behaviour according to C99. All compilers I tried
 * skip it without any error messages (if inside a #if 0), so we should do that
 * too. */
#if 0
#include <foo\
	bar\blup.h>
#include <endless
#include "endless
#include /*
*/
#include //
#endif
