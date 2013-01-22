#define OMACRO
#define FMACRO()

#if 2+3 != 5
#error 2+3 != 5
#endif

#if 10+-2*3 != 15-11
#error 10+-2*3 != 15-11
#endif

#if defined(OMACRO)==0
#error defined(OMACRO)==0
#endif

#if defined(FMACRO) < 1
#error defined(OMACRO)<1
#endif

#if defined(OMACRO)+defined(FMACRO) <= 1 || defined(OMACRO)+defined(FMACRO) >= 3
#error defined(OMACRO)+defined(FMACRO) <= 1 || defined(OMACRO)+defined(FMACRO) >= 3
#endif

#if !(3 - defined(NOTDEFINED) > 2)
#error !(3 - defined(NOTDEFINED) > 2)
#endif

#if !('a' && 5 ? 0 : 1) - (3>4 ? 42 : 1)
#error !('a' && 5 ? 0 : 1) - (3>4 ? 42 : 1)
#endif

#if L'\013' != 013
#error L'\013' != 013
#endif

#define C0 0x16BCD6FE
#define C1 0x6BADF00D
#if (0xC8526AB6 ^ C0 & C1 | ((~~0xe*044/-2)%11l)+14) != 0xCaFebABeu
#error 0xC8526AB6 ^ C0 & C1 | ((~~0xe*044/-2)%11l)+14 != 0xCaFebABeu
#endif
