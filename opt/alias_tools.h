#include <stddef.h>
#include <assert.h>
#include <assert.h>

extern void *malloc(size_t sz) __attribute__((malloc));
extern void printf(const char *str, ...);

const void *escape_hatch;

static void __attribute__((noinline)) escape(const void *p)
{
    /* let the compiler think that the address of the object pointed to by
     * p has escaped. */
    escape_hatch = p;
    printf(""); /* external function call, it could use the escape_hatch */
}

#define CHECK_COMMUTATIVE(a,b)   assert(__builtin_may_alias((a),(b)) == __builtin_may_alias((b),(a)));
#define NOT(a,b)  CHECK_COMMUTATIVE(a,b); printf("%d should be 0: may_alias(%s, %s) = %d\n", i++, #a, #b, __builtin_may_alias((a), (b)))
#define MAY(a,b)  CHECK_COMMUTATIVE(a,b); printf("%d must not be 0: may_alias(%s, %s) = %d\n", i++, #a, #b, __builtin_may_alias((a), (b)))
#define MUST(a,b)  CHECK_COMMUTATIVE(a,b); printf("%d must not be 0: may_alias(%s, %s) = %d\n", i++, #a, #b, __builtin_may_alias((a), (b)))
