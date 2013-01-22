#define OMACRO
#define FMACRO()

#if 2+3 == 5
correct
#else
wrong
#endif

#if 10+-2*3 == 15-11
correct
#else
wrong
#endif

#if defined(OMACRO)
correct
#else
wrong
#endif

#if defined(FMACRO)
correct
#else
wrong
#endif

#if defined(OMACRO)+defined(FMACRO) <= 1 || defined(OMACRO)+defined(FMACRO) >= 3
wrong
#else
correct
#endif

#if !defined(NOTDEFINED)
correct
#else
wrong
#endif

#if !('a' && 5 ? 0 : 1) - (3>4 ? 42 : 0)
correct
#else
wrong
#endif

#if L'\013' != 013
#error L'\013' != 013
#endif

#define C0 0x16BCD6FE
#define C1 0x6BADF00D

#if 0xC8526AB6 ^ C0 & C1 | (-~((0xe*044/-2)%11l)+2) == 0xCAFEBABEu
correct
#else
wrong
#endif
