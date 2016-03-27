/** start this with -Wall and get way too many warnings about unreachable
 * statements */







# 1 "ir/be/beprefalloc.c"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "ir/be/beprefalloc.c"
# 28 "/usr/include/x86_64-linux-gnu/bits/mathdef.h" 3
typedef float float_t;
typedef double double_t;
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atan2 (double __y, double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double cos (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cos (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sin (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sin (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tan (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tan (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double cosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double sinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double tanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __tanh (double __x) __attribute__ ((__nothrow__ , __leaf__));
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double acosh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __acosh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double asinh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __asinh (double __x) __attribute__ ((__nothrow__ , __leaf__));

extern double atanh (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __atanh (double __x) __attribute__ ((__nothrow__ , __leaf__));







extern double exp (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __frexp (double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern double __ldexp (double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern double log (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log10 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log10 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern double __modf (double __x, double *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __expm1 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log1p (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log1p (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double logb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __logb (double __x) __attribute__ ((__nothrow__ , __leaf__));






extern double exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __exp2 (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double log2 (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __log2 (double __x) __attribute__ ((__nothrow__ , __leaf__));
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __pow (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __sqrt (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __hypot (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));






extern double cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __cbrt (double __x) __attribute__ ((__nothrow__ , __leaf__));
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __ceil (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fabs (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __floor (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fmod (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinf (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finite (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __drem (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double significand (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __significand (double __x) __attribute__ ((__nothrow__ , __leaf__));





extern double copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __copysign (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern double nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nan (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnan (double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double j0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double j1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __j1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double jn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __jn (int, double) __attribute__ ((__nothrow__ , __leaf__));
extern double y0 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y0 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double y1 (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __y1 (double) __attribute__ ((__nothrow__ , __leaf__));
extern double yn (int, double) __attribute__ ((__nothrow__ , __leaf__)); extern double __yn (int, double) __attribute__ ((__nothrow__ , __leaf__));






extern double erf (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erf (double) __attribute__ ((__nothrow__ , __leaf__));
extern double erfc (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __erfc (double) __attribute__ ((__nothrow__ , __leaf__));
extern double lgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double tgamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __tgamma (double) __attribute__ ((__nothrow__ , __leaf__));





extern double gamma (double) __attribute__ ((__nothrow__ , __leaf__)); extern double __gamma (double) __attribute__ ((__nothrow__ , __leaf__));






extern double lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern double __lgamma_r (double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern double rint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __rint (double __x) __attribute__ ((__nothrow__ , __leaf__));


extern double nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nextafter (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern double nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __nexttoward (double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __remainder (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));



extern double scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbn (double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogb (double __x) __attribute__ ((__nothrow__ , __leaf__));




extern double scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalbln (double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern double nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern double __nearbyint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __round (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern double trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __trunc (double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern double remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern double __remquo (double __x, double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrint (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrint (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrint (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lround (double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llround (double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llround (double __x) __attribute__ ((__nothrow__ , __leaf__));



extern double fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)); extern double __fdim (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__));


extern double fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmax (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern double fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern double __fmin (double __x, double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassify (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbit (double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern double fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__)); extern double __fma (double __x, double __y, double __z) __attribute__ ((__nothrow__ , __leaf__));
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern double scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__)); extern double __scalb (double __x, double __n) __attribute__ ((__nothrow__ , __leaf__));
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atan2f (float __y, float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float cosf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cosf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float coshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __coshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __tanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __acoshf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __asinhf (float __x) __attribute__ ((__nothrow__ , __leaf__));

extern float atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __atanhf (float __x) __attribute__ ((__nothrow__ , __leaf__));







extern float expf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __frexpf (float __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern float __ldexpf (float __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern float logf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log10f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log10f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern float __modff (float __x, float *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __expm1f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log1pf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float logbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __logbf (float __x) __attribute__ ((__nothrow__ , __leaf__));






extern float exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __exp2f (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float log2f (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __log2f (float __x) __attribute__ ((__nothrow__ , __leaf__));
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __powf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __sqrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __hypotf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));






extern float cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __cbrtf (float __x) __attribute__ ((__nothrow__ , __leaf__));
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __ceilf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fabsf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __floorf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmodf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinff (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitef (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __dremf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float significandf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __significandf (float __x) __attribute__ ((__nothrow__ , __leaf__));





extern float copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __copysignf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern float nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nanf (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanf (float __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float j0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float j1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __j1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float jnf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __jnf (int, float) __attribute__ ((__nothrow__ , __leaf__));
extern float y0f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y0f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float y1f (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __y1f (float) __attribute__ ((__nothrow__ , __leaf__));
extern float ynf (int, float) __attribute__ ((__nothrow__ , __leaf__)); extern float __ynf (int, float) __attribute__ ((__nothrow__ , __leaf__));






extern float erff (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erff (float) __attribute__ ((__nothrow__ , __leaf__));
extern float erfcf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __erfcf (float) __attribute__ ((__nothrow__ , __leaf__));
extern float lgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float tgammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __tgammaf (float) __attribute__ ((__nothrow__ , __leaf__));





extern float gammaf (float) __attribute__ ((__nothrow__ , __leaf__)); extern float __gammaf (float) __attribute__ ((__nothrow__ , __leaf__));






extern float lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern float __lgammaf_r (float, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern float rintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __rintf (float __x) __attribute__ ((__nothrow__ , __leaf__));


extern float nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nextafterf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern float nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __nexttowardf (float __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __remainderf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));



extern float scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbnf (float __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbf (float __x) __attribute__ ((__nothrow__ , __leaf__));




extern float scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalblnf (float __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern float nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern float __nearbyintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __roundf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern float truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __truncf (float __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern float remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern float __remquof (float __x, float __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundf (float __x) __attribute__ ((__nothrow__ , __leaf__));



extern float fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)); extern float __fdimf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__));


extern float fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fmaxf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern float fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern float __fminf (float __x, float __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitf (float __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern float fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__)); extern float __fmaf (float __x, float __y, float __z) __attribute__ ((__nothrow__ , __leaf__));
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern float scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__)); extern float __scalbf (float __x, float __n) __attribute__ ((__nothrow__ , __leaf__));
# 54 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atan2l (long double __y, long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cosl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __coshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
# 88 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __acoshl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __asinhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));

extern long double atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __atanhl (long double __x) __attribute__ ((__nothrow__ , __leaf__));







extern long double expl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __frexpl (long double __x, int *__exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ldexpl (long double __x, int __exponent) __attribute__ ((__nothrow__ , __leaf__));


extern long double logl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log10l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__)); extern long double __modfl (long double __x, long double *__iptr) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__nonnull__ (2)));
# 129 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __expm1l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log1pl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __logbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));






extern long double exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __exp2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __log2l (long double __x) __attribute__ ((__nothrow__ , __leaf__));
# 154 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __powl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __sqrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __hypotl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));






extern long double cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __cbrtl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
# 179 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __ceill (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fabsl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __floorl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmodl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));




extern int __isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int __finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int isinfl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern int finitel (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __dreml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __significandl (long double __x) __attribute__ ((__nothrow__ , __leaf__));





extern long double copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __copysignl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));






extern long double nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nanl (const char *__tagb) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));





extern int __isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int isnanl (long double __value) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double j0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double j1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __j1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __jnl (int, long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y0l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y0l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double y1l (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __y1l (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __ynl (int, long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double erfl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double erfcl (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __erfcl (long double) __attribute__ ((__nothrow__ , __leaf__));
extern long double lgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double tgammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __tgammal (long double) __attribute__ ((__nothrow__ , __leaf__));





extern long double gammal (long double) __attribute__ ((__nothrow__ , __leaf__)); extern long double __gammal (long double) __attribute__ ((__nothrow__ , __leaf__));






extern long double lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__)); extern long double __lgammal_r (long double, int *__signgamp) __attribute__ ((__nothrow__ , __leaf__));







extern long double rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __rintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));


extern long double nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nextafterl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));

extern long double nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __nexttowardl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remainderl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));



extern long double scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbnl (long double __x, int __n) __attribute__ ((__nothrow__ , __leaf__));



extern int ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern int __ilogbl (long double __x) __attribute__ ((__nothrow__ , __leaf__));




extern long double scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalblnl (long double __x, long int __n) __attribute__ ((__nothrow__ , __leaf__));



extern long double nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long double __nearbyintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __roundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern long double truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __truncl (long double __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));




extern long double remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__)); extern long double __remquol (long double __x, long double __y, int *__quo) __attribute__ ((__nothrow__ , __leaf__));






extern long int lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llrintl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long int lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long int __lroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));
extern long long int llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__)); extern long long int __llroundl (long double __x) __attribute__ ((__nothrow__ , __leaf__));



extern long double fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fdiml (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__));


extern long double fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fmaxl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));


extern long double fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)); extern long double __fminl (long double __x, long double __y) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));



extern int __fpclassifyl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));


extern int __signbitl (long double __value) __attribute__ ((__nothrow__ , __leaf__))
     __attribute__ ((__const__));



extern long double fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__)); extern long double __fmal (long double __x, long double __y, long double __z) __attribute__ ((__nothrow__ , __leaf__));
# 364 "/usr/include/x86_64-linux-gnu/bits/mathcalls.h" 3
extern long double scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__)); extern long double __scalbl (long double __x, long double __n) __attribute__ ((__nothrow__ , __leaf__));
# 152 "/usr/include/math.h" 3
extern int signgam;
# 193 "/usr/include/math.h" 3
enum
  {
    FP_NAN =

      0,
    FP_INFINITE =

      1,
    FP_ZERO =

      2,
    FP_SUBNORMAL =

      3,
    FP_NORMAL =

      4
  };
# 291 "/usr/include/math.h" 3
typedef enum
{
  _IEEE_ = -1,
  _SVID_,
  _XOPEN_,
  _POSIX_,
  _ISOC_
} _LIB_VERSION_TYPE;




extern _LIB_VERSION_TYPE _LIB_VERSION;
# 316 "/usr/include/math.h" 3
struct exception

  {
    int type;
    char *name;
    double arg1;
    double arg2;
    double retval;
  };




extern int matherr (struct exception *__exc);
# 213 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stddef.h" 3
typedef long unsigned int size_t;
# 30 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;

typedef signed long int __int64_t;
typedef unsigned long int __uint64_t;







typedef long int __quad_t;
typedef unsigned long int __u_quad_t;
# 133 "/usr/include/x86_64-linux-gnu/bits/types.h" 3
typedef unsigned long int __dev_t;
typedef unsigned int __uid_t;
typedef unsigned int __gid_t;
typedef unsigned long int __ino_t;
typedef unsigned long int __ino64_t;
typedef unsigned int __mode_t;
typedef unsigned long int __nlink_t;
typedef long int __off_t;
typedef long int __off64_t;
typedef int __pid_t;
typedef struct { int __val[2]; } __fsid_t;
typedef long int __clock_t;
typedef unsigned long int __rlim_t;
typedef unsigned long int __rlim64_t;
typedef unsigned int __id_t;
typedef long int __time_t;
typedef unsigned int __useconds_t;
typedef long int __suseconds_t;

typedef int __daddr_t;
typedef int __key_t;


typedef int __clockid_t;


typedef void * __timer_t;


typedef long int __blksize_t;




typedef long int __blkcnt_t;
typedef long int __blkcnt64_t;


typedef unsigned long int __fsblkcnt_t;
typedef unsigned long int __fsblkcnt64_t;


typedef unsigned long int __fsfilcnt_t;
typedef unsigned long int __fsfilcnt64_t;


typedef long int __fsword_t;

typedef long int __ssize_t;


typedef long int __syscall_slong_t;

typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


typedef long int __intptr_t;


typedef unsigned int __socklen_t;
# 44 "/usr/include/stdio.h" 3
struct _IO_FILE;



typedef struct _IO_FILE FILE;
# 64 "/usr/include/stdio.h" 3
typedef struct _IO_FILE __FILE;
# 82 "/usr/include/wchar.h" 3
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 21 "/usr/include/_G_config.h" 3
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 40 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stdarg.h" 3
typedef __builtin_va_list __gnuc_va_list;
# 145 "/usr/include/libio.h" 3
struct _IO_jump_t; struct _IO_FILE;
# 155 "/usr/include/libio.h" 3
typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 178 "/usr/include/libio.h" 3
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 246 "/usr/include/libio.h" 3
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 294 "/usr/include/libio.h" 3
  __off64_t _offset;
# 303 "/usr/include/libio.h" 3
  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;
  size_t __pad5;

  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};


typedef struct _IO_FILE _IO_FILE;


struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 339 "/usr/include/libio.h" 3
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);
# 391 "/usr/include/libio.h" 3
extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 435 "/usr/include/libio.h" 3
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ferror (_IO_FILE *__fp) __attribute__ ((__nothrow__ , __leaf__));

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern void _IO_funlockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
extern int _IO_ftrylockfile (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 465 "/usr/include/libio.h" 3
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) __attribute__ ((__nothrow__ , __leaf__));
# 79 "/usr/include/stdio.h" 3
typedef __gnuc_va_list va_list;
# 90 "/usr/include/stdio.h" 3
typedef __off_t off_t;
# 102 "/usr/include/stdio.h" 3
typedef __ssize_t ssize_t;







typedef _G_fpos_t fpos_t;
# 168 "/usr/include/stdio.h" 3
extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) __attribute__ ((__nothrow__ , __leaf__));

extern int rename (const char *__old, const char *__new) __attribute__ ((__nothrow__ , __leaf__));




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) __attribute__ ((__nothrow__ , __leaf__));
# 195 "/usr/include/stdio.h" 3
extern FILE *tmpfile (void) ;
# 209 "/usr/include/stdio.h" 3
extern char *tmpnam (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;





extern char *tmpnam_r (char *__s) __attribute__ ((__nothrow__ , __leaf__)) ;
# 227 "/usr/include/stdio.h" 3
extern char *tempnam (const char *__dir, const char *__pfx)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
# 237 "/usr/include/stdio.h" 3
extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);
# 252 "/usr/include/stdio.h" 3
extern int fflush_unlocked (FILE *__stream);
# 272 "/usr/include/stdio.h" 3
extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 306 "/usr/include/stdio.h" 3
extern FILE *fdopen (int __fd, const char *__modes) __attribute__ ((__nothrow__ , __leaf__)) ;
# 319 "/usr/include/stdio.h" 3
extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  __attribute__ ((__nothrow__ , __leaf__)) ;




extern FILE *open_memstream (char * *__bufloc, size_t *__sizeloc) __attribute__ ((__nothrow__ , __leaf__)) ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) __attribute__ ((__nothrow__ , __leaf__));



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) __attribute__ ((__nothrow__ , __leaf__));





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) __attribute__ ((__nothrow__ , __leaf__));


extern void setlinebuf (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 356 "/usr/include/stdio.h" 3
extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) __attribute__ ((__nothrow__));





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) __attribute__ ((__nothrow__));





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__)) __attribute__ ((__format__ (__printf__, 3, 0)));
# 412 "/usr/include/stdio.h" 3
extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));
# 425 "/usr/include/stdio.h" 3
extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) __attribute__ ((__nothrow__ , __leaf__));
# 443 "/usr/include/stdio.h" 3
extern int fscanf (FILE *__restrict __stream, const char *__restrict __format, ...) __asm__ ("" "__isoc99_fscanf")

                               ;
extern int scanf (const char *__restrict __format, ...) __asm__ ("" "__isoc99_scanf")
                              ;
extern int sscanf (const char *__restrict __s, const char *__restrict __format, ...) __asm__ ("" "__isoc99_sscanf") __attribute__ ((__nothrow__ , __leaf__))

                      ;
# 471 "/usr/include/stdio.h" 3
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__format__ (__scanf__, 2, 0)));
# 494 "/usr/include/stdio.h" 3
extern int vfscanf (FILE *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vfscanf")



     __attribute__ ((__format__ (__scanf__, 2, 0))) ;
extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vscanf")

     __attribute__ ((__format__ (__scanf__, 1, 0))) ;
extern int vsscanf (const char *__restrict __s, const char *__restrict __format, __gnuc_va_list __arg) __asm__ ("" "__isoc99_vsscanf") __attribute__ ((__nothrow__ , __leaf__))



     __attribute__ ((__format__ (__scanf__, 2, 0)));
# 531 "/usr/include/stdio.h" 3
extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);
# 550 "/usr/include/stdio.h" 3
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 561 "/usr/include/stdio.h" 3
extern int fgetc_unlocked (FILE *__stream);
# 573 "/usr/include/stdio.h" 3
extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);
# 594 "/usr/include/stdio.h" 3
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);
# 622 "/usr/include/stdio.h" 3
extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 638 "/usr/include/stdio.h" 3
extern char *gets (char *__s) __attribute__ ((__deprecated__));
# 665 "/usr/include/stdio.h" 3
extern __ssize_t __getdelim (char * *__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char * *__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char * *__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;
# 689 "/usr/include/stdio.h" 3
extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);
# 737 "/usr/include/stdio.h" 3
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);
# 749 "/usr/include/stdio.h" 3
extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);
# 773 "/usr/include/stdio.h" 3
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 798 "/usr/include/stdio.h" 3
extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 826 "/usr/include/stdio.h" 3
extern void clearerr (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));

extern int feof (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;

extern int ferror (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern void clearerr_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
extern int feof_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
extern int ferror_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 846 "/usr/include/stdio.h" 3
extern void perror (const char *__s);
# 26 "/usr/include/x86_64-linux-gnu/bits/sys_errlist.h" 3
extern int sys_nerr;
extern const char *const sys_errlist[];
# 858 "/usr/include/stdio.h" 3
extern int fileno (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;




extern int fileno_unlocked (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;
# 873 "/usr/include/stdio.h" 3
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) __attribute__ ((__nothrow__ , __leaf__));
# 913 "/usr/include/stdio.h" 3
extern void flockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));



extern int ftrylockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__)) ;


extern void funlockfile (FILE *__stream) __attribute__ ((__nothrow__ , __leaf__));
# 42 "/usr/include/string.h" 3
extern void *memcpy (void *__restrict __dest, const void *__restrict __src,
       size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void *memmove (void *__dest, const void *__src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern void *memccpy (void *__restrict __dest, const void *__restrict __src,
        int __c, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));





extern void *memset (void *__s, int __c, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int memcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 92 "/usr/include/string.h" 3
extern void *memchr (const void *__s, int __c, size_t __n)
      __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 125 "/usr/include/string.h" 3
extern char *strcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern char *strcat (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern char *strncat (char *__restrict __dest, const char *__restrict __src,
        size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int strncmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strcoll (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern size_t strxfrm (char *__restrict __dest,
         const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));
# 27 "/usr/include/xlocale.h" 3
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 162 "/usr/include/string.h" 3
extern int strcoll_l (const char *__s1, const char *__s2, __locale_t __l)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2, 3)));

extern size_t strxfrm_l (char *__dest, const char *__src, size_t __n,
    __locale_t __l) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));





extern char *strdup (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));






extern char *strndup (const char *__string, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) __attribute__ ((__nonnull__ (1)));
# 232 "/usr/include/string.h" 3
extern char *strchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 259 "/usr/include/string.h" 3
extern char *strrchr (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 281 "/usr/include/string.h" 3
extern size_t strcspn (const char *__s, const char *__reject)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern size_t strspn (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 311 "/usr/include/string.h" 3
extern char *strpbrk (const char *__s, const char *__accept)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 338 "/usr/include/string.h" 3
extern char *strstr (const char *__haystack, const char *__needle)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strtok (char *__restrict __s, const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));




extern char *__strtok_r (char *__restrict __s,
    const char *__restrict __delim,
    char * *__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));

extern char *strtok_r (char *__restrict __s, const char *__restrict __delim,
         char * *__restrict __save_ptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 3)));
# 395 "/usr/include/string.h" 3
extern size_t strlen (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern size_t strnlen (const char *__string, size_t __maxlen)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));





extern char *strerror (int __errnum) __attribute__ ((__nothrow__ , __leaf__));
# 423 "/usr/include/string.h" 3
extern int strerror_r (int __errnum, char *__buf, size_t __buflen) __asm__ ("" "__xpg_strerror_r") __attribute__ ((__nothrow__ , __leaf__))

                        __attribute__ ((__nonnull__ (2)));
# 441 "/usr/include/string.h" 3
extern char *strerror_l (int __errnum, __locale_t __l) __attribute__ ((__nothrow__ , __leaf__));





extern void __bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));



extern void bcopy (const void *__src, void *__dest, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern void bzero (void *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern int bcmp (const void *__s1, const void *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 485 "/usr/include/string.h" 3
extern char *index (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));
# 513 "/usr/include/string.h" 3
extern char *rindex (const char *__s, int __c)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1)));




extern int ffs (int __i) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 532 "/usr/include/string.h" 3
extern int strcasecmp (const char *__s1, const char *__s2)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));


extern int strncasecmp (const char *__s1, const char *__s2, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 555 "/usr/include/string.h" 3
extern char *strsep (char * *__restrict __stringp,
       const char *__restrict __delim)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));




extern char *strsignal (int __sig) __attribute__ ((__nothrow__ , __leaf__));


extern char *__stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpcpy (char *__restrict __dest, const char *__restrict __src)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));



extern char *__stpncpy (char *__restrict __dest,
   const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern char *stpncpy (char *__restrict __dest,
        const char *__restrict __src, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 157 "include/libfirm/adt/obstack.h"
struct _obstack_chunk
{
 char *limit;
 struct _obstack_chunk *prev;
 char contents[4];
};

struct obstack
{
 long int chunk_size;
 struct _obstack_chunk *chunk;
 char *object_base;
 char *next_free;
 char *chunk_limit;
 union
 {
   long int tempint;
   void *tempptr;
 } temp;
 int alignment_mask;



 struct _obstack_chunk *(*chunkfun) (void *, long int);
 void (*freefun) (void *, struct _obstack_chunk *);
 void *extra_arg;
 unsigned use_extra_arg:1;
 unsigned maybe_empty_object:1;



 unsigned alloc_failed:1;


};



extern void _obstack_newchunk (struct obstack *, long int);
extern int _obstack_begin (struct obstack *, int, int,
                             void *(*) (long int), void (*) (void *));
extern int _obstack_begin_1 (struct obstack *, int, int,
                               void *(*) (void *, long int),
                               void (*) (void *, void *), void *);
extern long int _obstack_memory_used (struct obstack *);

extern void obstack_free (struct obstack *obstack, void *block);





extern void (*obstack_alloc_failed_handler) (void);


extern int obstack_exit_failure;
# 541 "include/libfirm/adt/obstack.h"
extern int obstack_printf(struct obstack *obst, const char *fmt, ...)
 __attribute__((__format__(__printf__, 2, 3)));
extern int obstack_vprintf(struct obstack *obst, const char *fmt, va_list ap)
 __attribute__((__format__(__printf__, 2, 0)));
# 150 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stddef.h" 3
typedef long int ptrdiff_t;
# 325 "/usr/lib/gcc/x86_64-linux-gnu/4.7/include/stddef.h" 3
typedef int wchar_t;
# 34 "include/libfirm/adt/set.h"
typedef struct set set;


typedef struct set_entry {
 unsigned hash;
 size_t size;
 int dptr[1];

} set_entry;
# 59 "include/libfirm/adt/set.h"
typedef int (*set_cmp_fun) (const void *elt, const void *key, size_t size);
# 71 "include/libfirm/adt/set.h"
extern set *new_set(set_cmp_fun func, size_t slots);






extern void del_set(set *set);






extern size_t set_count(set *set);
# 98 "include/libfirm/adt/set.h"
extern void *set_find(set *set, const void *key, size_t size, unsigned hash);
# 115 "include/libfirm/adt/set.h"
extern void *set_insert(set *set, const void *key, size_t size, unsigned hash);
# 132 "include/libfirm/adt/set.h"
extern set_entry *set_hinsert(set *set, const void *key, size_t size, unsigned hash);
# 149 "include/libfirm/adt/set.h"
extern set_entry *set_hinsert0(set *set, const void *key, size_t size, unsigned hash);
# 158 "include/libfirm/adt/set.h"
extern void *set_first(set *set);
# 180 "include/libfirm/adt/set.h"
extern void *set_next(set *set);
# 202 "include/libfirm/adt/set.h"
extern void set_break(set *set);
# 226 "include/libfirm/adt/set.h"
typedef enum { _set_find, _set_insert, _set_hinsert, _set_hinsert0 } _set_action;

extern void *_set_search(set *, const void *, size_t, unsigned, _set_action);
# 19 "ir/lpp/sp_matrix.h"
typedef struct matrix_elem_t {
 int row;
 int col;
 float val;
} matrix_elem_t;

typedef struct sp_matrix_t sp_matrix_t;






sp_matrix_t *new_matrix(int rows, int cols);




void del_matrix(sp_matrix_t *m);




void matrix_set(sp_matrix_t *m, int row, int col, double val);







void matrix_set_row_bulk(sp_matrix_t *m, int row, int *cols, int num_cols, double val);




double matrix_get(const sp_matrix_t *m, int row, int col);




int matrix_get_entries(const sp_matrix_t *m);




int matrix_get_rowcount(const sp_matrix_t *m);




int matrix_get_colcount(const sp_matrix_t *m);





const matrix_elem_t *matrix_first(sp_matrix_t *m);





const matrix_elem_t *matrix_row_first(sp_matrix_t *m, int row);





const matrix_elem_t *matrix_col_first(sp_matrix_t *m, int col);




const matrix_elem_t *matrix_next(sp_matrix_t *m);




unsigned matrix_get_elem_size(void);
# 131 "ir/lpp/sp_matrix.h"
void matrix_optimize(sp_matrix_t *m);






void matrix_dump(sp_matrix_t *m, FILE *out, int factor);




void matrix_self_test(int d);
# 22 "ir/lpp/lpp.h"
typedef enum _lpp_opt_t {
 lpp_minimize,
 lpp_maximize
} lpp_opt_t;

typedef enum _lpp_cst_t {
 lpp_objective,
 lpp_equal,
 lpp_less_equal,
 lpp_greater_equal
} lpp_cst_t;

typedef enum _lpp_var_t {
 lpp_invalid,
 lpp_rhs,
 lpp_continous,
 lpp_binary
} lpp_var_t;

typedef enum _lpp_sol_state_t {
 lpp_unknown,
 lpp_infeasible,
 lpp_inforunb,
 lpp_unbounded,
 lpp_feasible,
 lpp_optimal
} lpp_sol_state_t;

typedef enum _lpp_value_kind_t {
 lpp_none,
 lpp_value_start,
 lpp_value_solution,
} lpp_value_kind_t;

typedef enum _lpp_emphasis_t {
 lpp_balanced,
 lpp_feasability,
 lpp_optimality,
 lpp_bestbound,
 lpp_hiddenfeasibility
} lpp_emphasis_t;

typedef struct _name_t {
 const char *name;
 int nr;
 lpp_value_kind_t value_kind;
 double value;
 union _type {
  lpp_var_t var_type;
  lpp_cst_t cst_type;
 } type;
} lpp_name_t;

typedef struct _lpp_t {

 const char *name;
 FILE *log;
 lpp_opt_t opt_type;
 struct obstack obst;
 sp_matrix_t *m;


 set *cst2nr;
 set *var2nr;


 int cst_size, var_size;
 int cst_next, var_next;
 lpp_name_t * *csts;
 lpp_name_t * *vars;
 double objval;
 double best_bound;
 double grow_factor;


 _Bool set_bound;
 double bound;
 double time_limit_secs;


 lpp_sol_state_t sol_state;
 double sol_time;
 unsigned iterations;

 char *error;
 unsigned next_name_number;
 lpp_emphasis_t emphasis;


 unsigned send_time;
 unsigned recv_time;
 unsigned n_elems;
 unsigned matrix_mem;
 double density;
} lpp_t;
# 125 "ir/lpp/lpp.h"
lpp_t *lpp_new(const char *name, lpp_opt_t opt_type);
# 136 "ir/lpp/lpp.h"
lpp_t *lpp_new_userdef(const char *name, lpp_opt_t opt_type,
        int estimated_vars, int estimated_csts,
        double grow_factor);




void lpp_free_matrix(lpp_t *lpp);




void lpp_free(lpp_t *lpp);




double lpp_get_fix_costs(lpp_t *lpp);




void lpp_set_fix_costs(lpp_t *lpp, double value);
# 168 "ir/lpp/lpp.h"
int lpp_add_cst(lpp_t *lpp, const char *cst_name, lpp_cst_t cst_type, double rhs);
# 178 "ir/lpp/lpp.h"
int lpp_add_cst_uniq(lpp_t *lpp, const char *cst_name, lpp_cst_t cst_type, double rhs);






int lpp_get_cst_idx(lpp_t *lpp, const char *cst_name);







void lpp_get_cst_name(lpp_t *lpp, int index, char *buf, size_t buf_size);
# 205 "ir/lpp/lpp.h"
int lpp_add_var(lpp_t *lpp, const char *var_name, lpp_var_t var_type, double obj);




int lpp_add_var_default(lpp_t *lpp, const char *var_name, lpp_var_t var_type, double obj, double startval);






int lpp_get_var_idx(lpp_t *lpp, const char *var_name);







void lpp_get_var_name(lpp_t *lpp, int index, char *buf, size_t buf_size);






int lpp_set_factor(lpp_t *lpp, const char *cst_name, const char *var_name, double value);






int lpp_set_factor_fast(lpp_t *lpp, int cst_idx, int var_idx, double value);

int lpp_set_factor_fast_bulk(lpp_t *lpp, int cst_idx, int *var_idx, int num_vars, double value);






void lpp_set_start_value(lpp_t *lpp, int var_idx, double value);




lpp_sol_state_t lpp_get_solution(lpp_t *lpp, double *values, int begin, int end);




void lpp_dump(lpp_t *lpp, const char *filename);






void lpp_set_log(lpp_t *lpp, FILE *log);




void lpp_check_startvals(lpp_t *lpp);






void lpp_dump_plain(lpp_t *lpp, FILE *f);

static inline unsigned lpp_get_iter_cnt(const lpp_t *lpp)
{
 return lpp->iterations;
}

static inline double lpp_get_sol_time(const lpp_t *lpp)
{
 return lpp->sol_time;
}

static inline lpp_sol_state_t lpp_get_sol_state(const lpp_t *lpp)
{
 return lpp->sol_state;
}

static inline int lpp_get_var_count(const lpp_t *lpp)
{
 return lpp->var_next-1;
}

static inline int lpp_get_cst_count(const lpp_t *lpp)
{
 return lpp->cst_next-1;
}

static inline double lpp_get_var_sol(const lpp_t *lpp, int idx)
{
 return lpp->vars[idx]->value;
}

static inline _Bool lpp_is_sol_valid(const lpp_t *lpp)
{
 return lpp_get_sol_state(lpp) >= lpp_feasible;
}

static inline void lpp_set_time_limit(lpp_t *lpp, double secs)
{
 lpp->time_limit_secs = secs;
}
# 327 "ir/lpp/lpp.h"
static inline void lpp_set_bound(lpp_t *lpp, double bound)
{
 lpp->set_bound = 1;
 lpp->bound = bound;
}





static inline void lpp_unset_bound(lpp_t *lpp)
{
 lpp->set_bound = 0;
}







void lpp_solve(lpp_t *lpp, const char* host, const char* solver);
# 43 "ir/common/error.h"
void __attribute__ ((noreturn)) panic(char const *file, int line, char const *func, char const *fmt, ...);
# 34 "include/libfirm/firm_types.h"
typedef unsigned long ir_visited_t;

typedef unsigned long ir_label_t;



typedef struct dbg_info dbg_info;


typedef struct type_dbg_info type_dbg_info;






typedef const char ident;


typedef struct ir_node ir_node;


typedef struct ir_op ir_op;


typedef struct ir_mode ir_mode;


typedef struct ir_edge_t ir_edge_t;


typedef struct ir_heights_t ir_heights_t;


typedef struct ir_tarval ir_tarval;


typedef struct ir_enum_const ir_enum_const;


typedef struct ir_type ir_type;


typedef struct ir_graph ir_graph;


typedef struct ir_prog ir_prog;


typedef struct ir_loop ir_loop;


typedef struct ir_entity ir_entity;


typedef struct ir_cdep ir_cdep;


typedef union ir_initializer_t ir_initializer_t;




typedef void irg_walk_func(ir_node *, void *);







typedef struct ir_switch_table ir_switch_table;
# 123 "include/libfirm/firm_types.h"
typedef ir_node *uninitialized_local_variable_func_t(ir_graph *irg, ir_mode *mode, int pos);
# 162 "include/libfirm/firm_types.h"
typedef enum ir_relation {
 ir_relation_false = 0,
 ir_relation_equal = 1u << 0,
 ir_relation_less = 1u << 1,
 ir_relation_greater = 1u << 2,
 ir_relation_unordered = 1u << 3,
 ir_relation_less_equal = ir_relation_equal|ir_relation_less,
 ir_relation_greater_equal = ir_relation_equal|ir_relation_greater,
 ir_relation_less_greater = ir_relation_less|ir_relation_greater,
 ir_relation_less_equal_greater = ir_relation_equal|ir_relation_less|ir_relation_greater,
 ir_relation_unordered_equal = ir_relation_unordered|ir_relation_equal,
 ir_relation_unordered_less = ir_relation_unordered|ir_relation_less,
 ir_relation_unordered_less_equal = ir_relation_unordered|ir_relation_less|ir_relation_equal,
 ir_relation_unordered_greater = ir_relation_unordered|ir_relation_greater,
 ir_relation_unordered_greater_equal = ir_relation_unordered|ir_relation_greater|ir_relation_equal,
 ir_relation_unordered_less_greater = ir_relation_unordered|ir_relation_less|ir_relation_greater,
 ir_relation_true = ir_relation_equal|ir_relation_less|ir_relation_greater|ir_relation_unordered,
} ir_relation;






typedef enum ir_cons_flags {
 cons_none = 0,
 cons_volatile = 1U << 0,
 cons_unaligned = 1U << 1,
 cons_floats = 1U << 2,
 cons_throws_exception = 1U << 3,


} ir_cons_flags;






typedef enum op_pin_state {
 op_pin_state_floats = 0,
 op_pin_state_pinned = 1,
 op_pin_state_exc_pinned,

} op_pin_state;





typedef enum cond_jmp_predicate {
 COND_JMP_PRED_NONE,
 COND_JMP_PRED_TRUE,
 COND_JMP_PRED_FALSE
} cond_jmp_predicate;







typedef enum mtp_additional_properties {

 mtp_no_property = 0,






 mtp_property_const = 1u << 0,





 mtp_property_pure = 1u << 1,


 mtp_property_noreturn = 1u << 2,

 mtp_property_nothrow = 1u << 3,

 mtp_property_naked = 1u << 4,


 mtp_property_malloc = 1u << 5,


 mtp_property_returns_twice = 1u << 6,


 mtp_property_private = 1u << 7,

 mtp_property_has_loop = 1u << 8,

 mtp_property_always_inline = 1u << 9,

 mtp_property_noinline = 1u << 10,

 mtp_property_inline_recommended = 1u << 11,

 mtp_temporary = 1u << 12,
} mtp_additional_properties;
# 275 "include/libfirm/firm_types.h"
typedef enum symconst_kind {
 symconst_type_size,

 symconst_type_align,

 symconst_addr_ent,


 symconst_ofs_ent,

 symconst_enum_const

} symconst_kind;
# 296 "include/libfirm/firm_types.h"
typedef union symconst_symbol {
 ir_type *type_p;
 ir_entity *entity_p;
 ir_enum_const *enum_p;
} symconst_symbol;




typedef struct ir_asm_constraint {
 unsigned pos;
 ident *constraint;
 ir_mode *mode;
} ir_asm_constraint;




typedef enum ir_builtin_kind {
 ir_bk_trap,
 ir_bk_debugbreak,
 ir_bk_return_address,
 ir_bk_frame_address,
 ir_bk_prefetch,
 ir_bk_ffs,
 ir_bk_clz,
 ir_bk_ctz,
 ir_bk_popcount,
 ir_bk_parity,
 ir_bk_bswap,
 ir_bk_inport,
 ir_bk_outport,
 ir_bk_inner_trampoline,
 ir_bk_saturating_increment,
 ir_bk_compare_swap,
 ir_bk_last = ir_bk_compare_swap,
} ir_builtin_kind;




typedef enum {
 volatility_non_volatile,
 volatility_is_volatile
} ir_volatility;




typedef enum {
 align_is_aligned = 0,
 align_non_aligned,
} ir_align;
# 34 "include/libfirm/execfreq.h"
extern void ir_estimate_execfreq(ir_graph *irg);


extern double get_block_execfreq(const ir_node *block);
# 27 "include/libfirm/firm_common.h"
extern void ir_init(void);




extern void ir_finish(void);


extern unsigned ir_get_version_major(void);

extern unsigned ir_get_version_minor(void);

extern const char *ir_get_version_revision(void);

extern const char *ir_get_version_build(void);
# 50 "include/libfirm/firm_common.h"
typedef enum firm_kind {
 k_BAD = 0,
 k_entity,
 k_type,
 k_ir_graph,
 k_ir_node,
 k_ir_mode,
 k_ir_op,
 k_tarval,
 k_ir_loop,
 k_ir_prog,
 k_ir_graph_pass,
 k_ir_prog_pass,
 k_ir_graph_pass_mgr,
 k_ir_prog_pass_mgr,
 k_ir_max
} firm_kind;






extern firm_kind get_kind(const void *firm_thing);
# 44 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 108 "/usr/include/x86_64-linux-gnu/bits/byteswap.h" 3
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 66 "/usr/include/x86_64-linux-gnu/bits/waitstatus.h" 3
union wait
  {
    int w_status;
    struct
      {

 unsigned int __w_termsig:7;
 unsigned int __w_coredump:1;
 unsigned int __w_retcode:8;
 unsigned int:16;







      } __wait_terminated;
    struct
      {

 unsigned int __w_stopval:8;
 unsigned int __w_stopsig:8;
 unsigned int:16;






      } __wait_stopped;
  };
# 67 "/usr/include/stdlib.h" 3
typedef union
  {
    union wait *__uptr;
    int *__iptr;
  } __WAIT_STATUS __attribute__ ((__transparent_union__));
# 97 "/usr/include/stdlib.h" 3
typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;
# 139 "/usr/include/stdlib.h" 3
extern size_t __ctype_get_mb_cur_max (void) __attribute__ ((__nothrow__ , __leaf__)) ;




extern double atof (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char * *__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char * *__restrict __endptr) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char * *__restrict __endptr)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char * *__restrict __endptr, int __base)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 305 "/usr/include/stdlib.h" 3
extern char *l64a (long int __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern long int a64l (const char *__s)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;
# 33 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;
# 60 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;
# 98 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __pid_t pid_t;





typedef __id_t id_t;
# 115 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 59 "/usr/include/time.h" 3
typedef __clock_t clock_t;
# 75 "/usr/include/time.h" 3
typedef __time_t time_t;
# 91 "/usr/include/time.h" 3
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3
typedef __timer_t timer_t;
# 150 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 194 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef int int8_t __attribute__ ((__mode__ (__QI__)));
typedef int int16_t __attribute__ ((__mode__ (__HI__)));
typedef int int32_t __attribute__ ((__mode__ (__SI__)));
typedef int int64_t __attribute__ ((__mode__ (__DI__)));


typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 23 "/usr/include/x86_64-linux-gnu/bits/sigset.h" 3
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 37 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __sigset_t sigset_t;
# 120 "/usr/include/time.h" 3
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 30 "/usr/include/x86_64-linux-gnu/bits/time.h" 3
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 48 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef __suseconds_t suseconds_t;





typedef long int __fd_mask;
# 64 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
typedef struct
  {






    __fd_mask __fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];


  } fd_set;






typedef __fd_mask fd_mask;
# 106 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 118 "/usr/include/x86_64-linux-gnu/sys/select.h" 3
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 31 "/usr/include/x86_64-linux-gnu/sys/sysmacros.h" 3
__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__));
# 228 "/usr/include/x86_64-linux-gnu/sys/types.h" 3
typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 60 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[56];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;





typedef struct __pthread_internal_list
{
  struct __pthread_internal_list *__prev;
  struct __pthread_internal_list *__next;
} __pthread_list_t;
# 90 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;

    unsigned int __nusers;



    int __kind;

    int __spins;
    __pthread_list_t __list;
# 115 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
  } __data;
  char __size[40];
  long int __align;
} pthread_mutex_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{

  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
    int __writer;
    int __shared;
    unsigned long int __pad1;
    unsigned long int __pad2;


    unsigned int __flags;

  } __data;
# 202 "/usr/include/x86_64-linux-gnu/bits/pthreadtypes.h" 3
  char __size[56];
  long int __align;
} pthread_rwlock_t;

typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[32];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 321 "/usr/include/stdlib.h" 3
extern long int random (void) __attribute__ ((__nothrow__ , __leaf__));


extern void srandom (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) __attribute__ ((__nothrow__ , __leaf__));

extern void srand (unsigned int __seed) __attribute__ ((__nothrow__ , __leaf__));




extern int rand_r (unsigned int *__seed) __attribute__ ((__nothrow__ , __leaf__));







extern double drand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern double erand48 (unsigned short int __xsubi[3]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int nrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) __attribute__ ((__nothrow__ , __leaf__));
extern long int jrand48 (unsigned short int __xsubi[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) __attribute__ ((__nothrow__ , __leaf__));
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    unsigned long long int __a;
  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2)));
# 465 "/usr/include/stdlib.h" 3
extern void *malloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;
# 479 "/usr/include/stdlib.h" 3
extern void *realloc (void *__ptr, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));




extern void cfree (void *__ptr) __attribute__ ((__nothrow__ , __leaf__));
# 32 "/usr/include/alloca.h" 3
extern void *alloca (size_t __size) __attribute__ ((__nothrow__ , __leaf__));
# 497 "/usr/include/stdlib.h" 3
extern void *valloc (size_t __size) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__malloc__)) ;




extern int posix_memalign (void * *__memptr, size_t __alignment, size_t __size)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 514 "/usr/include/stdlib.h" 3
extern void abort (void) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 534 "/usr/include/stdlib.h" 3
extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
# 556 "/usr/include/stdlib.h" 3
extern void _Exit (int __status) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 577 "/usr/include/stdlib.h" 3
extern int putenv (char *__string) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) __attribute__ ((__nothrow__ , __leaf__));
# 605 "/usr/include/stdlib.h" 3
extern char *mktemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 619 "/usr/include/stdlib.h" 3
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 641 "/usr/include/stdlib.h" 3
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 662 "/usr/include/stdlib.h" 3
extern char *mkdtemp (char *__template) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 716 "/usr/include/stdlib.h" 3
extern int system (const char *__command) ;
# 733 "/usr/include/stdlib.h" 3
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) __attribute__ ((__nothrow__ , __leaf__)) ;






typedef int (*__compar_fn_t) (const void *, const void *);
# 754 "/usr/include/stdlib.h" 3
extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;



extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));
# 770 "/usr/include/stdlib.h" 3
extern int abs (int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern long int labs (long int __x) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__const__)) ;
# 807 "/usr/include/stdlib.h" 3
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (3, 4, 5)));







extern int mblen (const char *__s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__)) ;


extern int wctomb (char *__s, wchar_t __wchar) __attribute__ ((__nothrow__ , __leaf__)) ;



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) __attribute__ ((__nothrow__ , __leaf__));

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     __attribute__ ((__nothrow__ , __leaf__));
# 884 "/usr/include/stdlib.h" 3
extern int rpmatch (const char *__response) __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1))) ;
# 895 "/usr/include/stdlib.h" 3
extern int getsubopt (char * *__restrict __optionp,
        char *const *__restrict __tokens,
        char * *__restrict __valuep)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1, 2, 3))) ;
# 947 "/usr/include/stdlib.h" 3
extern int getloadavg (double __loadavg[], int __nelem)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__nonnull__ (1)));
# 78 "include/libfirm/typerep.h"
typedef enum {







 ir_visibility_external,






 ir_visibility_local,







 ir_visibility_private,
} ir_visibility;




typedef enum ir_linkage {
 IR_LINKAGE_DEFAULT = 0,






 IR_LINKAGE_CONSTANT = 1 << 0,






 IR_LINKAGE_WEAK = 1 << 1,





 IR_LINKAGE_GARBAGE_COLLECT = 1 << 2,






 IR_LINKAGE_MERGE = 1 << 3,
# 144 "include/libfirm/typerep.h"
 IR_LINKAGE_HIDDEN_USER = 1 << 4,







 IR_LINKAGE_NO_CODEGEN = 1 << 5,
} ir_linkage;





extern ir_visibility get_entity_visibility(const ir_entity *entity);




extern void set_entity_visibility(ir_entity *entity, ir_visibility visibility);
# 174 "include/libfirm/typerep.h"
extern int entity_is_externally_visible(const ir_entity *entity);






extern int entity_has_definition(const ir_entity *entity);
# 192 "include/libfirm/typerep.h"
extern ir_entity *new_entity(ir_type *owner, ident *name, ir_type *tp);
# 203 "include/libfirm/typerep.h"
extern ir_entity *new_d_entity(ir_type *owner, ident *name, ir_type *tp,
                                 dbg_info *db);





extern ir_entity *new_parameter_entity(ir_type *owner, size_t pos,
                                         ir_type *type);




extern ir_entity *new_d_parameter_entity(ir_type *owner, size_t pos,
                                           ir_type *type, dbg_info *dbgi);







extern int check_entity(const ir_entity *ent);
# 235 "include/libfirm/typerep.h"
extern ir_entity *copy_entity_own(ir_entity *old, ir_type *new_owner);
# 245 "include/libfirm/typerep.h"
extern ir_entity *copy_entity_name(ir_entity *old, ident *new_name);







extern void free_entity(ir_entity *ent);


extern const char *get_entity_name(const ir_entity *ent);


extern ident *get_entity_ident(const ir_entity *ent);


extern void set_entity_ident(ir_entity *ent, ident *id);







extern ident *get_entity_ld_ident(const ir_entity *ent);


extern void set_entity_ld_ident(ir_entity *ent, ident *ld_ident);


extern const char *get_entity_ld_name(const ir_entity *ent);


extern int entity_has_ld_ident(const ir_entity *entity);


extern ir_type *get_entity_owner(const ir_entity *ent);






extern void set_entity_owner(ir_entity *ent, ir_type *owner);


extern ir_type *get_entity_type(const ir_entity *ent);


extern void set_entity_type(ir_entity *ent, ir_type *tp);


extern ir_linkage get_entity_linkage(const ir_entity *entity);


extern void set_entity_linkage(ir_entity *entity, ir_linkage linkage);

extern void add_entity_linkage(ir_entity *entity, ir_linkage linkage);

extern void remove_entity_linkage(ir_entity *entity, ir_linkage linkage);





extern ir_volatility get_entity_volatility(const ir_entity *ent);





extern void set_entity_volatility(ir_entity *ent, ir_volatility vol);


extern const char *get_volatility_name(ir_volatility var);


extern unsigned get_entity_alignment(const ir_entity *entity);





extern void set_entity_alignment(ir_entity *entity, unsigned alignment);





extern ir_align get_entity_aligned(const ir_entity *ent);





extern void set_entity_aligned(ir_entity *ent, ir_align a);


extern const char *get_align_name(ir_align a);



extern int get_entity_offset(const ir_entity *entity);


extern void set_entity_offset(ir_entity *entity, int offset);


extern unsigned get_entity_bitfield_offset(const ir_entity *entity);


extern void set_entity_bitfield_offset(ir_entity *entity, unsigned offset);


extern void set_entity_bitfield_size(ir_entity *entity, unsigned size);


extern unsigned get_entity_bitfield_size(const ir_entity *entity);


extern void *get_entity_link(const ir_entity *ent);


extern void set_entity_link(ir_entity *ent, void *l);





extern ir_graph *get_entity_irg(const ir_entity *ent);





extern unsigned get_entity_vtable_number(const ir_entity *ent);


extern void set_entity_vtable_number(ir_entity *ent, unsigned vtable_number);


extern void set_entity_label(ir_entity *ent, ir_label_t label);

extern ir_label_t get_entity_label(const ir_entity *ent);


extern int is_entity_compiler_generated(const ir_entity *ent);


extern void set_entity_compiler_generated(ir_entity *ent, int flag);




typedef enum {
 ir_usage_none = 0,
 ir_usage_address_taken = 1 << 0,
 ir_usage_write = 1 << 1,
 ir_usage_read = 1 << 2,
 ir_usage_reinterpret_cast = 1 << 3,


 ir_usage_unknown
  = ir_usage_address_taken | ir_usage_write | ir_usage_read
  | ir_usage_reinterpret_cast
} ir_entity_usage;


extern ir_entity_usage get_entity_usage(const ir_entity *ent);


extern void set_entity_usage(ir_entity *ent, ir_entity_usage flag);






extern dbg_info *get_entity_dbg_info(const ir_entity *ent);







extern void set_entity_dbg_info(ir_entity *ent, dbg_info *db);
# 448 "include/libfirm/typerep.h"
extern int is_parameter_entity(const ir_entity *entity);




extern size_t get_entity_parameter_number(const ir_entity *entity);




extern void set_entity_parameter_number(ir_entity *entity, size_t n);


extern ir_node *get_atomic_ent_value(const ir_entity *ent);


extern void set_atomic_ent_value(ir_entity *ent, ir_node *val);






typedef enum ir_initializer_kind_t {

 IR_INITIALIZER_CONST,

 IR_INITIALIZER_TARVAL,

 IR_INITIALIZER_NULL,

 IR_INITIALIZER_COMPOUND
} ir_initializer_kind_t;


extern ir_initializer_kind_t get_initializer_kind(const ir_initializer_t *initializer);


extern const char *get_initializer_kind_name(ir_initializer_kind_t ini);




extern ir_initializer_t *get_initializer_null(void);





extern ir_initializer_t *create_initializer_const(ir_node *value);


extern ir_initializer_t *create_initializer_tarval(ir_tarval *tv);


extern ir_node *get_initializer_const_value(const ir_initializer_t *initializer);


extern ir_tarval *get_initializer_tarval_value(const ir_initializer_t *initialzier);


extern ir_initializer_t *create_initializer_compound(size_t n_entries);


extern size_t get_initializer_compound_n_entries(const ir_initializer_t *initializer);


extern void set_initializer_compound_value(ir_initializer_t *initializer,
                                             size_t index,
                                             ir_initializer_t *value);


extern ir_initializer_t *get_initializer_compound_value(
  const ir_initializer_t *initializer, size_t index);




extern void set_entity_initializer(ir_entity *entity, ir_initializer_t *initializer);


extern int has_entity_initializer(const ir_entity *entity);


extern ir_initializer_t *get_entity_initializer(const ir_entity *entity);


extern void add_entity_overwrites(ir_entity *ent, ir_entity *overwritten);


extern size_t get_entity_n_overwrites(const ir_entity *ent);


extern size_t get_entity_overwrites_index(const ir_entity *ent,
                                            ir_entity *overwritten);

extern ir_entity *get_entity_overwrites(const ir_entity *ent, size_t pos);

extern void set_entity_overwrites(ir_entity *ent, size_t pos,
                                    ir_entity *overwritten);

extern void remove_entity_overwrites(ir_entity *ent, ir_entity *overwritten);


extern size_t get_entity_n_overwrittenby(const ir_entity *ent);


extern size_t get_entity_overwrittenby_index(const ir_entity *ent,
                                               ir_entity *overwrites);

extern ir_entity *get_entity_overwrittenby(const ir_entity *ent, size_t pos);

extern void set_entity_overwrittenby(ir_entity *ent, size_t pos,
                                       ir_entity *overwrites);

extern void remove_entity_overwrittenby(ir_entity *ent,
                                          ir_entity *overwrites);
# 574 "include/libfirm/typerep.h"
extern int is_entity(const void *thing);






extern int is_atomic_entity(const ir_entity *ent);


extern int is_compound_entity(const ir_entity *ent);

extern int is_method_entity(const ir_entity *ent);





extern long get_entity_nr(const ir_entity *ent);



extern ir_visited_t get_entity_visited(const ir_entity *ent);



extern void set_entity_visited(ir_entity *ent, ir_visited_t num);



extern void mark_entity_visited(ir_entity *ent);



extern int entity_visited(const ir_entity *ent);



extern int entity_not_visited(const ir_entity *ent);
# 621 "include/libfirm/typerep.h"
extern mtp_additional_properties get_entity_additional_properties(const ir_entity *ent);


extern void set_entity_additional_properties(ir_entity *ent,
                                               mtp_additional_properties prop);


extern void add_entity_additional_properties(ir_entity *ent,
                                               mtp_additional_properties flag);
# 665 "include/libfirm/typerep.h"
extern ir_entity *get_unknown_entity(void);



extern int is_unknown_entity(const ir_entity *entity);


typedef enum {
 allocation_automatic,
 allocation_parameter,
 allocation_dynamic,
 allocation_static
} ir_allocation;

extern ir_allocation get_entity_allocation(const ir_entity *ent);

extern void set_entity_allocation(ir_entity *ent, ir_allocation al);


typedef enum {
 peculiarity_existent,
 peculiarity_description,
 peculiarity_inherited
} ir_peculiarity;

extern ir_peculiarity get_entity_peculiarity(const ir_entity *ent);

extern void set_entity_peculiarity(ir_entity *ent, ir_peculiarity pec);


extern int is_entity_final(const ir_entity *ent);

extern void set_entity_final(ir_entity *ent, int final);


extern ir_peculiarity get_class_peculiarity(const ir_type *clss);

extern void set_class_peculiarity(ir_type *clss, ir_peculiarity pec);




typedef enum ptr_access_kind {
 ptr_access_none = 0,
 ptr_access_read = 1,
 ptr_access_write = 2,
 ptr_access_rw = ptr_access_read|ptr_access_write,
 ptr_access_store = 4,
 ptr_access_all = ptr_access_rw|ptr_access_store
} ptr_access_kind;
# 756 "include/libfirm/typerep.h"
typedef enum tp_opcode {
 tpo_uninitialized = 0,
 tpo_class,
 tpo_struct,
 tpo_method,
 tpo_union,
 tpo_array,
 tpo_enumeration,
 tpo_pointer,
 tpo_primitive,
 tpo_code,
 tpo_unknown,
 tpo_last = tpo_unknown
} tp_opcode;
# 779 "include/libfirm/typerep.h"
typedef struct tp_op tp_op;
# 788 "include/libfirm/typerep.h"
extern const char *get_tpop_name(const tp_op *op);







extern tp_opcode get_tpop_code(const tp_op *op);
# 806 "include/libfirm/typerep.h"
extern int is_SubClass_of(ir_type *low, ir_type *high);







extern int is_SubClass_ptr_of(ir_type *low, ir_type *high);
# 835 "include/libfirm/typerep.h"
extern int is_overwritten_by(ir_entity *high, ir_entity *low);






extern ir_entity *resolve_ent_polymorphy(ir_type *dynamic_class,
                                           ir_entity* static_ent);





extern ident *default_mangle_inherited_name(const ir_entity *ent,
                                              const ir_type *clss);
# 859 "include/libfirm/typerep.h"
typedef ident *mangle_inherited_name_func(const ir_entity *ent,
                                          const ir_type *clss);
# 876 "include/libfirm/typerep.h"
extern void resolve_inheritance(mangle_inherited_name_func *mfunc);
# 897 "include/libfirm/typerep.h"
typedef enum {
 inh_transitive_closure_none,
 inh_transitive_closure_valid,
 inh_transitive_closure_invalid,
 inh_transitive_closure_max
} inh_transitive_closure_state;



extern void set_irp_inh_transitive_closure_state(inh_transitive_closure_state s);


extern void invalidate_irp_inh_transitive_closure_state(void);


extern inh_transitive_closure_state get_irp_inh_transitive_closure_state(void);






extern void compute_inh_transitive_closure(void);


extern void free_inh_transitive_closure(void);


extern ir_type *get_class_trans_subtype_first(const ir_type *tp);




extern ir_type *get_class_trans_subtype_next(const ir_type *tp);





extern int is_class_trans_subtype(const ir_type *tp, const ir_type *subtp);


extern ir_type *get_class_trans_supertype_first(const ir_type *tp);




extern ir_type *get_class_trans_supertype_next(const ir_type *tp);


extern ir_entity *get_entity_trans_overwrittenby_first(const ir_entity *ent);




extern ir_entity *get_entity_trans_overwrittenby_next(const ir_entity *ent);



extern ir_entity *get_entity_trans_overwrites_first(const ir_entity *ent);




extern ir_entity *get_entity_trans_overwrites_next(const ir_entity *ent);







extern int check_type(const ir_type *tp);
# 981 "include/libfirm/typerep.h"
extern int tr_verify(void);







extern void free_type(ir_type *tp);


extern const tp_op *get_type_tpop(const ir_type *tp);

extern ident *get_type_tpop_nameid(const ir_type *tp);

extern const char *get_type_tpop_name(const ir_type *tp);

extern tp_opcode get_type_tpop_code(const ir_type *tp);
# 1009 "include/libfirm/typerep.h"
extern void ir_print_type(char *buffer, size_t buffer_size,
                            const ir_type *tp);


typedef enum {
 layout_undefined,





 layout_fixed




} ir_type_state;


extern const char *get_type_state_name(ir_type_state s);


extern ir_type_state get_type_state(const ir_type *tp);






extern void set_type_state(ir_type *tp, ir_type_state state);





extern ir_mode *get_type_mode(const ir_type *tp);





extern void set_type_mode(ir_type *tp, ir_mode* m);


extern unsigned get_type_size_bytes(const ir_type *tp);






extern void set_type_size_bytes(ir_type *tp, unsigned size);


extern unsigned get_type_alignment_bytes(ir_type *tp);
# 1075 "include/libfirm/typerep.h"
extern void set_type_alignment_bytes(ir_type *tp, unsigned align);



extern ir_visited_t get_type_visited(const ir_type *tp);


extern void set_type_visited(ir_type *tp, ir_visited_t num);


extern void mark_type_visited(ir_type *tp);


extern int type_visited(const ir_type *tp);


extern int type_not_visited(const ir_type *tp);


extern void *get_type_link(const ir_type *tp);

extern void set_type_link(ir_type *tp, void *l);



extern void inc_master_type_visited(void);


extern void set_master_type_visited(ir_visited_t val);


extern ir_visited_t get_master_type_visited(void);







extern void set_type_dbg_info(ir_type *tp, type_dbg_info *db);






extern type_dbg_info *get_type_dbg_info(const ir_type *tp);
# 1131 "include/libfirm/typerep.h"
extern int is_type(const void *thing);






extern long get_type_nr(const ir_type *tp);
# 1183 "include/libfirm/typerep.h"
extern ir_type *new_type_class(ident *name);


extern ir_type *new_d_type_class(ident *name, type_dbg_info *db);


extern ident *get_class_ident(const ir_type *clss);


extern const char *get_class_name(const ir_type *clss);


extern size_t get_class_n_members(const ir_type *clss);


extern ir_entity *get_class_member(const ir_type *clss, size_t pos);
# 1207 "include/libfirm/typerep.h"
extern size_t get_class_member_index(const ir_type *clss, ir_entity *mem);



extern ir_entity *get_class_member_by_name(ir_type *clss, ident *name);





extern void add_class_subtype(ir_type *clss, ir_type *subtype);


extern size_t get_class_n_subtypes(const ir_type *clss);


extern ir_type *get_class_subtype(const ir_type *clss, size_t pos);





extern size_t get_class_subtype_index(const ir_type *clss,
                                        const ir_type *subclass);





extern void set_class_subtype(ir_type *clss, ir_type *subtype, size_t pos);


extern void remove_class_subtype(ir_type *clss, ir_type *subtype);





extern void add_class_supertype(ir_type *clss, ir_type *supertype);


extern size_t get_class_n_supertypes(const ir_type *clss);





extern size_t get_class_supertype_index(const ir_type *clss,
                                          const ir_type *super_clss);


extern ir_type *get_class_supertype(const ir_type *clss, size_t pos);





extern void set_class_supertype(ir_type *clss, ir_type *supertype, size_t pos);


extern void remove_class_supertype(ir_type *clss, ir_type *supertype);


extern unsigned get_class_vtable_size(const ir_type *clss);


extern void set_class_vtable_size(ir_type *clss, unsigned size);


extern int is_class_final(const ir_type *clss);


extern void set_class_final(ir_type *clss, int flag);


extern int is_class_interface(const ir_type *clss);


extern void set_class_interface(ir_type *clss, int flag);


extern int is_class_abstract(const ir_type *clss);


extern void set_class_abstract(ir_type *clss, int flag);


extern int is_Class_type(const ir_type *clss);
# 1304 "include/libfirm/typerep.h"
extern const tp_op *type_class;

extern const tp_op *get_tpop_class(void);
# 1329 "include/libfirm/typerep.h"
extern ir_type *new_type_struct(ident *name);

extern ir_type *new_d_type_struct(ident *name, type_dbg_info* db);


extern ident *get_struct_ident(const ir_type *strct);


extern const char *get_struct_name(const ir_type *strct);


extern size_t get_struct_n_members(const ir_type *strct);


extern ir_entity *get_struct_member(const ir_type *strct, size_t pos);


extern size_t get_struct_member_index(const ir_type *strct, ir_entity *member);


extern int is_Struct_type(const ir_type *strct);
# 1360 "include/libfirm/typerep.h"
extern const tp_op *type_struct;

extern const tp_op *get_tpop_struct(void);
# 1381 "include/libfirm/typerep.h"
extern ir_type *new_type_union(ident *name);


extern ir_type *new_d_type_union(ident *name, type_dbg_info* db);



extern ident *get_union_ident(const ir_type *uni);


extern const char *get_union_name(const ir_type *uni);


extern size_t get_union_n_members(const ir_type *uni);


extern ir_entity *get_union_member(const ir_type *uni, size_t pos);


extern size_t get_union_member_index(const ir_type *uni, ir_entity *member);


extern int is_Union_type(const ir_type *uni);
# 1412 "include/libfirm/typerep.h"
extern const tp_op *type_union;

extern const tp_op *get_tpop_union(void);
# 1457 "include/libfirm/typerep.h"
extern ir_type *new_type_method(size_t n_param, size_t n_res);
# 1468 "include/libfirm/typerep.h"
extern ir_type *new_d_type_method(size_t n_param, size_t n_res,
                                    type_dbg_info *db);


extern size_t get_method_n_params(const ir_type *method);


extern ir_type *get_method_param_type(const ir_type *method, size_t pos);



extern void set_method_param_type(ir_type *method, size_t pos, ir_type *tp);

extern size_t get_method_n_ress(const ir_type *method);

extern ir_type *get_method_res_type(const ir_type *method, size_t pos);

extern void set_method_res_type(ir_type *method, size_t pos, ir_type *tp);






typedef enum ir_variadicity {
 variadicity_non_variadic,
 variadicity_variadic
} ir_variadicity;


extern const char *get_variadicity_name(ir_variadicity vari);


extern ir_variadicity get_method_variadicity(const ir_type *method);


extern void set_method_variadicity(ir_type *method, ir_variadicity vari);


extern mtp_additional_properties get_method_additional_properties(const ir_type *method);


extern void set_method_additional_properties(ir_type *method,
                                               mtp_additional_properties property_mask);


extern void add_method_additional_properties(ir_type *method,
                                               mtp_additional_properties flag);





typedef enum {
 cc_reg_param = 0x01000000,

 cc_last_on_top = 0x02000000,




 cc_callee_clear_stk = 0x04000000,

 cc_this_call = 0x08000000,

 cc_compound_ret = 0x10000000,
 cc_frame_on_caller_stk = 0x20000000,

 cc_fpreg_param = 0x40000000,
 cc_bits = (0xFF << 24)
} calling_convention;
# 1578 "include/libfirm/typerep.h"
extern unsigned get_method_calling_convention(const ir_type *method);


extern void set_method_calling_convention(ir_type *method, unsigned cc_mask);


extern unsigned get_method_n_regparams(ir_type *method);


extern void set_method_n_regparams(ir_type *method, unsigned n_regs);


extern int is_Method_type(const ir_type *method);
# 1599 "include/libfirm/typerep.h"
extern const tp_op *type_method;

extern const tp_op *get_tpop_method(void);
# 1628 "include/libfirm/typerep.h"
extern ir_type *new_type_array(size_t n_dims, ir_type *element_type);
# 1638 "include/libfirm/typerep.h"
extern ir_type *new_d_type_array(size_t n_dims, ir_type *element_type,
                                   type_dbg_info* db);



extern size_t get_array_n_dimensions(const ir_type *array);





extern void set_array_bounds_int(ir_type *array, size_t dimension,
                                   int lower_bound, int upper_bound);




extern void set_array_bounds(ir_type *array, size_t dimension,
                               ir_node *lower_bound, ir_node *upper_bound);

extern void set_array_lower_bound(ir_type *array, size_t dimension,
                                    ir_node *lower_bound);



extern void set_array_lower_bound_int(ir_type *array, size_t dimension,
                                        int lower_bound);


extern void set_array_upper_bound(ir_type *array, size_t dimension,
                                    ir_node *upper_bound);



extern void set_array_upper_bound_int(ir_type *array, size_t dimension,
                                        int upper_bound);


extern int has_array_lower_bound(const ir_type *array, size_t dimension);

extern ir_node *get_array_lower_bound(const ir_type *array, size_t dimension);

extern long get_array_lower_bound_int(const ir_type *array, size_t dimension);

extern int has_array_upper_bound(const ir_type *array, size_t dimension);

extern ir_node *get_array_upper_bound(const ir_type *array, size_t dimension);

extern long get_array_upper_bound_int(const ir_type *array, size_t dimension);


extern void set_array_order(ir_type *array, size_t dimension, size_t order);


extern size_t get_array_order(const ir_type *array, size_t dimension);


extern size_t find_array_dimension(const ir_type *array, size_t order);


extern void set_array_element_type(ir_type *array, ir_type *tp);


extern ir_type *get_array_element_type(const ir_type *array);


extern void set_array_element_entity(ir_type *array, ir_entity *ent);


extern ir_entity *get_array_element_entity(const ir_type *array);






extern void set_array_variable_size(ir_type *array, int variable_size_flag);





extern int is_array_variable_size(const ir_type *array);


extern int is_Array_type(const ir_type *array);
# 1733 "include/libfirm/typerep.h"
extern const tp_op *type_array;

extern const tp_op *get_tpop_array(void);
# 1754 "include/libfirm/typerep.h"
extern ir_type *new_type_enumeration(ident *name, size_t n_enums);


extern ir_type *new_d_type_enumeration(ident *name, size_t n_enums,
                                         type_dbg_info *db);



extern ident *get_enumeration_ident(const ir_type *enumeration);


extern const char *get_enumeration_name(const ir_type *enumeration);


extern void set_enumeration_const(ir_type *enumeration, size_t pos,
                                    ident *nameid, ir_tarval *con);


extern size_t get_enumeration_n_enums(const ir_type *enumeration);


extern ir_enum_const *get_enumeration_const(const ir_type *enumeration,
                                              size_t pos);


extern ir_type *get_enumeration_owner(const ir_enum_const *enum_cnst);


extern void set_enumeration_value(ir_enum_const *enum_cnst, ir_tarval *con);


extern ir_tarval *get_enumeration_value(const ir_enum_const *enum_cnst);


extern void set_enumeration_nameid(ir_enum_const *enum_cnst, ident *id);


extern ident *get_enumeration_const_nameid(const ir_enum_const *enum_cnst);


extern const char *get_enumeration_const_name(const ir_enum_const *enum_cnst);


extern int is_Enumeration_type(const ir_type *enumeration);
# 1808 "include/libfirm/typerep.h"
extern const tp_op *type_enumeration;

extern const tp_op *get_tpop_enumeration(void);
# 1823 "include/libfirm/typerep.h"
extern ir_type *new_type_pointer(ir_type *points_to);


extern ir_type *new_d_type_pointer(ir_type *points_to, type_dbg_info* db);



extern void set_pointer_points_to_type(ir_type *pointer, ir_type *tp);


extern ir_type *get_pointer_points_to_type(const ir_type *pointer);


extern int is_Pointer_type(const ir_type *pointer);




extern ir_type *find_pointer_type_to_type(ir_type *tp);
# 1850 "include/libfirm/typerep.h"
extern const tp_op *type_pointer;

extern const tp_op *get_tpop_pointer(void);
# 1865 "include/libfirm/typerep.h"
extern ir_type *new_type_primitive(ir_mode *mode);


extern ir_type *new_d_type_primitive(ir_mode *mode, type_dbg_info* db);


extern int is_Primitive_type(const ir_type *primitive);
# 1881 "include/libfirm/typerep.h"
extern const tp_op *type_primitive;

extern const tp_op *get_tpop_primitive(void);







extern ir_type *get_code_type(void);



extern int is_code_type(const ir_type *tp);



extern const tp_op *tpop_code;

extern const tp_op *get_tpop_code_type(void);
# 1923 "include/libfirm/typerep.h"
extern ir_type *get_unknown_type(void);

extern int is_unknown_type(const ir_type *type);
# 1934 "include/libfirm/typerep.h"
extern const tp_op *tpop_unknown;

extern const tp_op *get_tpop_unknown(void);







extern int is_atomic_type(const ir_type *tp);
# 1955 "include/libfirm/typerep.h"
extern ident *get_compound_ident(const ir_type *tp);


extern const char *get_compound_name(const ir_type *tp);
# 1971 "include/libfirm/typerep.h"
extern size_t get_compound_n_members(const ir_type *tp);
# 1981 "include/libfirm/typerep.h"
extern ir_entity *get_compound_member(const ir_type *tp, size_t pos);


extern size_t get_compound_member_index(const ir_type *tp, ir_entity *member);


extern void remove_compound_member(ir_type *compound, ir_entity *entity);
# 1996 "include/libfirm/typerep.h"
extern void set_compound_variable_size(ir_type *compound, int variable_size);




extern int is_compound_variable_size(const ir_type *compound);




extern void default_layout_compound_type(ir_type *tp);
# 2015 "include/libfirm/typerep.h"
extern int is_compound_type(const ir_type *tp);
# 2028 "include/libfirm/typerep.h"
extern ir_type *new_type_frame(void);




extern int is_frame_type(const ir_type *tp);






extern ir_type *clone_frame_type(ir_type *type);
# 2054 "include/libfirm/typerep.h"
extern ir_entity *frame_alloc_area(ir_type *frame_type, int size,
                                     unsigned alignment, int at_start);
# 2069 "include/libfirm/typerep.h"
typedef int (compare_types_func_t)(const void *tp1, const void *tp2);


typedef union {
 ir_type *typ;
 ir_entity *ent;
} type_or_ent;






typedef void type_walk_func(type_or_ent tore, void *env);






typedef void class_walk_func(ir_type *clss, void *env);





extern void type_walk(type_walk_func *pre, type_walk_func *post, void *env);






extern void type_walk_irg(ir_graph *irg, type_walk_func *pre,
                            type_walk_func *post, void *env);
# 2114 "include/libfirm/typerep.h"
extern void type_walk_super2sub(type_walk_func *pre, type_walk_func *post,
                                  void *env);
# 2129 "include/libfirm/typerep.h"
extern void type_walk_super(type_walk_func *pre, type_walk_func *post,
                              void *env);







extern void class_walk_super2sub(class_walk_func *pre, class_walk_func *post,
                                   void *env);







typedef void entity_walk_func(ir_entity *ent, void *env);
# 2156 "include/libfirm/typerep.h"
extern void walk_types_entities(ir_type *tp, entity_walk_func *doit,
                                  void *env);







extern void types_calc_finalization(void);


extern ir_visibility get_type_visibility(const ir_type *tp);

extern void set_type_visibility(ir_type *tp, ir_visibility v);
# 34 "include/libfirm/ident.h"
extern ident *new_id_from_str(const char *str);
# 45 "include/libfirm/ident.h"
extern ident *new_id_from_chars(const char *str, size_t len);
# 56 "include/libfirm/ident.h"
extern const char *get_id_str(ident *id);





extern ident *id_unique(const char *tag);


extern ident *id_mangle_u(ident *first, ident* scnd);


extern ident *id_mangle_dot(ident *first, ident* scnd);


extern ident *id_mangle(ident *first, ident* scnd);


extern ident *id_mangle3(const char *prefix, ident *middle,
                           const char *suffix);
# 32 "include/libfirm/irop.h"
typedef enum {
 oparity_invalid = 0,
 oparity_binary,
 oparity_variable,

 oparity_dynamic,


 oparity_any
} op_arity;



typedef enum {
 irop_flag_none = 0,
 irop_flag_commutative = 1U << 0,
 irop_flag_cfopcode = 1U << 1,
 irop_flag_fragile = 1U << 2,


 irop_flag_forking = 1U << 3,
 irop_flag_highlevel = 1U << 4,

 irop_flag_constlike = 1U << 5,

 irop_flag_keep = 1U << 6,
 irop_flag_start_block = 1U << 7,
 irop_flag_uses_memory = 1U << 8,
 irop_flag_dump_noblock = 1U << 9,
 irop_flag_cse_neutral = 1U << 10,



 irop_flag_unknown_jump = 1U << 11,
} irop_flags;



extern ident *get_op_ident(const ir_op *op);


extern const char *get_op_name(const ir_op *op);


extern unsigned get_op_code(const ir_op *op);


extern const char *get_op_pin_state_name(op_pin_state s);


extern op_pin_state get_op_pinned(const ir_op *op);


extern unsigned get_next_ir_opcode(void);


extern unsigned get_next_ir_opcodes(unsigned num);




typedef void (*op_func)(void);







extern op_func get_generic_function_ptr(const ir_op *op);




extern void set_generic_function_ptr(ir_op *op, op_func func);




extern irop_flags get_op_flags(const ir_op *op);





typedef unsigned (*hash_func)(const ir_node *self);






typedef ir_tarval *(*computed_value_func)(const ir_node *self);
# 134 "include/libfirm/irop.h"
typedef ir_node *(*equivalent_node_func)(ir_node *self);
# 144 "include/libfirm/irop.h"
typedef ir_node *(*transform_node_func)(ir_node *self);






typedef int (*node_cmp_attr_func)(const ir_node *a, const ir_node *b);
# 160 "include/libfirm/irop.h"
typedef int (*reassociate_func)(ir_node * *n);





typedef void (*copy_attr_func)(ir_graph *irg, const ir_node *old_node, ir_node *new_node);






typedef ir_type *(*get_type_attr_func)(const ir_node *self);






typedef ir_entity *(*get_entity_attr_func)(const ir_node *self);
# 189 "include/libfirm/irop.h"
typedef int (*verify_node_func)(const ir_node *node);
# 198 "include/libfirm/irop.h"
typedef int (*verify_proj_node_func)(const ir_node *proj);




typedef enum {
 dump_node_opcode_txt,
 dump_node_mode_txt,
 dump_node_nodeattr_txt,
 dump_node_info_txt
} dump_reason_t;






typedef void (*dump_node_func)(FILE *out, const ir_node *self, dump_reason_t reason);


extern void set_op_hash(ir_op *op, hash_func func);

extern void set_op_computed_value(ir_op *op, computed_value_func func);

extern void set_op_computed_value_proj(ir_op *op, computed_value_func func);

extern void set_op_equivalent_node(ir_op *op, equivalent_node_func func);

extern void set_op_equivalent_node_proj(ir_op *op, equivalent_node_func func);

extern void set_op_transform_node(ir_op *op, transform_node_func func);

extern void set_op_transform_node_proj(ir_op *op, transform_node_func func);

extern void set_op_cmp_attr(ir_op *op, node_cmp_attr_func func);

extern void set_op_reassociate(ir_op *op, reassociate_func func);

extern void set_op_copy_attr(ir_op *op, copy_attr_func func);

extern void set_op_get_type_attr(ir_op *op, get_type_attr_func func);

extern void set_op_get_entity_attr(ir_op *op, get_entity_attr_func func);

extern void set_op_verify(ir_op *op, verify_node_func func);

extern void set_op_verify_proj(ir_op *op, verify_proj_node_func func);

extern void set_op_dump(ir_op *op, dump_node_func func);
# 265 "include/libfirm/irop.h"
extern ir_op *new_ir_op(unsigned code, const char *name, op_pin_state p,
                          irop_flags flags, op_arity opar, int op_index,
                          size_t attr_size);






extern void free_ir_op(ir_op *code);


extern unsigned ir_get_n_opcodes(void);







extern ir_op *ir_get_opcode(unsigned code);


extern void ir_clear_opcodes_generic_func(void);




extern void ir_op_set_memory_index(ir_op *op, int memory_index);





extern void ir_op_set_fragile_indices(ir_op *op, int pn_x_regular,
                                        int pn_x_except);
# 36 "include/libfirm/irmode.h"
typedef enum ir_mode_arithmetic {
 irma_none = 1,


 irma_twos_complement = 2,


 irma_ieee754 = 256,


 irma_x86_extended_float,
 irma_last = irma_x86_extended_float,
} ir_mode_arithmetic;
# 66 "include/libfirm/irmode.h"
extern ir_mode *new_int_mode(const char *name,
                               ir_mode_arithmetic arithmetic,
                               unsigned bit_size, int sign,
                               unsigned modulo_shift);






extern ir_mode *new_reference_mode(const char *name,
                                     ir_mode_arithmetic arithmetic,
                                     unsigned bit_size,
                                     unsigned modulo_shift);
# 91 "include/libfirm/irmode.h"
extern ir_mode *new_float_mode(const char *name,
                                 ir_mode_arithmetic arithmetic,
                                 unsigned exponent_size,
                                 unsigned mantissa_size);
# 104 "include/libfirm/irmode.h"
extern int is_mode(const void *thing);


extern ident *get_mode_ident(const ir_mode *mode);


extern const char *get_mode_name(const ir_mode *mode);


extern unsigned get_mode_size_bits(const ir_mode *mode);



extern unsigned get_mode_size_bytes(const ir_mode *mode);




extern int get_mode_sign(const ir_mode *mode);


extern ir_mode_arithmetic get_mode_arithmetic(const ir_mode *mode);







extern unsigned int get_mode_modulo_shift(const ir_mode *mode);


extern void *get_mode_link(const ir_mode *mode);


extern void set_mode_link(ir_mode *mode, void *l);







extern ir_tarval *get_mode_min(ir_mode *mode);







extern ir_tarval *get_mode_max(ir_mode *mode);
# 165 "include/libfirm/irmode.h"
extern ir_tarval *get_mode_null(ir_mode *mode);
# 174 "include/libfirm/irmode.h"
extern ir_tarval *get_mode_one(ir_mode *mode);







extern ir_tarval *get_mode_minus_one(ir_mode *mode);






extern ir_tarval *get_mode_all_one(ir_mode *mode);







extern ir_tarval *get_mode_infinite(ir_mode *mode);







extern ir_tarval *get_mode_NAN(ir_mode *mode);

extern ir_mode *mode_M;

extern ir_mode *mode_F;
extern ir_mode *mode_D;
extern ir_mode *mode_Q;
extern ir_mode *mode_Bs;
extern ir_mode *mode_Bu;
extern ir_mode *mode_Hs;
extern ir_mode *mode_Hu;
extern ir_mode *mode_Is;
extern ir_mode *mode_Iu;
extern ir_mode *mode_Ls;
extern ir_mode *mode_Lu;
extern ir_mode *mode_LLs;
extern ir_mode *mode_LLu;

extern ir_mode *mode_P;
extern ir_mode *mode_P_code;


extern ir_mode *mode_P_data;



extern ir_mode *mode_b;

extern ir_mode *mode_X;
extern ir_mode *mode_BB;

extern ir_mode *mode_T;
extern ir_mode *mode_ANY;
extern ir_mode *mode_BAD;


extern ir_mode *get_modeF(void);

extern ir_mode *get_modeD(void);

extern ir_mode *get_modeQ(void);

extern ir_mode *get_modeBs(void);

extern ir_mode *get_modeBu(void);

extern ir_mode *get_modeHs(void);

extern ir_mode *get_modeHu(void);

extern ir_mode *get_modeIs(void);

extern ir_mode *get_modeIu(void);

extern ir_mode *get_modeLs(void);

extern ir_mode *get_modeLu(void);

extern ir_mode *get_modeLLs(void);

extern ir_mode *get_modeLLu(void);

extern ir_mode *get_modeP(void);

extern ir_mode *get_modeb(void);

extern ir_mode *get_modeX(void);

extern ir_mode *get_modeBB(void);

extern ir_mode *get_modeM(void);

extern ir_mode *get_modeT(void);

extern ir_mode *get_modeANY(void);

extern ir_mode *get_modeBAD(void);


extern ir_mode *get_modeP_code(void);


extern ir_mode *get_modeP_data(void);





extern void set_modeP_code(ir_mode *p);





extern void set_modeP_data(ir_mode *p);


extern int mode_is_signed (const ir_mode *mode);

extern int mode_is_float (const ir_mode *mode);

extern int mode_is_int (const ir_mode *mode);

extern int mode_is_reference (const ir_mode *mode);

extern int mode_is_num (const ir_mode *mode);

extern int mode_is_data (const ir_mode *mode);

extern int mode_is_datab (const ir_mode *mode);

extern int mode_is_dataM (const ir_mode *mode);
# 329 "include/libfirm/irmode.h"
extern int smaller_mode(const ir_mode *sm, const ir_mode *lm);
# 341 "include/libfirm/irmode.h"
extern int values_in_mode(const ir_mode *sm, const ir_mode *lm);





extern ir_mode *find_unsigned_mode(const ir_mode *mode);





extern ir_mode *find_signed_mode(const ir_mode *mode);





extern ir_mode *find_double_bits_int_mode(const ir_mode *mode);






extern int mode_has_signed_zero(const ir_mode *mode);




extern int mode_overflow_on_unary_Minus(const ir_mode *mode);







extern int mode_wrap_around(const ir_mode *mode);




extern ir_mode *get_reference_mode_signed_eq(ir_mode *mode);




extern void set_reference_mode_signed_eq(ir_mode *ref_mode, ir_mode *int_mode);




extern ir_mode *get_reference_mode_unsigned_eq(ir_mode *mode);




extern void set_reference_mode_unsigned_eq(ir_mode *ref_mode, ir_mode *int_mode);
# 408 "include/libfirm/irmode.h"
extern unsigned get_mode_mantissa_size(const ir_mode *mode);




extern unsigned get_mode_exponent_size(const ir_mode *mode);






extern int is_reinterpret_cast(const ir_mode *src, const ir_mode *dst);




extern ir_type *get_type_for_mode(const ir_mode *mode);


extern size_t ir_get_n_modes(void);


extern ir_mode *ir_get_mode(size_t num);
# 10 "include/libfirm/nodes.h"
typedef enum ir_opcode {
 iro_ASM,
 iro_Add,
 iro_Alloc,
 iro_Anchor,
 iro_And,
 iro_Bad,
 iro_Block,
 iro_Builtin,
 iro_Call,
 iro_Cmp,
 iro_Cond,
 iro_Confirm,
 iro_Const,
 iro_Conv,
 iro_CopyB,
 iro_Deleted,
 iro_Div,
 iro_Dummy,
 iro_End,
 iro_Eor,
 iro_Free,
 iro_IJmp,
 iro_Id,
 iro_Jmp,
 iro_Load,
 iro_Minus,
 iro_Mod,
 iro_Mul,
 iro_Mulh,
 iro_Mux,
 iro_NoMem,
 iro_Not,
 iro_Or,
 iro_Phi,
 iro_Pin,
 iro_Proj,
 iro_Raise,
 iro_Return,
 iro_Sel,
 iro_Shl,
 iro_Shr,
 iro_Shrs,
 iro_Start,
 iro_Store,
 iro_Sub,
 iro_Switch,
 iro_SymConst,
 iro_Sync,
 iro_Tuple,
 iro_Unknown,
 iro_first = iro_ASM,
 iro_last = iro_Unknown,
} ir_opcode;
# 107 "include/libfirm/nodes.h"
typedef enum {
 n_ASM_mem,
 n_ASM_max = n_ASM_mem
} n_ASM;






extern int is_ASM(const ir_node *node);


extern ir_node *get_ASM_mem(const ir_node *node);

extern void set_ASM_mem(ir_node *node, ir_node *mem);

extern int get_ASM_n_inputs(ir_node const *node);

extern ir_node *get_ASM_input(ir_node const *node, int pos);

extern void set_ASM_input(ir_node *node, int pos, ir_node *input);

ir_node * *get_ASM_input_arr(ir_node *node);


extern ir_asm_constraint* get_ASM_input_constraints(const ir_node *node);

extern void set_ASM_input_constraints(ir_node *node, ir_asm_constraint* input_constraints);


extern ir_asm_constraint* get_ASM_output_constraints(const ir_node *node);

extern void set_ASM_output_constraints(ir_node *node, ir_asm_constraint* output_constraints);


extern ident* * get_ASM_clobbers(const ir_node *node);

extern void set_ASM_clobbers(ir_node *node, ident* * clobbers);


extern ident* get_ASM_text(const ir_node *node);

extern void set_ASM_text(ir_node *node, ident* text);

extern ir_op *op_ASM;


extern ir_op *get_op_ASM(void);
# 169 "include/libfirm/nodes.h"
typedef enum {
 n_Add_left,
 n_Add_right,
 n_Add_max = n_Add_right
} n_Add;
# 184 "include/libfirm/nodes.h"
extern ir_node *new_rd_Add(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 194 "include/libfirm/nodes.h"
extern ir_node *new_r_Add(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 204 "include/libfirm/nodes.h"
extern ir_node *new_d_Add(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 213 "include/libfirm/nodes.h"
extern ir_node *new_Add(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Add(const ir_node *node);


extern ir_node *get_Add_left(const ir_node *node);

extern void set_Add_left(ir_node *node, ir_node *left);

extern ir_node *get_Add_right(const ir_node *node);

extern void set_Add_right(ir_node *node, ir_node *right);

extern ir_op *op_Add;


extern ir_op *get_op_Add(void);
# 247 "include/libfirm/nodes.h"
typedef enum {
 n_Alloc_mem,
 n_Alloc_size,
 n_Alloc_max = n_Alloc_size
} n_Alloc;




typedef enum {
 pn_Alloc_M,
 pn_Alloc_res,
 pn_Alloc_max = pn_Alloc_res
} pn_Alloc;
# 271 "include/libfirm/nodes.h"
extern ir_node *new_rd_Alloc(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_size, unsigned alignment);
# 281 "include/libfirm/nodes.h"
extern ir_node *new_r_Alloc(ir_node *block, ir_node * irn_mem, ir_node * irn_size, unsigned alignment);
# 291 "include/libfirm/nodes.h"
extern ir_node *new_d_Alloc(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_size, unsigned alignment);
# 300 "include/libfirm/nodes.h"
extern ir_node *new_Alloc(ir_node * irn_mem, ir_node * irn_size, unsigned alignment);





extern int is_Alloc(const ir_node *node);


extern ir_node *get_Alloc_mem(const ir_node *node);

extern void set_Alloc_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Alloc_size(const ir_node *node);

extern void set_Alloc_size(ir_node *node, ir_node *size);


extern unsigned get_Alloc_alignment(const ir_node *node);

extern void set_Alloc_alignment(ir_node *node, unsigned alignment);

extern ir_op *op_Alloc;


extern ir_op *get_op_Alloc(void);
# 346 "include/libfirm/nodes.h"
extern int is_Anchor(const ir_node *node);


extern ir_op *op_Anchor;


extern ir_op *get_op_Anchor(void);
# 366 "include/libfirm/nodes.h"
typedef enum {
 n_And_left,
 n_And_right,
 n_And_max = n_And_right
} n_And;
# 381 "include/libfirm/nodes.h"
extern ir_node *new_rd_And(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 391 "include/libfirm/nodes.h"
extern ir_node *new_r_And(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 401 "include/libfirm/nodes.h"
extern ir_node *new_d_And(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 410 "include/libfirm/nodes.h"
extern ir_node *new_And(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_And(const ir_node *node);


extern ir_node *get_And_left(const ir_node *node);

extern void set_And_left(ir_node *node, ir_node *left);

extern ir_node *get_And_right(const ir_node *node);

extern void set_And_right(ir_node *node, ir_node *right);

extern ir_op *op_And;


extern ir_op *get_op_And(void);
# 464 "include/libfirm/nodes.h"
extern ir_node *new_rd_Bad(dbg_info *dbgi, ir_graph *irg, ir_mode * mode);







extern ir_node *new_r_Bad(ir_graph *irg, ir_mode * mode);







extern ir_node *new_d_Bad(dbg_info *dbgi, ir_mode * mode);






extern ir_node *new_Bad(ir_mode * mode);





extern int is_Bad(const ir_node *node);


extern ir_op *op_Bad;


extern ir_op *get_op_Bad(void);
# 518 "include/libfirm/nodes.h"
extern ir_node *new_rd_Block(dbg_info *dbgi, ir_graph *irg, int arity, ir_node *const * in);
# 527 "include/libfirm/nodes.h"
extern ir_node *new_r_Block(ir_graph *irg, int arity, ir_node *const * in);
# 536 "include/libfirm/nodes.h"
extern ir_node *new_d_Block(dbg_info *dbgi, int arity, ir_node *const * in);







extern ir_node *new_Block(int arity, ir_node *const * in);





extern int is_Block(const ir_node *node);


extern int get_Block_n_cfgpreds(ir_node const *node);

extern ir_node *get_Block_cfgpred(ir_node const *node, int pos);

extern void set_Block_cfgpred(ir_node *node, int pos, ir_node *cfgpred);

ir_node * *get_Block_cfgpred_arr(ir_node *node);


extern ir_entity* get_Block_entity(const ir_node *node);

extern void set_Block_entity(ir_node *node, ir_entity* entity);

extern ir_op *op_Block;


extern ir_op *get_op_Block(void);
# 583 "include/libfirm/nodes.h"
typedef enum {
 n_Builtin_mem,
 n_Builtin_max = n_Builtin_mem
} n_Builtin;




typedef enum {
 pn_Builtin_M,
 pn_Builtin_max = pn_Builtin_M
} pn_Builtin;
# 607 "include/libfirm/nodes.h"
extern ir_node *new_rd_Builtin(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, int arity, ir_node *const * in, ir_builtin_kind kind, ir_type* type);
# 619 "include/libfirm/nodes.h"
extern ir_node *new_r_Builtin(ir_node *block, ir_node * irn_mem, int arity, ir_node *const * in, ir_builtin_kind kind, ir_type* type);
# 631 "include/libfirm/nodes.h"
extern ir_node *new_d_Builtin(dbg_info *dbgi, ir_node * irn_mem, int arity, ir_node *const * in, ir_builtin_kind kind, ir_type* type);
# 642 "include/libfirm/nodes.h"
extern ir_node *new_Builtin(ir_node * irn_mem, int arity, ir_node *const * in, ir_builtin_kind kind, ir_type* type);





extern int is_Builtin(const ir_node *node);


extern ir_node *get_Builtin_mem(const ir_node *node);

extern void set_Builtin_mem(ir_node *node, ir_node *mem);

extern int get_Builtin_n_params(ir_node const *node);

extern ir_node *get_Builtin_param(ir_node const *node, int pos);

extern void set_Builtin_param(ir_node *node, int pos, ir_node *param);

ir_node * *get_Builtin_param_arr(ir_node *node);


extern ir_builtin_kind get_Builtin_kind(const ir_node *node);

extern void set_Builtin_kind(ir_node *node, ir_builtin_kind kind);


extern ir_type* get_Builtin_type(const ir_node *node);

extern void set_Builtin_type(ir_node *node, ir_type* type);

extern ir_op *op_Builtin;


extern ir_op *get_op_Builtin(void);
# 693 "include/libfirm/nodes.h"
typedef enum {
 n_Call_mem,
 n_Call_ptr,
 n_Call_max = n_Call_ptr
} n_Call;




typedef enum {
 pn_Call_M,
 pn_Call_T_result,
 pn_Call_X_regular,
 pn_Call_X_except,
 pn_Call_max = pn_Call_X_except
} pn_Call;
# 721 "include/libfirm/nodes.h"
extern ir_node *new_rd_Call(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_type* type);
# 733 "include/libfirm/nodes.h"
extern ir_node *new_r_Call(ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_type* type);
# 745 "include/libfirm/nodes.h"
extern ir_node *new_d_Call(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_type* type);
# 756 "include/libfirm/nodes.h"
extern ir_node *new_Call(ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_type* type);





extern int is_Call(const ir_node *node);


extern ir_node *get_Call_mem(const ir_node *node);

extern void set_Call_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Call_ptr(const ir_node *node);

extern void set_Call_ptr(ir_node *node, ir_node *ptr);

extern int get_Call_n_params(ir_node const *node);

extern ir_node *get_Call_param(ir_node const *node, int pos);

extern void set_Call_param(ir_node *node, int pos, ir_node *param);

ir_node * *get_Call_param_arr(ir_node *node);


extern ir_type* get_Call_type(const ir_node *node);

extern void set_Call_type(ir_node *node, ir_type* type);

extern ir_op *op_Call;


extern ir_op *get_op_Call(void);
# 804 "include/libfirm/nodes.h"
typedef enum {
 n_Cmp_left,
 n_Cmp_right,
 n_Cmp_max = n_Cmp_right
} n_Cmp;
# 819 "include/libfirm/nodes.h"
extern ir_node *new_rd_Cmp(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_relation relation);
# 829 "include/libfirm/nodes.h"
extern ir_node *new_r_Cmp(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_relation relation);
# 839 "include/libfirm/nodes.h"
extern ir_node *new_d_Cmp(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_relation relation);
# 848 "include/libfirm/nodes.h"
extern ir_node *new_Cmp(ir_node * irn_left, ir_node * irn_right, ir_relation relation);





extern int is_Cmp(const ir_node *node);


extern ir_node *get_Cmp_left(const ir_node *node);

extern void set_Cmp_left(ir_node *node, ir_node *left);

extern ir_node *get_Cmp_right(const ir_node *node);

extern void set_Cmp_right(ir_node *node, ir_node *right);


extern ir_relation get_Cmp_relation(const ir_node *node);

extern void set_Cmp_relation(ir_node *node, ir_relation relation);

extern ir_op *op_Cmp;


extern ir_op *get_op_Cmp(void);
# 887 "include/libfirm/nodes.h"
typedef enum {
 n_Cond_selector,
 n_Cond_max = n_Cond_selector
} n_Cond;




typedef enum {
 pn_Cond_false,
 pn_Cond_true,
 pn_Cond_max = pn_Cond_true
} pn_Cond;
# 908 "include/libfirm/nodes.h"
extern ir_node *new_rd_Cond(dbg_info *dbgi, ir_node *block, ir_node * irn_selector);







extern ir_node *new_r_Cond(ir_node *block, ir_node * irn_selector);







extern ir_node *new_d_Cond(dbg_info *dbgi, ir_node * irn_selector);






extern ir_node *new_Cond(ir_node * irn_selector);





extern int is_Cond(const ir_node *node);


extern ir_node *get_Cond_selector(const ir_node *node);

extern void set_Cond_selector(ir_node *node, ir_node *selector);


extern cond_jmp_predicate get_Cond_jmp_pred(const ir_node *node);

extern void set_Cond_jmp_pred(ir_node *node, cond_jmp_predicate jmp_pred);

extern ir_op *op_Cond;


extern ir_op *get_op_Cond(void);
# 974 "include/libfirm/nodes.h"
typedef enum {
 n_Confirm_value,
 n_Confirm_bound,
 n_Confirm_max = n_Confirm_bound
} n_Confirm;
# 989 "include/libfirm/nodes.h"
extern ir_node *new_rd_Confirm(dbg_info *dbgi, ir_node *block, ir_node * irn_value, ir_node * irn_bound, ir_relation relation);
# 999 "include/libfirm/nodes.h"
extern ir_node *new_r_Confirm(ir_node *block, ir_node * irn_value, ir_node * irn_bound, ir_relation relation);
# 1009 "include/libfirm/nodes.h"
extern ir_node *new_d_Confirm(dbg_info *dbgi, ir_node * irn_value, ir_node * irn_bound, ir_relation relation);
# 1018 "include/libfirm/nodes.h"
extern ir_node *new_Confirm(ir_node * irn_value, ir_node * irn_bound, ir_relation relation);





extern int is_Confirm(const ir_node *node);


extern ir_node *get_Confirm_value(const ir_node *node);

extern void set_Confirm_value(ir_node *node, ir_node *value);

extern ir_node *get_Confirm_bound(const ir_node *node);

extern void set_Confirm_bound(ir_node *node, ir_node *bound);


extern ir_relation get_Confirm_relation(const ir_node *node);

extern void set_Confirm_relation(ir_node *node, ir_relation relation);

extern ir_op *op_Confirm;


extern ir_op *get_op_Confirm(void);
# 1061 "include/libfirm/nodes.h"
extern ir_node *new_rd_Const(dbg_info *dbgi, ir_graph *irg, ir_tarval* tarval);







extern ir_node *new_r_Const(ir_graph *irg, ir_tarval* tarval);







extern ir_node *new_d_Const(dbg_info *dbgi, ir_tarval* tarval);






extern ir_node *new_Const(ir_tarval* tarval);





extern int is_Const(const ir_node *node);



extern ir_tarval* get_Const_tarval(const ir_node *node);

extern void set_Const_tarval(ir_node *node, ir_tarval* tarval);

extern ir_op *op_Const;


extern ir_op *get_op_Const(void);
# 1115 "include/libfirm/nodes.h"
typedef enum {
 n_Conv_op,
 n_Conv_max = n_Conv_op
} n_Conv;
# 1128 "include/libfirm/nodes.h"
extern ir_node *new_rd_Conv(dbg_info *dbgi, ir_node *block, ir_node * irn_op, ir_mode * mode);
# 1137 "include/libfirm/nodes.h"
extern ir_node *new_r_Conv(ir_node *block, ir_node * irn_op, ir_mode * mode);
# 1146 "include/libfirm/nodes.h"
extern ir_node *new_d_Conv(dbg_info *dbgi, ir_node * irn_op, ir_mode * mode);







extern ir_node *new_Conv(ir_node * irn_op, ir_mode * mode);





extern int is_Conv(const ir_node *node);


extern ir_node *get_Conv_op(const ir_node *node);

extern void set_Conv_op(ir_node *node, ir_node *op);

extern ir_op *op_Conv;


extern ir_op *get_op_Conv(void);
# 1184 "include/libfirm/nodes.h"
typedef enum {
 n_CopyB_mem,
 n_CopyB_dst,
 n_CopyB_src,
 n_CopyB_max = n_CopyB_src
} n_CopyB;
# 1201 "include/libfirm/nodes.h"
extern ir_node *new_rd_CopyB(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_dst, ir_node * irn_src, ir_type* type);
# 1212 "include/libfirm/nodes.h"
extern ir_node *new_r_CopyB(ir_node *block, ir_node * irn_mem, ir_node * irn_dst, ir_node * irn_src, ir_type* type);
# 1223 "include/libfirm/nodes.h"
extern ir_node *new_d_CopyB(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_dst, ir_node * irn_src, ir_type* type);
# 1233 "include/libfirm/nodes.h"
extern ir_node *new_CopyB(ir_node * irn_mem, ir_node * irn_dst, ir_node * irn_src, ir_type* type);





extern int is_CopyB(const ir_node *node);


extern ir_node *get_CopyB_mem(const ir_node *node);

extern void set_CopyB_mem(ir_node *node, ir_node *mem);

extern ir_node *get_CopyB_dst(const ir_node *node);

extern void set_CopyB_dst(ir_node *node, ir_node *dst);

extern ir_node *get_CopyB_src(const ir_node *node);

extern void set_CopyB_src(ir_node *node, ir_node *src);


extern ir_type* get_CopyB_type(const ir_node *node);

extern void set_CopyB_type(ir_node *node, ir_type* type);

extern ir_op *op_CopyB;


extern ir_op *get_op_CopyB(void);
# 1279 "include/libfirm/nodes.h"
extern int is_Deleted(const ir_node *node);


extern ir_op *op_Deleted;


extern ir_op *get_op_Deleted(void);
# 1299 "include/libfirm/nodes.h"
typedef enum {
 n_Div_mem,
 n_Div_left,
 n_Div_right,
 n_Div_max = n_Div_right
} n_Div;




typedef enum {
 pn_Div_M,
 pn_Div_res,
 pn_Div_X_regular,
 pn_Div_X_except,
 pn_Div_max = pn_Div_X_except
} pn_Div;
# 1328 "include/libfirm/nodes.h"
extern ir_node *new_rd_Div(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 1340 "include/libfirm/nodes.h"
extern ir_node *new_r_Div(ir_node *block, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 1352 "include/libfirm/nodes.h"
extern ir_node *new_d_Div(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 1363 "include/libfirm/nodes.h"
extern ir_node *new_Div(ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);





extern int is_Div(const ir_node *node);


extern ir_node *get_Div_mem(const ir_node *node);

extern void set_Div_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Div_left(const ir_node *node);

extern void set_Div_left(ir_node *node, ir_node *left);

extern ir_node *get_Div_right(const ir_node *node);

extern void set_Div_right(ir_node *node, ir_node *right);


extern ir_mode* get_Div_resmode(const ir_node *node);

extern void set_Div_resmode(ir_node *node, ir_mode* resmode);


extern int get_Div_no_remainder(const ir_node *node);

extern void set_Div_no_remainder(ir_node *node, int no_remainder);

extern ir_op *op_Div;


extern ir_op *get_op_Div(void);
# 1417 "include/libfirm/nodes.h"
extern ir_node *new_rd_Dummy(dbg_info *dbgi, ir_graph *irg, ir_mode * mode);







extern ir_node *new_r_Dummy(ir_graph *irg, ir_mode * mode);







extern ir_node *new_d_Dummy(dbg_info *dbgi, ir_mode * mode);






extern ir_node *new_Dummy(ir_mode * mode);





extern int is_Dummy(const ir_node *node);


extern ir_op *op_Dummy;


extern ir_op *get_op_Dummy(void);
# 1472 "include/libfirm/nodes.h"
extern ir_node *new_rd_End(dbg_info *dbgi, ir_graph *irg, int arity, ir_node *const * in);
# 1481 "include/libfirm/nodes.h"
extern ir_node *new_r_End(ir_graph *irg, int arity, ir_node *const * in);
# 1490 "include/libfirm/nodes.h"
extern ir_node *new_d_End(dbg_info *dbgi, int arity, ir_node *const * in);







extern ir_node *new_End(int arity, ir_node *const * in);





extern int is_End(const ir_node *node);


extern int get_End_n_keepalives(ir_node const *node);

extern ir_node *get_End_keepalive(ir_node const *node, int pos);

extern void set_End_keepalive(ir_node *node, int pos, ir_node *keepalive);

ir_node * *get_End_keepalive_arr(ir_node *node);

extern ir_op *op_End;


extern ir_op *get_op_End(void);
# 1534 "include/libfirm/nodes.h"
typedef enum {
 n_Eor_left,
 n_Eor_right,
 n_Eor_max = n_Eor_right
} n_Eor;
# 1549 "include/libfirm/nodes.h"
extern ir_node *new_rd_Eor(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 1559 "include/libfirm/nodes.h"
extern ir_node *new_r_Eor(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 1569 "include/libfirm/nodes.h"
extern ir_node *new_d_Eor(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 1578 "include/libfirm/nodes.h"
extern ir_node *new_Eor(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Eor(const ir_node *node);


extern ir_node *get_Eor_left(const ir_node *node);

extern void set_Eor_left(ir_node *node, ir_node *left);

extern ir_node *get_Eor_right(const ir_node *node);

extern void set_Eor_right(ir_node *node, ir_node *right);

extern ir_op *op_Eor;


extern ir_op *get_op_Eor(void);
# 1612 "include/libfirm/nodes.h"
typedef enum {
 n_Free_mem,
 n_Free_ptr,
 n_Free_max = n_Free_ptr
} n_Free;
# 1626 "include/libfirm/nodes.h"
extern ir_node *new_rd_Free(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_ptr);
# 1635 "include/libfirm/nodes.h"
extern ir_node *new_r_Free(ir_node *block, ir_node * irn_mem, ir_node * irn_ptr);
# 1644 "include/libfirm/nodes.h"
extern ir_node *new_d_Free(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_ptr);







extern ir_node *new_Free(ir_node * irn_mem, ir_node * irn_ptr);





extern int is_Free(const ir_node *node);


extern ir_node *get_Free_mem(const ir_node *node);

extern void set_Free_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Free_ptr(const ir_node *node);

extern void set_Free_ptr(ir_node *node, ir_node *ptr);

extern ir_op *op_Free;


extern ir_op *get_op_Free(void);
# 1688 "include/libfirm/nodes.h"
typedef enum {
 n_IJmp_target,
 n_IJmp_max = n_IJmp_target
} n_IJmp;
# 1700 "include/libfirm/nodes.h"
extern ir_node *new_rd_IJmp(dbg_info *dbgi, ir_node *block, ir_node * irn_target);







extern ir_node *new_r_IJmp(ir_node *block, ir_node * irn_target);







extern ir_node *new_d_IJmp(dbg_info *dbgi, ir_node * irn_target);






extern ir_node *new_IJmp(ir_node * irn_target);





extern int is_IJmp(const ir_node *node);


extern ir_node *get_IJmp_target(const ir_node *node);

extern void set_IJmp_target(ir_node *node, ir_node *target);

extern ir_op *op_IJmp;


extern ir_op *get_op_IJmp(void);
# 1756 "include/libfirm/nodes.h"
typedef enum {
 n_Id_pred,
 n_Id_max = n_Id_pred
} n_Id;
# 1769 "include/libfirm/nodes.h"
extern ir_node *new_rd_Id(dbg_info *dbgi, ir_node *block, ir_node * irn_pred, ir_mode * mode);
# 1778 "include/libfirm/nodes.h"
extern ir_node *new_r_Id(ir_node *block, ir_node * irn_pred, ir_mode * mode);
# 1787 "include/libfirm/nodes.h"
extern ir_node *new_d_Id(dbg_info *dbgi, ir_node * irn_pred, ir_mode * mode);







extern ir_node *new_Id(ir_node * irn_pred, ir_mode * mode);





extern int is_Id(const ir_node *node);


extern ir_node *get_Id_pred(const ir_node *node);

extern void set_Id_pred(ir_node *node, ir_node *pred);

extern ir_op *op_Id;


extern ir_op *get_op_Id(void);
# 1828 "include/libfirm/nodes.h"
extern ir_node *new_rd_Jmp(dbg_info *dbgi, ir_node *block);






extern ir_node *new_r_Jmp(ir_node *block);






extern ir_node *new_d_Jmp(dbg_info *dbgi);





extern ir_node *new_Jmp(void);





extern int is_Jmp(const ir_node *node);


extern ir_op *op_Jmp;


extern ir_op *get_op_Jmp(void);
# 1874 "include/libfirm/nodes.h"
typedef enum {
 n_Load_mem,
 n_Load_ptr,
 n_Load_max = n_Load_ptr
} n_Load;




typedef enum {
 pn_Load_M,
 pn_Load_res,
 pn_Load_X_regular,
 pn_Load_X_except,
 pn_Load_max = pn_Load_X_except
} pn_Load;
# 1901 "include/libfirm/nodes.h"
extern ir_node *new_rd_Load(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, ir_mode* mode, ir_cons_flags flags);
# 1912 "include/libfirm/nodes.h"
extern ir_node *new_r_Load(ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, ir_mode* mode, ir_cons_flags flags);
# 1923 "include/libfirm/nodes.h"
extern ir_node *new_d_Load(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_ptr, ir_mode* mode, ir_cons_flags flags);
# 1933 "include/libfirm/nodes.h"
extern ir_node *new_Load(ir_node * irn_mem, ir_node * irn_ptr, ir_mode* mode, ir_cons_flags flags);





extern int is_Load(const ir_node *node);


extern ir_node *get_Load_mem(const ir_node *node);

extern void set_Load_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Load_ptr(const ir_node *node);

extern void set_Load_ptr(ir_node *node, ir_node *ptr);


extern ir_mode* get_Load_mode(const ir_node *node);

extern void set_Load_mode(ir_node *node, ir_mode* mode);


extern ir_volatility get_Load_volatility(const ir_node *node);

extern void set_Load_volatility(ir_node *node, ir_volatility volatility);


extern ir_align get_Load_unaligned(const ir_node *node);

extern void set_Load_unaligned(ir_node *node, ir_align unaligned);

extern ir_op *op_Load;


extern ir_op *get_op_Load(void);
# 1982 "include/libfirm/nodes.h"
typedef enum {
 n_Minus_op,
 n_Minus_max = n_Minus_op
} n_Minus;
# 1995 "include/libfirm/nodes.h"
extern ir_node *new_rd_Minus(dbg_info *dbgi, ir_node *block, ir_node * irn_op, ir_mode * mode);
# 2004 "include/libfirm/nodes.h"
extern ir_node *new_r_Minus(ir_node *block, ir_node * irn_op, ir_mode * mode);
# 2013 "include/libfirm/nodes.h"
extern ir_node *new_d_Minus(dbg_info *dbgi, ir_node * irn_op, ir_mode * mode);







extern ir_node *new_Minus(ir_node * irn_op, ir_mode * mode);





extern int is_Minus(const ir_node *node);


extern ir_node *get_Minus_op(const ir_node *node);

extern void set_Minus_op(ir_node *node, ir_node *op);

extern ir_op *op_Minus;


extern ir_op *get_op_Minus(void);
# 2058 "include/libfirm/nodes.h"
typedef enum {
 n_Mod_mem,
 n_Mod_left,
 n_Mod_right,
 n_Mod_max = n_Mod_right
} n_Mod;




typedef enum {
 pn_Mod_M,
 pn_Mod_res,
 pn_Mod_X_regular,
 pn_Mod_X_except,
 pn_Mod_max = pn_Mod_X_except
} pn_Mod;
# 2087 "include/libfirm/nodes.h"
extern ir_node *new_rd_Mod(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 2099 "include/libfirm/nodes.h"
extern ir_node *new_r_Mod(ir_node *block, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 2111 "include/libfirm/nodes.h"
extern ir_node *new_d_Mod(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);
# 2122 "include/libfirm/nodes.h"
extern ir_node *new_Mod(ir_node * irn_mem, ir_node * irn_left, ir_node * irn_right, ir_mode* resmode, op_pin_state pin_state);





extern int is_Mod(const ir_node *node);


extern ir_node *get_Mod_mem(const ir_node *node);

extern void set_Mod_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Mod_left(const ir_node *node);

extern void set_Mod_left(ir_node *node, ir_node *left);

extern ir_node *get_Mod_right(const ir_node *node);

extern void set_Mod_right(ir_node *node, ir_node *right);


extern ir_mode* get_Mod_resmode(const ir_node *node);

extern void set_Mod_resmode(ir_node *node, ir_mode* resmode);

extern ir_op *op_Mod;


extern ir_op *get_op_Mod(void);
# 2165 "include/libfirm/nodes.h"
typedef enum {
 n_Mul_left,
 n_Mul_right,
 n_Mul_max = n_Mul_right
} n_Mul;
# 2180 "include/libfirm/nodes.h"
extern ir_node *new_rd_Mul(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2190 "include/libfirm/nodes.h"
extern ir_node *new_r_Mul(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2200 "include/libfirm/nodes.h"
extern ir_node *new_d_Mul(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2209 "include/libfirm/nodes.h"
extern ir_node *new_Mul(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Mul(const ir_node *node);


extern ir_node *get_Mul_left(const ir_node *node);

extern void set_Mul_left(ir_node *node, ir_node *left);

extern ir_node *get_Mul_right(const ir_node *node);

extern void set_Mul_right(ir_node *node, ir_node *right);

extern ir_op *op_Mul;


extern ir_op *get_op_Mul(void);
# 2244 "include/libfirm/nodes.h"
typedef enum {
 n_Mulh_left,
 n_Mulh_right,
 n_Mulh_max = n_Mulh_right
} n_Mulh;
# 2259 "include/libfirm/nodes.h"
extern ir_node *new_rd_Mulh(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2269 "include/libfirm/nodes.h"
extern ir_node *new_r_Mulh(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2279 "include/libfirm/nodes.h"
extern ir_node *new_d_Mulh(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2288 "include/libfirm/nodes.h"
extern ir_node *new_Mulh(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Mulh(const ir_node *node);


extern ir_node *get_Mulh_left(const ir_node *node);

extern void set_Mulh_left(ir_node *node, ir_node *left);

extern ir_node *get_Mulh_right(const ir_node *node);

extern void set_Mulh_right(ir_node *node, ir_node *right);

extern ir_op *op_Mulh;


extern ir_op *get_op_Mulh(void);
# 2323 "include/libfirm/nodes.h"
typedef enum {
 n_Mux_sel,
 n_Mux_false,
 n_Mux_true,
 n_Mux_max = n_Mux_true
} n_Mux;
# 2340 "include/libfirm/nodes.h"
extern ir_node *new_rd_Mux(dbg_info *dbgi, ir_node *block, ir_node * irn_sel, ir_node * irn_false, ir_node * irn_true, ir_mode * mode);
# 2351 "include/libfirm/nodes.h"
extern ir_node *new_r_Mux(ir_node *block, ir_node * irn_sel, ir_node * irn_false, ir_node * irn_true, ir_mode * mode);
# 2362 "include/libfirm/nodes.h"
extern ir_node *new_d_Mux(dbg_info *dbgi, ir_node * irn_sel, ir_node * irn_false, ir_node * irn_true, ir_mode * mode);
# 2372 "include/libfirm/nodes.h"
extern ir_node *new_Mux(ir_node * irn_sel, ir_node * irn_false, ir_node * irn_true, ir_mode * mode);





extern int is_Mux(const ir_node *node);


extern ir_node *get_Mux_sel(const ir_node *node);

extern void set_Mux_sel(ir_node *node, ir_node *sel);

extern ir_node *get_Mux_false(const ir_node *node);

extern void set_Mux_false(ir_node *node, ir_node *false_);

extern ir_node *get_Mux_true(const ir_node *node);

extern void set_Mux_true(ir_node *node, ir_node *true_);

extern ir_op *op_Mux;


extern ir_op *get_op_Mux(void);
# 2413 "include/libfirm/nodes.h"
extern ir_node *new_rd_NoMem(dbg_info *dbgi, ir_graph *irg);






extern ir_node *new_r_NoMem(ir_graph *irg);






extern ir_node *new_d_NoMem(dbg_info *dbgi);





extern ir_node *new_NoMem(void);





extern int is_NoMem(const ir_node *node);


extern ir_op *op_NoMem;


extern ir_op *get_op_NoMem(void);
# 2459 "include/libfirm/nodes.h"
typedef enum {
 n_Not_op,
 n_Not_max = n_Not_op
} n_Not;
# 2472 "include/libfirm/nodes.h"
extern ir_node *new_rd_Not(dbg_info *dbgi, ir_node *block, ir_node * irn_op, ir_mode * mode);
# 2481 "include/libfirm/nodes.h"
extern ir_node *new_r_Not(ir_node *block, ir_node * irn_op, ir_mode * mode);
# 2490 "include/libfirm/nodes.h"
extern ir_node *new_d_Not(dbg_info *dbgi, ir_node * irn_op, ir_mode * mode);







extern ir_node *new_Not(ir_node * irn_op, ir_mode * mode);





extern int is_Not(const ir_node *node);


extern ir_node *get_Not_op(const ir_node *node);

extern void set_Not_op(ir_node *node, ir_node *op);

extern ir_op *op_Not;


extern ir_op *get_op_Not(void);
# 2528 "include/libfirm/nodes.h"
typedef enum {
 n_Or_left,
 n_Or_right,
 n_Or_max = n_Or_right
} n_Or;
# 2543 "include/libfirm/nodes.h"
extern ir_node *new_rd_Or(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2553 "include/libfirm/nodes.h"
extern ir_node *new_r_Or(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2563 "include/libfirm/nodes.h"
extern ir_node *new_d_Or(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 2572 "include/libfirm/nodes.h"
extern ir_node *new_Or(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Or(const ir_node *node);


extern ir_node *get_Or_left(const ir_node *node);

extern void set_Or_left(ir_node *node, ir_node *left);

extern ir_node *get_Or_right(const ir_node *node);

extern void set_Or_right(ir_node *node, ir_node *right);

extern ir_op *op_Or;


extern ir_op *get_op_Or(void);
# 2614 "include/libfirm/nodes.h"
extern ir_node *new_rd_Phi(dbg_info *dbgi, ir_node *block, int arity, ir_node *const * in, ir_mode * mode);
# 2624 "include/libfirm/nodes.h"
extern ir_node *new_r_Phi(ir_node *block, int arity, ir_node *const * in, ir_mode * mode);
# 2634 "include/libfirm/nodes.h"
extern ir_node *new_d_Phi(dbg_info *dbgi, int arity, ir_node *const * in, ir_mode * mode);
# 2643 "include/libfirm/nodes.h"
extern ir_node *new_Phi(int arity, ir_node *const * in, ir_mode * mode);





extern int is_Phi(const ir_node *node);


extern int get_Phi_n_preds(ir_node const *node);

extern ir_node *get_Phi_pred(ir_node const *node, int pos);

extern void set_Phi_pred(ir_node *node, int pos, ir_node *pred);

ir_node * *get_Phi_pred_arr(ir_node *node);

extern ir_op *op_Phi;


extern ir_op *get_op_Phi(void);
# 2679 "include/libfirm/nodes.h"
typedef enum {
 n_Pin_op,
 n_Pin_max = n_Pin_op
} n_Pin;
# 2691 "include/libfirm/nodes.h"
extern ir_node *new_rd_Pin(dbg_info *dbgi, ir_node *block, ir_node * irn_op);







extern ir_node *new_r_Pin(ir_node *block, ir_node * irn_op);







extern ir_node *new_d_Pin(dbg_info *dbgi, ir_node * irn_op);






extern ir_node *new_Pin(ir_node * irn_op);





extern int is_Pin(const ir_node *node);


extern ir_node *get_Pin_op(const ir_node *node);

extern void set_Pin_op(ir_node *node, ir_node *op);

extern ir_op *op_Pin;


extern ir_op *get_op_Pin(void);
# 2744 "include/libfirm/nodes.h"
typedef enum {
 n_Proj_pred,
 n_Proj_max = n_Proj_pred
} n_Proj;
# 2757 "include/libfirm/nodes.h"
extern ir_node *new_rd_Proj(dbg_info *dbgi, ir_node * irn_pred, ir_mode * mode, long proj);
# 2766 "include/libfirm/nodes.h"
extern ir_node *new_r_Proj(ir_node * irn_pred, ir_mode * mode, long proj);
# 2776 "include/libfirm/nodes.h"
extern ir_node *new_d_Proj(dbg_info *dbgi, ir_node * irn_pred, ir_mode * mode, long proj);
# 2785 "include/libfirm/nodes.h"
extern ir_node *new_Proj(ir_node * irn_pred, ir_mode * mode, long proj);





extern int is_Proj(const ir_node *node);


extern ir_node *get_Proj_pred(const ir_node *node);

extern void set_Proj_pred(ir_node *node, ir_node *pred);


extern long get_Proj_proj(const ir_node *node);

extern void set_Proj_proj(ir_node *node, long proj);

extern ir_op *op_Proj;


extern ir_op *get_op_Proj(void);
# 2822 "include/libfirm/nodes.h"
typedef enum {
 n_Raise_mem,
 n_Raise_exo_ptr,
 n_Raise_max = n_Raise_exo_ptr
} n_Raise;




typedef enum {
 pn_Raise_M,
 pn_Raise_X,
 pn_Raise_max = pn_Raise_X
} pn_Raise;
# 2845 "include/libfirm/nodes.h"
extern ir_node *new_rd_Raise(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_exo_ptr);
# 2854 "include/libfirm/nodes.h"
extern ir_node *new_r_Raise(ir_node *block, ir_node * irn_mem, ir_node * irn_exo_ptr);
# 2863 "include/libfirm/nodes.h"
extern ir_node *new_d_Raise(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_exo_ptr);







extern ir_node *new_Raise(ir_node * irn_mem, ir_node * irn_exo_ptr);





extern int is_Raise(const ir_node *node);


extern ir_node *get_Raise_mem(const ir_node *node);

extern void set_Raise_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Raise_exo_ptr(const ir_node *node);

extern void set_Raise_exo_ptr(ir_node *node, ir_node *exo_ptr);

extern ir_op *op_Raise;


extern ir_op *get_op_Raise(void);
# 2906 "include/libfirm/nodes.h"
typedef enum {
 n_Return_mem,
 n_Return_max = n_Return_mem
} n_Return;
# 2920 "include/libfirm/nodes.h"
extern ir_node *new_rd_Return(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, int arity, ir_node *const * in);
# 2930 "include/libfirm/nodes.h"
extern ir_node *new_r_Return(ir_node *block, ir_node * irn_mem, int arity, ir_node *const * in);
# 2940 "include/libfirm/nodes.h"
extern ir_node *new_d_Return(dbg_info *dbgi, ir_node * irn_mem, int arity, ir_node *const * in);
# 2949 "include/libfirm/nodes.h"
extern ir_node *new_Return(ir_node * irn_mem, int arity, ir_node *const * in);





extern int is_Return(const ir_node *node);


extern ir_node *get_Return_mem(const ir_node *node);

extern void set_Return_mem(ir_node *node, ir_node *mem);

extern int get_Return_n_ress(ir_node const *node);

extern ir_node *get_Return_res(ir_node const *node, int pos);

extern void set_Return_res(ir_node *node, int pos, ir_node *res);

ir_node * *get_Return_res_arr(ir_node *node);

extern ir_op *op_Return;


extern ir_op *get_op_Return(void);
# 2991 "include/libfirm/nodes.h"
typedef enum {
 n_Sel_mem,
 n_Sel_ptr,
 n_Sel_max = n_Sel_ptr
} n_Sel;
# 3008 "include/libfirm/nodes.h"
extern ir_node *new_rd_Sel(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_entity* entity);
# 3020 "include/libfirm/nodes.h"
extern ir_node *new_r_Sel(ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_entity* entity);
# 3032 "include/libfirm/nodes.h"
extern ir_node *new_d_Sel(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_entity* entity);
# 3043 "include/libfirm/nodes.h"
extern ir_node *new_Sel(ir_node * irn_mem, ir_node * irn_ptr, int arity, ir_node *const * in, ir_entity* entity);





extern int is_Sel(const ir_node *node);


extern ir_node *get_Sel_mem(const ir_node *node);

extern void set_Sel_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Sel_ptr(const ir_node *node);

extern void set_Sel_ptr(ir_node *node, ir_node *ptr);

extern int get_Sel_n_indexs(ir_node const *node);

extern ir_node *get_Sel_index(ir_node const *node, int pos);

extern void set_Sel_index(ir_node *node, int pos, ir_node *index);

ir_node * *get_Sel_index_arr(ir_node *node);


extern ir_entity* get_Sel_entity(const ir_node *node);

extern void set_Sel_entity(ir_node *node, ir_entity* entity);

extern ir_op *op_Sel;


extern ir_op *get_op_Sel(void);
# 3094 "include/libfirm/nodes.h"
typedef enum {
 n_Shl_left,
 n_Shl_right,
 n_Shl_max = n_Shl_right
} n_Shl;
# 3109 "include/libfirm/nodes.h"
extern ir_node *new_rd_Shl(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3119 "include/libfirm/nodes.h"
extern ir_node *new_r_Shl(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3129 "include/libfirm/nodes.h"
extern ir_node *new_d_Shl(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3138 "include/libfirm/nodes.h"
extern ir_node *new_Shl(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Shl(const ir_node *node);


extern ir_node *get_Shl_left(const ir_node *node);

extern void set_Shl_left(ir_node *node, ir_node *left);

extern ir_node *get_Shl_right(const ir_node *node);

extern void set_Shl_right(ir_node *node, ir_node *right);

extern ir_op *op_Shl;


extern ir_op *get_op_Shl(void);
# 3176 "include/libfirm/nodes.h"
typedef enum {
 n_Shr_left,
 n_Shr_right,
 n_Shr_max = n_Shr_right
} n_Shr;
# 3191 "include/libfirm/nodes.h"
extern ir_node *new_rd_Shr(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3201 "include/libfirm/nodes.h"
extern ir_node *new_r_Shr(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3211 "include/libfirm/nodes.h"
extern ir_node *new_d_Shr(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3220 "include/libfirm/nodes.h"
extern ir_node *new_Shr(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Shr(const ir_node *node);


extern ir_node *get_Shr_left(const ir_node *node);

extern void set_Shr_left(ir_node *node, ir_node *left);

extern ir_node *get_Shr_right(const ir_node *node);

extern void set_Shr_right(ir_node *node, ir_node *right);

extern ir_op *op_Shr;


extern ir_op *get_op_Shr(void);
# 3259 "include/libfirm/nodes.h"
typedef enum {
 n_Shrs_left,
 n_Shrs_right,
 n_Shrs_max = n_Shrs_right
} n_Shrs;
# 3274 "include/libfirm/nodes.h"
extern ir_node *new_rd_Shrs(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3284 "include/libfirm/nodes.h"
extern ir_node *new_r_Shrs(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3294 "include/libfirm/nodes.h"
extern ir_node *new_d_Shrs(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3303 "include/libfirm/nodes.h"
extern ir_node *new_Shrs(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Shrs(const ir_node *node);


extern ir_node *get_Shrs_left(const ir_node *node);

extern void set_Shrs_left(ir_node *node, ir_node *left);

extern ir_node *get_Shrs_right(const ir_node *node);

extern void set_Shrs_right(ir_node *node, ir_node *right);

extern ir_op *op_Shrs;


extern ir_op *get_op_Shrs(void);
# 3337 "include/libfirm/nodes.h"
typedef enum {
 pn_Start_X_initial_exec,
 pn_Start_M,
 pn_Start_P_frame_base,
 pn_Start_T_args,
 pn_Start_max = pn_Start_T_args
} pn_Start;







extern ir_node *new_rd_Start(dbg_info *dbgi, ir_graph *irg);






extern ir_node *new_r_Start(ir_graph *irg);






extern ir_node *new_d_Start(dbg_info *dbgi);





extern ir_node *new_Start(void);





extern int is_Start(const ir_node *node);


extern ir_op *op_Start;


extern ir_op *get_op_Start(void);
# 3397 "include/libfirm/nodes.h"
typedef enum {
 n_Store_mem,
 n_Store_ptr,
 n_Store_value,
 n_Store_max = n_Store_value
} n_Store;




typedef enum {
 pn_Store_M,
 pn_Store_X_regular,
 pn_Store_X_except,
 pn_Store_max = pn_Store_X_except
} pn_Store;
# 3424 "include/libfirm/nodes.h"
extern ir_node *new_rd_Store(dbg_info *dbgi, ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, ir_node * irn_value, ir_cons_flags flags);
# 3435 "include/libfirm/nodes.h"
extern ir_node *new_r_Store(ir_node *block, ir_node * irn_mem, ir_node * irn_ptr, ir_node * irn_value, ir_cons_flags flags);
# 3446 "include/libfirm/nodes.h"
extern ir_node *new_d_Store(dbg_info *dbgi, ir_node * irn_mem, ir_node * irn_ptr, ir_node * irn_value, ir_cons_flags flags);
# 3456 "include/libfirm/nodes.h"
extern ir_node *new_Store(ir_node * irn_mem, ir_node * irn_ptr, ir_node * irn_value, ir_cons_flags flags);





extern int is_Store(const ir_node *node);


extern ir_node *get_Store_mem(const ir_node *node);

extern void set_Store_mem(ir_node *node, ir_node *mem);

extern ir_node *get_Store_ptr(const ir_node *node);

extern void set_Store_ptr(ir_node *node, ir_node *ptr);

extern ir_node *get_Store_value(const ir_node *node);

extern void set_Store_value(ir_node *node, ir_node *value);


extern ir_volatility get_Store_volatility(const ir_node *node);

extern void set_Store_volatility(ir_node *node, ir_volatility volatility);


extern ir_align get_Store_unaligned(const ir_node *node);

extern void set_Store_unaligned(ir_node *node, ir_align unaligned);

extern ir_op *op_Store;


extern ir_op *get_op_Store(void);
# 3504 "include/libfirm/nodes.h"
typedef enum {
 n_Sub_left,
 n_Sub_right,
 n_Sub_max = n_Sub_right
} n_Sub;
# 3519 "include/libfirm/nodes.h"
extern ir_node *new_rd_Sub(dbg_info *dbgi, ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3529 "include/libfirm/nodes.h"
extern ir_node *new_r_Sub(ir_node *block, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3539 "include/libfirm/nodes.h"
extern ir_node *new_d_Sub(dbg_info *dbgi, ir_node * irn_left, ir_node * irn_right, ir_mode * mode);
# 3548 "include/libfirm/nodes.h"
extern ir_node *new_Sub(ir_node * irn_left, ir_node * irn_right, ir_mode * mode);





extern int is_Sub(const ir_node *node);


extern ir_node *get_Sub_left(const ir_node *node);

extern void set_Sub_left(ir_node *node, ir_node *left);

extern ir_node *get_Sub_right(const ir_node *node);

extern void set_Sub_right(ir_node *node, ir_node *right);

extern ir_op *op_Sub;


extern ir_op *get_op_Sub(void);
# 3584 "include/libfirm/nodes.h"
typedef enum {
 n_Switch_selector,
 n_Switch_max = n_Switch_selector
} n_Switch;




typedef enum {
 pn_Switch_default,
 pn_Switch_max = pn_Switch_default
} pn_Switch;
# 3606 "include/libfirm/nodes.h"
extern ir_node *new_rd_Switch(dbg_info *dbgi, ir_node *block, ir_node * irn_selector, unsigned n_outs, ir_switch_table* table);
# 3616 "include/libfirm/nodes.h"
extern ir_node *new_r_Switch(ir_node *block, ir_node * irn_selector, unsigned n_outs, ir_switch_table* table);
# 3626 "include/libfirm/nodes.h"
extern ir_node *new_d_Switch(dbg_info *dbgi, ir_node * irn_selector, unsigned n_outs, ir_switch_table* table);
# 3635 "include/libfirm/nodes.h"
extern ir_node *new_Switch(ir_node * irn_selector, unsigned n_outs, ir_switch_table* table);





extern int is_Switch(const ir_node *node);


extern ir_node *get_Switch_selector(const ir_node *node);

extern void set_Switch_selector(ir_node *node, ir_node *selector);


extern unsigned get_Switch_n_outs(const ir_node *node);

extern void set_Switch_n_outs(ir_node *node, unsigned n_outs);


extern ir_switch_table* get_Switch_table(const ir_node *node);

extern void set_Switch_table(ir_node *node, ir_switch_table* table);

extern ir_op *op_Switch;


extern ir_op *get_op_Switch(void);
# 3691 "include/libfirm/nodes.h"
extern int is_SymConst(const ir_node *node);


extern ir_op *op_SymConst;


extern ir_op *get_op_SymConst(void);
# 3720 "include/libfirm/nodes.h"
extern ir_node *new_rd_Sync(dbg_info *dbgi, ir_node *block, int arity, ir_node *const * in);
# 3729 "include/libfirm/nodes.h"
extern ir_node *new_r_Sync(ir_node *block, int arity, ir_node *const * in);
# 3738 "include/libfirm/nodes.h"
extern ir_node *new_d_Sync(dbg_info *dbgi, int arity, ir_node *const * in);







extern ir_node *new_Sync(int arity, ir_node *const * in);





extern int is_Sync(const ir_node *node);


extern int get_Sync_n_preds(ir_node const *node);

extern ir_node *get_Sync_pred(ir_node const *node, int pos);

extern void set_Sync_pred(ir_node *node, int pos, ir_node *pred);

ir_node * *get_Sync_pred_arr(ir_node *node);

extern ir_op *op_Sync;


extern ir_op *get_op_Sync(void);
# 3792 "include/libfirm/nodes.h"
extern ir_node *new_rd_Tuple(dbg_info *dbgi, ir_node *block, int arity, ir_node *const * in);
# 3801 "include/libfirm/nodes.h"
extern ir_node *new_r_Tuple(ir_node *block, int arity, ir_node *const * in);
# 3810 "include/libfirm/nodes.h"
extern ir_node *new_d_Tuple(dbg_info *dbgi, int arity, ir_node *const * in);







extern ir_node *new_Tuple(int arity, ir_node *const * in);





extern int is_Tuple(const ir_node *node);


extern int get_Tuple_n_preds(ir_node const *node);

extern ir_node *get_Tuple_pred(ir_node const *node, int pos);

extern void set_Tuple_pred(ir_node *node, int pos, ir_node *pred);

ir_node * *get_Tuple_pred_arr(ir_node *node);

extern ir_op *op_Tuple;


extern ir_op *get_op_Tuple(void);
# 3857 "include/libfirm/nodes.h"
extern ir_node *new_rd_Unknown(dbg_info *dbgi, ir_graph *irg, ir_mode * mode);







extern ir_node *new_r_Unknown(ir_graph *irg, ir_mode * mode);







extern ir_node *new_d_Unknown(dbg_info *dbgi, ir_mode * mode);






extern ir_node *new_Unknown(ir_mode * mode);





extern int is_Unknown(const ir_node *node);


extern ir_op *op_Unknown;


extern ir_op *get_op_Unknown(void);
# 53 "include/libfirm/irnode.h"
extern int is_ir_node(const void *thing);






extern int get_irn_arity(const ir_node *node);





extern ir_node *get_irn_n(const ir_node *node, int n);







extern void set_irn_in(ir_node *node, int arity, ir_node *const in[]);







extern void add_irn_dep(ir_node *node, ir_node *dep);
# 91 "include/libfirm/irnode.h"
extern void add_irn_deps(ir_node *tgt, ir_node *src);






extern int get_irn_deps(const ir_node *node);







extern ir_node *get_irn_dep(const ir_node *node, int pos);







extern void set_irn_dep(ir_node *node, int pos, ir_node *dep);
# 123 "include/libfirm/irnode.h"
extern void delete_irn_dep(ir_node *node, ir_node *dep);


extern void set_irn_n(ir_node *node, int n, ir_node *in);





extern int add_irn_n(ir_node *node, ir_node *in);

extern void set_irn_mode(ir_node *node, ir_mode *mode);

extern ir_mode *get_irn_mode(const ir_node *node);

extern ir_op *get_irn_op(const ir_node *node);

extern void set_irn_op(ir_node *node, ir_op *op);

extern unsigned get_irn_opcode(const ir_node *node);

extern const char *get_irn_opname(const ir_node *node);

extern ident *get_irn_opident(const ir_node *node);

extern ir_visited_t get_irn_visited(const ir_node *node);

extern void set_irn_visited(ir_node *node, ir_visited_t visited);

extern void mark_irn_visited(ir_node *node);

extern int irn_visited(const ir_node *node);


extern int irn_visited_else_mark(ir_node *node);





extern void set_irn_link(ir_node *node, void *link);


extern void *get_irn_link(const ir_node *node);


extern ir_graph *get_irn_irg(const ir_node *node);




extern long get_irn_node_nr(const ir_node *node);
# 183 "include/libfirm/irnode.h"
extern op_pin_state get_irn_pinned(const ir_node *node);


extern void set_irn_pinned(ir_node *node, op_pin_state state);
# 203 "include/libfirm/irnode.h"
extern ir_node *new_ir_node(dbg_info *db, ir_graph *irg, ir_node *block,
                              ir_op *op, ir_mode *mode,
                              int arity, ir_node *const *in);
# 218 "include/libfirm/irnode.h"
extern ir_node *get_nodes_block(const ir_node *node);


extern void set_nodes_block(ir_node *node, ir_node *block);
# 237 "include/libfirm/irnode.h"
extern int get_Block_cfgpred_pos(const ir_node *block, const ir_node *pred);
# 247 "include/libfirm/irnode.h"
extern ir_node *get_Block_cfgpred_block(const ir_node *node, int pos);


extern int get_Block_matured(const ir_node *block);

extern void set_Block_matured(ir_node *block, int matured);



extern ir_visited_t get_Block_block_visited(const ir_node *block);

extern void set_Block_block_visited(ir_node *block, ir_visited_t visit);


extern void mark_Block_block_visited(ir_node *node);

extern int Block_block_visited(const ir_node *node);


extern ir_graph *get_Block_irg(const ir_node *block);

extern ir_entity *create_Block_entity(ir_node *block);

extern ir_node *get_Block_phis(const ir_node *block);

extern void set_Block_phis(ir_node *block, ir_node *phi);

extern void add_Block_phi(ir_node *block, ir_node *phi);

extern unsigned get_Block_mark(const ir_node *block);

extern void set_Block_mark(ir_node *block, unsigned mark);







extern ir_type *is_frame_pointer(const ir_node *n);






extern void add_End_keepalive(ir_node *end, ir_node *ka);






extern void set_End_keepalives(ir_node *end, int n, ir_node *in[]);


extern void remove_End_keepalive(ir_node *end, ir_node *irn);


extern void remove_End_n(ir_node *end, int idx);


extern void remove_End_Bads_and_doublets(ir_node *end);





extern void free_End(ir_node *end);
# 324 "include/libfirm/irnode.h"
extern int is_Const_null(const ir_node *node);


extern int is_Const_one(const ir_node *node);


extern int is_Const_all_one(const ir_node *node);
# 342 "include/libfirm/irnode.h"
extern int is_SymConst_addr_ent(const ir_node *node);
# 354 "include/libfirm/irnode.h"
extern symconst_kind get_SymConst_kind(const ir_node *node);

extern void set_SymConst_kind(ir_node *node, symconst_kind num);




extern ir_type *get_SymConst_type(const ir_node *node);

extern void set_SymConst_type(ir_node *node, ir_type *tp);




extern ir_entity *get_SymConst_entity(const ir_node *node);

extern void set_SymConst_entity(ir_node *node, ir_entity *ent);




extern ir_enum_const *get_SymConst_enum(const ir_node *node);

extern void set_SymConst_enum(ir_node *node, ir_enum_const *ec);


extern union symconst_symbol get_SymConst_symbol(const ir_node *node);

extern void set_SymConst_symbol(ir_node *node, union symconst_symbol sym);
# 407 "include/libfirm/irnode.h"
extern int Call_has_callees(const ir_node *node);

extern size_t get_Call_n_callees(const ir_node *node);

extern ir_entity *get_Call_callee(const ir_node *node, size_t pos);




extern void set_Call_callee_arr(ir_node *node, size_t n, ir_entity * *arr);

extern void remove_Call_callee_arr(ir_node *node);




extern const char *get_builtin_kind_name(ir_builtin_kind kind);




extern int is_binop(const ir_node *node);

extern ir_node *get_binop_left(const ir_node *node);

extern void set_binop_left(ir_node *node, ir_node *left);

extern ir_node *get_binop_right(const ir_node *node);

extern void set_binop_right(ir_node *node, ir_node *right);




extern int is_x_except_Proj(const ir_node *node);




extern int is_x_regular_Proj(const ir_node *node);





extern void ir_set_throws_exception(ir_node *node, int throws_exception);


extern int ir_throws_exception(const ir_node *node);


extern const char *get_relation_string(ir_relation relation);


extern ir_relation get_negated_relation(ir_relation relation);


extern ir_relation get_inversed_relation(ir_relation relation);
# 474 "include/libfirm/irnode.h"
extern ir_node *get_Phi_next(const ir_node *phi);



extern void set_Phi_next(ir_node *phi, ir_node *next);
# 487 "include/libfirm/irnode.h"
extern int is_memop(const ir_node *node);



extern ir_node *get_memop_mem(const ir_node *node);



extern void set_memop_mem(ir_node *node, ir_node *mem);






extern void add_Sync_pred(ir_node *node, ir_node *pred);

extern void remove_Sync_n(ir_node *n, int i);
# 513 "include/libfirm/irnode.h"
extern int is_arg_Proj(const ir_node *node);






extern size_t get_ASM_n_output_constraints(const ir_node *node);

extern size_t get_ASM_n_clobbers(const ir_node *node);




extern ir_node *skip_Proj(ir_node *node);

extern const ir_node *skip_Proj_const(const ir_node *node);

extern ir_node *skip_Id(ir_node *node);

extern ir_node *skip_Tuple(ir_node *node);

extern ir_node *skip_Pin(ir_node *node);

extern ir_node *skip_Confirm(ir_node *node);

extern ir_node *skip_HighLevel_ops(ir_node *node);

extern int is_cfop(const ir_node *node);


extern int is_unknown_jump(const ir_node *node);






extern int is_fragile_op(const ir_node *node);



extern int is_irn_forking(const ir_node *node);
# 570 "include/libfirm/irnode.h"
extern void copy_node_attr(ir_graph *irg, const ir_node *old_node, ir_node *new_node);



extern ir_type *get_irn_type_attr(ir_node *n);


extern ir_entity *get_irn_entity_attr(ir_node *n);


extern int is_irn_constlike(const ir_node *node);





extern int is_irn_keep(const ir_node *node);




extern int is_irn_start_block_placed(const ir_node *node);




extern int is_irn_cse_neutral(const ir_node *node);


extern const char *get_cond_jmp_predicate_name(cond_jmp_predicate pred);





extern void *get_irn_generic_attr(ir_node *node);




extern const void *get_irn_generic_attr_const(const ir_node *node);






extern unsigned get_irn_idx(const ir_node *node);







extern void set_irn_dbg_info(ir_node *n, dbg_info *db);






extern dbg_info *get_irn_dbg_info(const ir_node *n);




extern const char *gdb_node_helper(void *firm_object);
# 648 "include/libfirm/irnode.h"
extern ir_switch_table *ir_new_switch_table(ir_graph *irg, size_t n_entries);




extern size_t ir_switch_table_get_n_entries(const ir_switch_table *table);
# 663 "include/libfirm/irnode.h"
extern void ir_switch_table_set(ir_switch_table *table, size_t entry,
                                  ir_tarval *min, ir_tarval *max, long pn);


extern ir_tarval *ir_switch_table_get_max(const ir_switch_table *table,
                                            size_t entry);


extern ir_tarval *ir_switch_table_get_min(const ir_switch_table *table,
                                            size_t entry);


extern long ir_switch_table_get_pn(const ir_switch_table *table, size_t entry);


extern ir_switch_table *ir_switch_table_duplicate(ir_graph *irg, const ir_switch_table *table);
# 318 "include/libfirm/ircons.h"
extern ir_node *new_rd_Const_long(dbg_info *db, ir_graph *irg,
                                    ir_mode *mode, long value);
# 331 "include/libfirm/ircons.h"
extern ir_node *new_r_Const_long(ir_graph *irg, ir_mode *mode, long value);
# 340 "include/libfirm/ircons.h"
extern ir_node *new_d_Const_long(dbg_info *db, ir_mode *mode, long value);
# 353 "include/libfirm/ircons.h"
extern ir_node *new_Const_long(ir_mode *mode, long value);
# 394 "include/libfirm/ircons.h"
extern ir_node *new_rd_SymConst(dbg_info *db, ir_graph *irg, ir_mode *mode,
                                  union symconst_symbol value,
                                  symconst_kind kind);







extern ir_node *new_rd_SymConst_addr_ent(dbg_info *db, ir_graph *irg,
                                           ir_mode *mode, ir_entity *symbol);







extern ir_node *new_rd_SymConst_ofs_ent(dbg_info *db, ir_graph *irg,
                                          ir_mode *mode, ir_entity *symbol);







extern ir_node *new_rd_SymConst_size(dbg_info *db, ir_graph *irg,
                                       ir_mode *mode, ir_type *symbol);







extern ir_node *new_rd_SymConst_align(dbg_info *db, ir_graph *irg,
                                        ir_mode *mode, ir_type *symbol);
# 466 "include/libfirm/ircons.h"
extern ir_node *new_r_SymConst(ir_graph *irg, ir_mode *mode,
                                 union symconst_symbol value,
                                 symconst_kind kind);
# 502 "include/libfirm/ircons.h"
extern ir_node *new_d_SymConst(dbg_info *db, ir_mode *mode,
                                 union symconst_symbol value,
                                 symconst_kind kind);
# 537 "include/libfirm/ircons.h"
extern ir_node *new_SymConst(ir_mode *mode, union symconst_symbol value,
                               symconst_kind kind);
# 560 "include/libfirm/ircons.h"
extern ir_node *new_rd_simpleSel(dbg_info *db, ir_node *block, ir_node *store,
                                   ir_node *objptr, ir_entity *ent);
# 577 "include/libfirm/ircons.h"
extern ir_node *new_r_simpleSel(ir_node *block, ir_node *store,
                                  ir_node *objptr, ir_entity *ent);
# 593 "include/libfirm/ircons.h"
extern ir_node *new_d_simpleSel(dbg_info *db, ir_node *store, ir_node *objptr,
                                  ir_entity *ent);
# 606 "include/libfirm/ircons.h"
extern ir_node *new_simpleSel(ir_node *store, ir_node *objptr,
                                ir_entity *ent);
# 625 "include/libfirm/ircons.h"
extern ir_node *new_rd_DivRL(dbg_info *db, ir_node *block, ir_node *memop,
                               ir_node *op1, ir_node *op2, ir_mode *mode,
                               op_pin_state state);
# 638 "include/libfirm/ircons.h"
extern ir_node *new_r_DivRL(ir_node *block, ir_node *memop,
                              ir_node *op1, ir_node *op2, ir_mode *mode,
                              op_pin_state state);
# 653 "include/libfirm/ircons.h"
extern ir_node *new_d_DivRL(dbg_info *db, ir_node *memop,
                              ir_node *op1, ir_node *op2, ir_mode *mode,
                              op_pin_state state);
# 667 "include/libfirm/ircons.h"
extern ir_node *new_DivRL(ir_node *memop, ir_node *op1, ir_node *op2,
                            ir_mode *mode, op_pin_state state);
# 690 "include/libfirm/ircons.h"
extern ir_node *new_rd_ASM(dbg_info *db, ir_node *block, ir_node *mem,
                            int arity, ir_node *in[], ir_asm_constraint *inputs,
                            size_t n_outs, ir_asm_constraint *outputs,
                            size_t n_clobber, ident *clobber[],
                            ident *asm_text);
# 709 "include/libfirm/ircons.h"
extern ir_node *new_r_ASM(ir_node *block, ir_node *mem,
                            int arity, ir_node *in[], ir_asm_constraint *inputs,
                            size_t n_outs, ir_asm_constraint *outputs,
                            size_t n_clobber, ident *clobber[],
                            ident *asm_text);
# 729 "include/libfirm/ircons.h"
extern ir_node *new_d_ASM(dbg_info *db, ir_node *mem, int arity,
                            ir_node *in[], ir_asm_constraint *inputs,
                            size_t n_outs, ir_asm_constraint *outputs,
                            size_t n_clobber, ident *clobber[],
                            ident *asm_text);
# 748 "include/libfirm/ircons.h"
extern ir_node *new_ASM(ir_node *mem, int arity, ir_node *in[],
                          ir_asm_constraint *inputs, size_t n_outs,
                          ir_asm_constraint *outputs,
                          size_t n_clobber, ident *clobber[], ident *asm_text);
# 764 "include/libfirm/ircons.h"
extern ir_graph *current_ir_graph;




extern ir_graph *get_current_ir_graph(void);




extern void set_current_ir_graph(ir_graph *graph);
# 785 "include/libfirm/ircons.h"
extern ir_node *new_d_immBlock(dbg_info *db);
# 795 "include/libfirm/ircons.h"
extern ir_node *new_immBlock(void);
# 804 "include/libfirm/ircons.h"
extern ir_node *new_r_immBlock(ir_graph *irg);
# 813 "include/libfirm/ircons.h"
extern ir_node *new_rd_immBlock(dbg_info *db, ir_graph *irg);


extern void add_immBlock_pred(ir_node *immblock, ir_node *jmp);


extern void mature_immBlock(ir_node *block);







extern void set_cur_block(ir_node *target);




extern void set_r_cur_block(ir_graph *irg, ir_node *target);


extern ir_node *get_cur_block(void);

extern ir_node *get_r_cur_block(ir_graph *irg);
# 848 "include/libfirm/ircons.h"
extern ir_node *get_value(int pos, ir_mode *mode);


extern ir_node *get_r_value(ir_graph *irg, int pos, ir_mode *mode);
# 861 "include/libfirm/ircons.h"
extern ir_mode *ir_guess_mode(int pos);



extern ir_mode *ir_r_guess_mode(ir_graph *irg, int pos);
# 877 "include/libfirm/ircons.h"
extern void set_value(int pos, ir_node *value);

extern void set_r_value(ir_graph *irg, int pos, ir_node *value);







extern ir_node *get_store(void);


extern ir_node *get_r_store(ir_graph *irg);
# 899 "include/libfirm/ircons.h"
extern void set_store(ir_node *store);


extern void set_r_store(ir_graph *irg, ir_node *store);





extern void keep_alive(ir_node *ka);


extern void irg_finalize_cons(ir_graph *irg);





extern void irp_finalize_cons(void);





extern void ir_set_uninitialized_local_variable_func(
  uninitialized_local_variable_func_t *func);
# 37 "include/libfirm/irdom.h"
extern ir_node *get_Block_idom(const ir_node *block);


extern ir_node *get_Block_ipostdom(const ir_node *block);
# 50 "include/libfirm/irdom.h"
extern int block_dominates(const ir_node *a, const ir_node *b);
# 60 "include/libfirm/irdom.h"
extern int block_strictly_dominates(const ir_node *a, const ir_node *b);
# 70 "include/libfirm/irdom.h"
extern int block_postdominates(const ir_node *a, const ir_node *b);
# 80 "include/libfirm/irdom.h"
extern int block_strictly_postdominates(const ir_node *a, const ir_node *b);
# 93 "include/libfirm/irdom.h"
extern ir_node *get_Block_dominated_first(const ir_node *block);



extern ir_node *get_Block_postdominated_first(const ir_node *bl);
# 106 "include/libfirm/irdom.h"
extern ir_node *get_Block_dominated_next(const ir_node *node);



extern ir_node *get_Block_postdominated_next(const ir_node *node);







extern ir_node *node_smallest_common_dominator(ir_node *a, ir_node *b);
# 129 "include/libfirm/irdom.h"
extern void dom_tree_walk(ir_node *n, irg_walk_func *pre,
                            irg_walk_func *post, void *env);
# 141 "include/libfirm/irdom.h"
extern void postdom_tree_walk(ir_node *n, irg_walk_func *pre,
                                irg_walk_func *post, void *env);
# 151 "include/libfirm/irdom.h"
extern void dom_tree_walk_irg(ir_graph *irg, irg_walk_func *pre,
                                irg_walk_func *post, void *env);
# 161 "include/libfirm/irdom.h"
extern void postdom_tree_walk_irg(ir_graph *irg, irg_walk_func *pre,
                                    irg_walk_func *post, void *env);
# 179 "include/libfirm/irdom.h"
extern void compute_doms(ir_graph *irg);
# 196 "include/libfirm/irdom.h"
extern void compute_postdoms(ir_graph *irg);


extern void free_dom(ir_graph *irg);




extern void free_postdom(ir_graph *irg);





extern void ir_compute_dominance_frontiers(ir_graph *irg);







extern ir_node * *ir_get_dominance_frontier(const ir_node *block);
# 20 "ir/common/debug.h"
enum firm_dbg_level_t {
 LEVEL_DEFAULT = 0,
 LEVEL_1 = 1,
 LEVEL_2 = 2,
 LEVEL_3 = 4,
 LEVEL_4 = 8,
 LEVEL_5 = 16,

 SET_LEVEL_0 = 0,
 SET_LEVEL_1 = 1,
 SET_LEVEL_2 = 3,
 SET_LEVEL_3 = 7,
 SET_LEVEL_4 = 15,
 SET_LEVEL_5 = 31,
 SET_LEVEL_ALL = SET_LEVEL_5
};

typedef struct firm_dbg_module_t firm_dbg_module_t;


void *_firm_dbg_make_msg(const firm_dbg_module_t *mod, unsigned mask, const char *fmt, ...);


void _firm_dbg_print_msg(const char *filename, int line, const char *func, void *data);


void _firm_dbg_print(const firm_dbg_module_t *mod, unsigned mask, const char *fmt, ...);
# 56 "ir/common/debug.h"
firm_dbg_module_t *firm_dbg_register(const char *name);






void firm_dbg_set_mask(firm_dbg_module_t *module, unsigned mask);






unsigned firm_dbg_get_mask(const firm_dbg_module_t *module);






void firm_dbg_set_file(firm_dbg_module_t *module, FILE *file);
# 31 "include/libfirm/adt/list.h"
typedef struct list_head list_head;
# 46 "include/libfirm/adt/list.h"
struct list_head {
 struct list_head *next, *prev;
};
# 63 "include/libfirm/adt/list.h"
static inline void __list_add(struct list_head *new_node,
                              struct list_head *prev,
                              struct list_head *next)
{
 next->prev = new_node;
 new_node->next = next;
 new_node->prev = prev;
 prev->next = new_node;
}
# 81 "include/libfirm/adt/list.h"
static inline void list_add(struct list_head *new_node, struct list_head *head)
{
 __list_add(new_node, head, head->next);
}
# 94 "include/libfirm/adt/list.h"
static inline void list_add_tail(struct list_head *new_node, struct list_head *head)
{
 __list_add(new_node, head->prev, head);
}
# 106 "include/libfirm/adt/list.h"
static inline void __list_del(struct list_head * prev, struct list_head * next)
{
 next->prev = prev;
 prev->next = next;
}
# 120 "include/libfirm/adt/list.h"
static inline void list_del(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 entry->next = ((void *)0);
 entry->prev = ((void *)0);
}






static inline void list_del_init(struct list_head *entry)
{
 __list_del(entry->prev, entry->next);
 do { (entry)->next = (entry); (entry)->prev = (entry); } while (0);
}






static inline void list_move(struct list_head *list, struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add(list, head);
}






static inline void list_move_tail(struct list_head *list,
                                  struct list_head *head)
{
        __list_del(list->prev, list->next);
        list_add_tail(list, head);
}





static inline int list_empty(const struct list_head *head)
{
 return head->next == head;
}
# 177 "include/libfirm/adt/list.h"
static inline void __list_splice(struct list_head *list,
                                 struct list_head *head)
{
 struct list_head *first = list->next;
 struct list_head *last = list->prev;
 struct list_head *at = head->next;

 first->prev = head;
 head->next = first;

 last->next = at;
 at->prev = last;
}






static inline void list_splice(struct list_head *list, struct list_head *head)
{
 if (!list_empty(list))
  __list_splice(list, head);
}
# 209 "include/libfirm/adt/list.h"
static inline void list_splice_init(struct list_head *list,
        struct list_head *head)
{
 if (!list_empty(list)) {
  __list_splice(list, head);
  do { (list)->next = (list); (list)->prev = (list); } while (0);
 }
}
# 27 "include/libfirm/adt/pmap.h"
typedef struct pmap pmap;




typedef struct pmap_entry {
 const void *key;
 void *value;
} pmap_entry;



extern pmap *pmap_create(void);


extern pmap *pmap_create_ex(size_t slots);


extern void pmap_destroy(pmap *);





extern void pmap_insert(pmap *map, const void * key, void * value);


extern int pmap_contains(pmap *map, const void * key);


extern pmap_entry *pmap_find(pmap *map, const void * key);


extern void * pmap_get(pmap *map, const void * key);
# 70 "include/libfirm/adt/pmap.h"
extern size_t pmap_count(pmap *map);




extern pmap_entry *pmap_first(pmap *map);




extern pmap_entry *pmap_next(pmap *);
# 91 "include/libfirm/adt/pmap.h"
extern void pmap_break(pmap *map);
# 41 "include/libfirm/adt/xmalloc.h"
extern void *xmalloc(size_t size);





extern void *xrealloc(void *ptr, size_t size);





extern char *xstrdup(const char *str);
# 20 "ir/ana/irdom_t.h"
typedef struct ir_dom_info {
  ir_node *idom;
  ir_node *next;
  ir_node *first;

  unsigned tree_pre_num;

  unsigned max_subtree_pre_num;

  int pre_num;
  int dom_depth;
} ir_dom_info;

typedef struct ir_dom_front_info_t {
 pmap *df_map;
 struct obstack obst;
} ir_dom_front_info_t;

void set_Block_idom(ir_node *bl, ir_node *n);

int get_Block_dom_depth(const ir_node *bl);
void set_Block_dom_depth(ir_node *bl, int depth);

int get_Block_dom_pre_num(const ir_node *bl);
void set_Block_dom_pre_num(ir_node *bl, int num);

void set_Block_ipostdom(ir_node *bl, ir_node *n);

int get_Block_postdom_depth(const ir_node *bl);
void set_Block_postdom_depth(ir_node *bl, int depth);

int get_Block_postdom_pre_num(const ir_node *bl);
void set_Block_postdom_pre_num(ir_node *bl, int num);

unsigned get_Block_dom_tree_pre_num(const ir_node *bl);
unsigned get_Block_pdom_tree_pre_num(const ir_node *bl);

unsigned get_Block_dom_max_subtree_pre_num(const ir_node *bl);
unsigned get_Block_pdom_max_subtree_pre_num(const ir_node *bl);

void ir_free_dominance_frontiers(ir_graph *irg);
# 20 "include/libfirm/iredgekinds.h"
typedef enum ir_edge_kind_t {
 EDGE_KIND_NORMAL,
 EDGE_KIND_FIRST = EDGE_KIND_NORMAL,
 EDGE_KIND_BLOCK,
 EDGE_KIND_DEP,
 EDGE_KIND_LAST = EDGE_KIND_DEP,
} ir_edge_kind_t;
# 32 "include/libfirm/irtypeinfo.h"
extern ir_type *initial_type;
# 45 "include/libfirm/irtypeinfo.h"
extern void init_irtypeinfo(void);

extern void free_irtypeinfo(void);




typedef enum {
 ir_typeinfo_none,

 ir_typeinfo_consistent,

 ir_typeinfo_inconsistent

} ir_typeinfo_state;


extern void set_irg_typeinfo_state(ir_graph *irg, ir_typeinfo_state state);

extern ir_typeinfo_state get_irg_typeinfo_state(const ir_graph *irg);







extern ir_typeinfo_state get_irp_typeinfo_state(void);

extern void set_irp_typeinfo_state(ir_typeinfo_state state);

extern void set_irp_typeinfo_inconsistent(void);
# 85 "include/libfirm/irtypeinfo.h"
extern ir_type *get_irn_typeinfo_type(const ir_node *n);

extern void set_irn_typeinfo_type(ir_node *node, ir_type *type);
# 28 "include/libfirm/irmemory.h"
typedef enum ir_alias_relation {
 ir_no_alias,
 ir_may_alias,
 ir_sure_alias
} ir_alias_relation;


typedef enum ir_entity_usage_computed_state {
 ir_entity_usage_not_computed,
 ir_entity_usage_computed
} ir_entity_usage_computed_state;


typedef enum ir_disambuigator_options {
 aa_opt_no_opt = 0,
 aa_opt_type_based = 1,
 aa_opt_byte_type_may_alias = 2,
 aa_opt_no_alias_args = 4,
 aa_opt_no_alias_args_global = 8,
 aa_opt_no_alias = 16,
 aa_opt_inherited = 128
} ir_disambuigator_options;
# 58 "include/libfirm/irmemory.h"
typedef enum ir_storage_class_class_t {
 ir_sc_pointer = 0x0,
 ir_sc_globalvar = 0x1,
 ir_sc_localvar = 0x2,
 ir_sc_tls = 0x3,
 ir_sc_malloced = 0x4,
 ir_sc_globaladdr = 0x5,

 ir_sc_modifier_nottaken = 0x80,
 ir_sc_modifier_argument = 0x40,
 ir_sc_modifiers = ir_sc_modifier_nottaken | ir_sc_modifier_argument
} ir_storage_class_class_t;



extern ir_storage_class_class_t get_base_sc(ir_storage_class_class_t x);





typedef ir_alias_relation (*DISAMBIGUATOR_FUNC)(
 const ir_node *adr1, const ir_mode *mode1,
 const ir_node *adr2, const ir_mode *mode2);







extern ir_storage_class_class_t classify_pointer(const ir_node *irn,
                                                   const ir_entity *ent);




extern const char *get_ir_alias_relation_name(ir_alias_relation rel);
# 130 "include/libfirm/irmemory.h"
extern ir_alias_relation get_alias_relation(
 const ir_node *adr1, const ir_mode *mode1,
 const ir_node *adr2, const ir_mode *mode2);






extern void set_language_memory_disambiguator(DISAMBIGUATOR_FUNC func);




extern void mem_disambig_init(void);
# 157 "include/libfirm/irmemory.h"
extern ir_alias_relation get_alias_relation_ex(
 const ir_node *adr1, const ir_mode *mode1,
 const ir_node *adr2, const ir_mode *mode2);




extern void mem_disambig_term(void);
# 174 "include/libfirm/irmemory.h"
extern void assure_irg_entity_usage_computed(ir_graph *irg);




extern ir_entity_usage_computed_state get_irp_globals_entity_usage_state(void);






extern void set_irp_globals_entity_usage_state(ir_entity_usage_computed_state state);
# 200 "include/libfirm/irmemory.h"
extern void assure_irp_globals_entity_usage_computed(void);






extern unsigned get_irg_memory_disambiguator_options(const ir_graph *irg);







extern void set_irg_memory_disambiguator_options(ir_graph *irg,
                                                   unsigned options);







extern void set_irp_memory_disambiguator_options(unsigned options);






extern void mark_private_methods(void);
# 39 "include/libfirm/callgraph.h"
typedef enum {
 irp_callgraph_none,
 irp_callgraph_consistent,
 irp_callgraph_inconsistent,
 irp_callgraph_and_calltree_consistent
} irp_callgraph_state;


extern irp_callgraph_state get_irp_callgraph_state(void);


extern void set_irp_callgraph_state(irp_callgraph_state s);


extern size_t get_irg_n_callers(const ir_graph *irg);


extern ir_graph *get_irg_caller(const ir_graph *irg, size_t pos);


extern int is_irg_caller_backedge(const ir_graph *irg, size_t pos);


extern int has_irg_caller_backedge(const ir_graph *irg);


extern size_t get_irg_caller_loop_depth(const ir_graph *irg, size_t pos);


extern size_t get_irg_n_callees(const ir_graph *irg);


extern ir_graph *get_irg_callee(const ir_graph *irg, size_t pos);


extern int is_irg_callee_backedge(const ir_graph *irg, size_t pos);


extern int has_irg_callee_backedge(const ir_graph *irg);


extern size_t get_irg_callee_loop_depth(const ir_graph *irg, size_t pos);



extern size_t get_irg_loop_depth(const ir_graph *irg);



extern size_t get_irg_recursion_depth(const ir_graph *irg);


extern double get_irg_method_execution_frequency(const ir_graph *irg);






extern void compute_callgraph(void);


extern void free_callgraph(void);



typedef void callgraph_walk_func(ir_graph *g, void *env);
# 122 "include/libfirm/callgraph.h"
extern void callgraph_walk(callgraph_walk_func *pre,
                             callgraph_walk_func *post, void *env);




extern void find_callgraph_recursions(void);
# 140 "include/libfirm/callgraph.h"
extern void analyse_loop_nesting_depth(void);


typedef enum {
 loop_nesting_depth_none,

 loop_nesting_depth_consistent,
 loop_nesting_depth_inconsistent

} loop_nesting_depth_state;


extern loop_nesting_depth_state get_irp_loop_nesting_depth_state(void);


extern void set_irp_loop_nesting_depth_state(loop_nesting_depth_state s);


extern void set_irp_loop_nesting_depth_state_inconsistent(void);
# 126 "include/libfirm/irgraph.h"
extern ir_graph *new_ir_graph(ir_entity *ent, int n_loc);
# 135 "include/libfirm/irgraph.h"
extern void free_ir_graph(ir_graph *irg);
# 145 "include/libfirm/irgraph.h"
extern int is_ir_graph(const void *thing);


extern ir_entity *get_irg_entity(const ir_graph *irg);

extern void set_irg_entity(ir_graph *irg, ir_entity *ent);


extern ir_type *get_irg_frame_type(ir_graph *irg);

extern void set_irg_frame_type(ir_graph *irg, ir_type *ftp);


extern ir_node *get_irg_start_block(const ir_graph *irg);

extern void set_irg_start_block(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_start(const ir_graph *irg);

extern void set_irg_start(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_end_block(const ir_graph *irg);

extern void set_irg_end_block(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_end(const ir_graph *irg);

extern void set_irg_end(ir_graph *irg, ir_node *node);



extern ir_node *get_irg_initial_exec(const ir_graph *irg);

extern void set_irg_initial_exec(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_frame(const ir_graph *irg);

extern void set_irg_frame(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_initial_mem(const ir_graph *irg);

extern void set_irg_initial_mem(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_args(const ir_graph *irg);

extern void set_irg_args(ir_graph *irg, ir_node *node);


extern ir_node *get_irg_no_mem(const ir_graph *irg);

extern void set_irg_no_mem(ir_graph *irg, ir_node *node);


extern int get_irg_n_locs(ir_graph *irg);


extern long get_irg_graph_nr(const ir_graph *irg);






extern size_t get_irg_idx(const ir_graph *irg);
# 225 "include/libfirm/irgraph.h"
extern ir_node *get_idx_irn(const ir_graph *irg, unsigned idx);
# 234 "include/libfirm/irgraph.h"
extern op_pin_state get_irg_pinned(const ir_graph *irg);
# 243 "include/libfirm/irgraph.h"
typedef enum {
 irg_callee_info_none,
 irg_callee_info_consistent,
 irg_callee_info_inconsistent
} irg_callee_info_state;


extern irg_callee_info_state get_irg_callee_info_state(const ir_graph *irg);


extern void set_irg_callee_info_state(ir_graph *irg, irg_callee_info_state s);


extern void set_irg_link(ir_graph *irg, void *thing);

extern void *get_irg_link(const ir_graph *irg);



extern void inc_irg_visited(ir_graph *irg);


extern ir_visited_t get_irg_visited(const ir_graph *irg);


extern void set_irg_visited(ir_graph *irg, ir_visited_t i);


extern ir_visited_t get_max_irg_visited(void);


extern void set_max_irg_visited(int val);


extern ir_visited_t inc_max_irg_visited(void);



extern void inc_irg_block_visited(ir_graph *irg);


extern ir_visited_t get_irg_block_visited(const ir_graph *irg);


extern void set_irg_block_visited(ir_graph *irg, ir_visited_t i);






typedef enum ir_resources_t {
 IR_RESOURCE_NONE = 0,
 IR_RESOURCE_BLOCK_VISITED = 1 << 0,
 IR_RESOURCE_BLOCK_MARK = 1 << 1,
 IR_RESOURCE_IRN_VISITED = 1 << 2,
 IR_RESOURCE_IRN_LINK = 1 << 3,
 IR_RESOURCE_LOOP_LINK = 1 << 4,
 IR_RESOURCE_PHI_LIST = 1 << 5
} ir_resources_t;
# 313 "include/libfirm/irgraph.h"
extern void ir_reserve_resources(ir_graph *irg, ir_resources_t resources);

extern void ir_free_resources(ir_graph *irg, ir_resources_t resources);

extern ir_resources_t ir_resources_reserved(const ir_graph *irg);
# 330 "include/libfirm/irgraph.h"
typedef enum ir_graph_constraints_t {



 IR_GRAPH_CONSTRAINT_ARCH_DEP = 1U << 0,




 IR_GRAPH_CONSTRAINT_MODEB_LOWERED = 1U << 1,





 IR_GRAPH_CONSTRAINT_NORMALISATION2 = 1U << 2,





 IR_GRAPH_CONSTRAINT_OPTIMIZE_UNREACHABLE_CODE = 1U << 3,





 IR_GRAPH_CONSTRAINT_CONSTRUCTION = 1U << 4,




 IR_GRAPH_CONSTRAINT_TARGET_LOWERED = 1U << 5,





 IR_GRAPH_CONSTRAINT_BACKEND = 1U << 6,




 IR_GRAPH_CONSTRAINT_BACKEND_REGCONSTRAINTS = 1U << 7,
} ir_graph_constraints_t;



extern void add_irg_constraints(ir_graph *irg,
                                  ir_graph_constraints_t constraints);

extern void clear_irg_constraints(ir_graph *irg,
                                    ir_graph_constraints_t constraints);

extern int irg_is_constrained(const ir_graph *irg,
                                ir_graph_constraints_t constraints);






typedef enum ir_graph_properties_t {
 IR_GRAPH_PROPERTIES_NONE = 0,

 IR_GRAPH_PROPERTY_NO_CRITICAL_EDGES = 1U << 0,

 IR_GRAPH_PROPERTY_NO_BADS = 1U << 1,

 IR_GRAPH_PROPERTY_NO_TUPLES = 1U << 2,





 IR_GRAPH_PROPERTY_NO_UNREACHABLE_CODE = 1U << 3,

 IR_GRAPH_PROPERTY_ONE_RETURN = 1U << 4,

 IR_GRAPH_PROPERTY_CONSISTENT_DOMINANCE = 1U << 5,

 IR_GRAPH_PROPERTY_CONSISTENT_POSTDOMINANCE = 1U << 6,

 IR_GRAPH_PROPERTY_CONSISTENT_DOMINANCE_FRONTIERS = 1U << 7,




 IR_GRAPH_PROPERTY_CONSISTENT_OUT_EDGES = 1U << 8,

 IR_GRAPH_PROPERTY_CONSISTENT_OUTS = 1U << 9,

 IR_GRAPH_PROPERTY_CONSISTENT_LOOPINFO = 1U << 10,

 IR_GRAPH_PROPERTY_CONSISTENT_ENTITY_USAGE = 1U << 11,

 IR_GRAPH_PROPERTY_MANY_RETURNS = 1U << 12,





 IR_GRAPH_PROPERTIES_CONTROL_FLOW =
    IR_GRAPH_PROPERTY_NO_CRITICAL_EDGES
  | IR_GRAPH_PROPERTY_ONE_RETURN
  | IR_GRAPH_PROPERTY_NO_UNREACHABLE_CODE
  | IR_GRAPH_PROPERTY_CONSISTENT_LOOPINFO
  | IR_GRAPH_PROPERTY_CONSISTENT_DOMINANCE
  | IR_GRAPH_PROPERTY_CONSISTENT_POSTDOMINANCE
  | IR_GRAPH_PROPERTY_CONSISTENT_DOMINANCE_FRONTIERS,




 IR_GRAPH_PROPERTIES_ALL =
    IR_GRAPH_PROPERTIES_CONTROL_FLOW
     | IR_GRAPH_PROPERTY_NO_BADS
     | IR_GRAPH_PROPERTY_NO_TUPLES
     | IR_GRAPH_PROPERTY_CONSISTENT_OUT_EDGES
     | IR_GRAPH_PROPERTY_CONSISTENT_OUTS
     | IR_GRAPH_PROPERTY_CONSISTENT_ENTITY_USAGE
     | IR_GRAPH_PROPERTY_MANY_RETURNS,

} ir_graph_properties_t;



extern void add_irg_properties(ir_graph *irg, ir_graph_properties_t props);

extern void clear_irg_properties(ir_graph *irg, ir_graph_properties_t props);

extern int irg_has_properties(const ir_graph *irg,
                                ir_graph_properties_t props);


extern void set_irg_loc_description(ir_graph *irg, int n, void *description);


extern void *get_irg_loc_description(ir_graph *irg, int n);


extern unsigned get_irg_last_idx(const ir_graph *irg);





extern void assure_irg_properties(ir_graph *irg, ir_graph_properties_t props);






extern void confirm_irg_properties(ir_graph *irg, ir_graph_properties_t props);
# 46 "include/libfirm/irprog.h"
typedef enum ir_segment_t {
 IR_SEGMENT_FIRST,

 IR_SEGMENT_GLOBAL = IR_SEGMENT_FIRST,

 IR_SEGMENT_THREAD_LOCAL,





 IR_SEGMENT_CONSTRUCTORS,

 IR_SEGMENT_DESTRUCTORS,

 IR_SEGMENT_LAST = IR_SEGMENT_DESTRUCTORS
} ir_segment_t;
# 72 "include/libfirm/irprog.h"
extern ir_prog *irp;




typedef enum irp_resources_t {
 IRP_RESOURCE_NONE = 0,

 IRP_RESOURCE_IRG_LINK = 1 << 0,

 IRP_RESOURCE_ENTITY_LINK = 1 << 1,


 IRP_RESOURCE_TYPE_VISITED = 1 << 2,

 IRP_RESOURCE_TYPE_LINK = 1 << 3,
} irp_resources_t;
# 99 "include/libfirm/irprog.h"
extern void irp_reserve_resources(ir_prog *irp, irp_resources_t resources);

extern void irp_free_resources(ir_prog *irp, irp_resources_t resources);

extern irp_resources_t irp_resources_reserved(const ir_prog *irp);
# 116 "include/libfirm/irprog.h"
extern ir_prog *get_irp(void);


extern void set_irp(ir_prog *irp);







extern ir_prog *new_ir_prog(const char *name);



extern void free_ir_prog(void);



extern void set_irp_prog_name(ident *name);


extern int irp_prog_name_is_set(void);


extern ident *get_irp_ident(void);


extern const char *get_irp_name(void);


extern ir_graph *get_irp_main_irg(void);


extern void set_irp_main_irg(ir_graph *main_irg);


extern size_t get_irp_last_idx(void);


extern size_t get_irp_n_irgs(void);


extern ir_graph *get_irp_irg(size_t pos);


extern void set_irp_irg(size_t pos, ir_graph *irg);






extern ir_type *get_segment_type(ir_segment_t segment);





extern void set_segment_type(ir_segment_t segment, ir_type *new_type);






extern ir_type *get_glob_type(void);






extern ir_type *get_tls_type(void);





extern size_t get_irp_n_types(void);





extern ir_type *get_irp_type(size_t pos);





extern void set_irp_type(size_t pos, ir_type *typ);
# 220 "include/libfirm/irprog.h"
extern ir_graph *get_const_code_irg(void);



extern irg_callee_info_state get_irp_callee_info_state(void);


extern void set_irp_callee_info_state(irg_callee_info_state s);


extern ir_label_t get_irp_next_label_nr(void);


extern void add_irp_asm(ident *asm_string);


extern size_t get_irp_n_asms(void);


extern ident *get_irp_asm(size_t pos);
# 70 "/usr/include/assert.h" 3
extern void __assert_fail (const char *__assertion, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));


extern void __assert_perror_fail (int __errnum, const char *__file,
      unsigned int __line, const char *__function)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));




extern void __assert (const char *__assertion, const char *__file, int __line)
     __attribute__ ((__nothrow__ , __leaf__)) __attribute__ ((__noreturn__));
# 21 "include/libfirm/irprintf.h"
struct obstack;
# 48 "include/libfirm/irprintf.h"
extern void ir_printf(const char *fmt, ...);




extern void ir_fprintf(FILE *f, const char *fmt, ...);




extern void ir_snprintf(char *buf, size_t n, const char *fmt, ...);




extern void ir_vprintf(const char *fmt, va_list args);




extern void ir_vfprintf(FILE *f, const char *fmt, va_list args);




extern void ir_vsnprintf(char *buf, size_t len, const char *fmt,
                           va_list args);




extern void ir_obst_vprintf(struct obstack *obst, const char *fmt,
                              va_list args);
# 22 "ir/adt/bitfiddle.h"
static __attribute__((unused)) void compiletime_assert_unsignedsize (int h) { switch(h) { case 0: case (sizeof(unsigned) == 4): {} } }
static __attribute__((unused)) void compiletime_assert_uintmax (int h) { switch(h) { case 0: case ((2147483647 * 2U + 1U) == 4294967295U): {} } }
# 33 "ir/adt/bitfiddle.h"
static inline int add_saturated(int x, int y)
{
 int sum = x + y;






 int overflow = (x ^ sum) & (y ^ sum);
# 51 "ir/adt/bitfiddle.h"
 int inf = (x >> (sizeof(x) * 8 - 1)) ^ 2147483647;

 return overflow < 0 ? inf : sum;
}






static inline unsigned popcount(unsigned x)
{

 return __builtin_popcount(x);
# 73 "ir/adt/bitfiddle.h"
}






static inline unsigned nlz(unsigned x)
{

 if(x == 0)
  return 32;
 return __builtin_clz(x);
# 97 "ir/adt/bitfiddle.h"
}






static inline unsigned ntz(unsigned x)
{

 if(x == 0)
  return 32;
 return __builtin_ctz(x);



}
# 143 "ir/adt/bitfiddle.h"
static inline unsigned floor_po2(unsigned x)
{

 if(x == 0)
  return 0;

 return 0x80000000U >> nlz(x);
# 158 "ir/adt/bitfiddle.h"
}






static inline unsigned ceil_po2(unsigned x)
{
 if(x == 0)
  return 0;
 ((x < (1U << 31)) ? (void) (0) : __assert_fail ("x < (1U << 31)", "ir/adt/bitfiddle.h", 169, __PRETTY_FUNCTION__));



 return 0x80000000U >> (nlz(x-1) - 1);
# 183 "ir/adt/bitfiddle.h"
}




static inline int is_po2(unsigned x)
{
 return (x & (x-1)) == 0;
}
# 44 "ir/adt/raw_bitset.h"
static inline unsigned *rbitset_malloc(size_t size)
{
 return ((unsigned*)memset(xmalloc(sizeof(unsigned) * (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)))), 0, sizeof(unsigned) * (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)))));
}
# 65 "ir/adt/raw_bitset.h"
static inline unsigned *rbitset_obstack_alloc(struct obstack *obst,
                                              size_t size)
{
 return ((unsigned*)memset(((unsigned*)__extension__ ({ struct obstack *__h = (((obst))); __extension__ ({ struct obstack *__o = (__h); long int __len = ((sizeof(unsigned) * ((((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)))))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); })), 0, sizeof(unsigned) * (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)))));
}
# 80 "ir/adt/raw_bitset.h"
static inline unsigned *rbitset_duplicate_obstack_alloc(struct obstack *obst,
 const unsigned *old_bitset, size_t size)
{
 size_t size_bytes = (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned));
 unsigned *res = ((unsigned*)__extension__ ({ struct obstack *__h = ((obst)); __extension__ ({ struct obstack *__o = (__h); long int __len = ((sizeof(unsigned) * (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8))))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); }));
 memcpy(res, old_bitset, size_bytes);

 return res;
}




static inline _Bool rbitset_is_empty(const unsigned *bitset, size_t size)
{
 size_t i;
 size_t n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  if (bitset[i] != 0) {
   return 0;
  }
 }
 return 1;
}







static inline void rbitset_set(unsigned *bitset, size_t pos)
{
 bitset[pos / (sizeof(unsigned) * 8)] |= 1 << (pos % (sizeof(unsigned) * 8));
}







static inline void rbitset_flip(unsigned *bitset, size_t pos)
{
 bitset[pos / (sizeof(unsigned) * 8)] ^= 1 << (pos % (sizeof(unsigned) * 8));
}

static inline unsigned rbitset_last_mask_(size_t size)
{
 size_t p;
 if (size == 0)
  return 0;
 p = size % (sizeof(unsigned) * 8);
 return p == 0 ? ~0u : (1u << p)-1u;
}







static inline void rbitset_set_all(unsigned *bitset, size_t size)
{
 size_t i;
 size_t n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 if (n == 0)
  return;

 for (i = 0; i < n-1; ++i) {
  bitset[i] = ~0u;
 }
 bitset[i] = rbitset_last_mask_(size);
}







static inline void rbitset_clear(unsigned *bitset, size_t pos)
{
 bitset[pos / (sizeof(unsigned) * 8)] &= ~(1 << (pos % (sizeof(unsigned) * 8)));
}







static inline void rbitset_clear_all(unsigned *bitset, size_t size)
{
 size_t size_bytes = (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned));
 memset(bitset, 0, size_bytes);
}







static inline void rbitset_flip_all(unsigned *bitset, size_t size)
{
 size_t pos;
 size_t n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 if (n == 0)
  return;

 for (pos = 0; pos < n-1; ++pos) {
  bitset[pos] ^= ~0u;
 }
 bitset[pos] ^= rbitset_last_mask_(size);
}







static inline _Bool rbitset_is_set(const unsigned *bitset, size_t pos)
{
 return (bitset[pos / (sizeof(unsigned) * 8)] & (1 << (pos % (sizeof(unsigned) * 8)))) != 0;
}







static inline size_t rbitset_popcount(const unsigned *bitset, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));
 size_t res = 0;

 for (i = 0; i < n; ++i) {
  res += popcount(bitset[i]);
 }

 return res;
}
# 242 "ir/adt/raw_bitset.h"
static inline size_t rbitset_next(const unsigned *bitset, size_t pos,
                                  _Bool set)
{
 unsigned p;
 size_t elem_pos = pos / (sizeof(unsigned) * 8);
 size_t bit_pos = pos % (sizeof(unsigned) * 8);

 unsigned elem = bitset[elem_pos];
 unsigned mask = set ? 0 : ~0u;





 unsigned in_elem_mask = (1 << bit_pos) - 1;

 elem ^= mask;
 p = ntz(elem & ~in_elem_mask);


 if (p < (sizeof(unsigned) * 8)) {
  return elem_pos * (sizeof(unsigned) * 8) + p;
 }


 for (;;) {
  elem_pos++;
  elem = bitset[elem_pos] ^ mask;

  p = ntz(elem);
  if (p < (sizeof(unsigned) * 8)) {
   return elem_pos * (sizeof(unsigned) * 8) + p;
  }
 }
}
# 290 "ir/adt/raw_bitset.h"
static inline size_t rbitset_next_max(const unsigned *bitset, size_t pos,
                                      size_t last, _Bool set)
{
 ((pos <= last) ? (void) (0) : __assert_fail ("pos <= last", "ir/adt/raw_bitset.h", 293, __PRETTY_FUNCTION__));
 if (pos == last)
  return (size_t)-1;

 size_t p;
 size_t elem_pos = pos / (sizeof(unsigned) * 8);
 size_t bit_pos = pos % (sizeof(unsigned) * 8);

 unsigned elem = bitset[elem_pos];
 unsigned mask = set ? 0u : ~0u;
 size_t res = (size_t)-1;





 unsigned in_elem_mask = (1u << bit_pos) - 1;

 elem ^= mask;
 p = ntz(elem & ~in_elem_mask);


 if (p < (sizeof(unsigned) * 8)) {
  res = elem_pos * (sizeof(unsigned) * 8) + p;
 } else {
  size_t n = ((last+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

  for (elem_pos++; elem_pos < n; elem_pos++) {
   elem = bitset[elem_pos] ^ mask;

   p = ntz(elem);
   if (p < (sizeof(unsigned) * 8)) {
    res = elem_pos * (sizeof(unsigned) * 8) + p;
    break;
   }
  }
 }
 if (res >= last)
  res = (size_t)-1;

 return res;
}
# 343 "ir/adt/raw_bitset.h"
static inline void rbitset_and(unsigned *dst, const unsigned *src, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  dst[i] &= src[i];
 }
}
# 359 "ir/adt/raw_bitset.h"
static inline void rbitset_or(unsigned *dst, const unsigned *src, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  dst[i] |= src[i];
 }
}
# 375 "ir/adt/raw_bitset.h"
static inline void rbitset_andnot(unsigned *dst, const unsigned *src, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  dst[i] &= ~src[i];
 }
}
# 391 "ir/adt/raw_bitset.h"
static inline void rbitset_xor(unsigned *dst, const unsigned *src, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  dst[i] ^= src[i];
 }
}
# 407 "ir/adt/raw_bitset.h"
static inline void rbitset_set_range(unsigned *bitset, size_t from,
                                     size_t to, _Bool val)
{
# 422 "ir/adt/raw_bitset.h"
 size_t from_bit = from % (sizeof(unsigned) * 8);
 size_t from_pos = from / (sizeof(unsigned) * 8);
 unsigned from_unit_mask = ~((1 << from_bit) - 1);

 size_t to_bit = to % (sizeof(unsigned) * 8);
 size_t to_pos = to / (sizeof(unsigned) * 8);
 unsigned to_unit_mask = (1 << to_bit) - 1;

 ((from < to) ? (void) (0) : __assert_fail ("from < to", "ir/adt/raw_bitset.h", 430, __PRETTY_FUNCTION__));


 if (val) {
  if (from_pos == to_pos) {
   bitset[from_pos / (sizeof(unsigned) * 8)] |= from_unit_mask & to_unit_mask;
  } else {
   size_t i;
   bitset[from_pos / (sizeof(unsigned) * 8)] |= from_unit_mask;
   bitset[to_pos / (sizeof(unsigned) * 8)] |= to_unit_mask;
   for (i = from_pos + 1; i < to_pos; ++i)
    bitset[i / (sizeof(unsigned) * 8)] = ~0u;
  }
 } else {

  if (from_pos == to_pos) {
   bitset[from_pos / (sizeof(unsigned) * 8)] &= ~(from_unit_mask & to_unit_mask);
  } else {
   size_t i;
   bitset[from_pos / (sizeof(unsigned) * 8)] &= ~from_unit_mask;
   bitset[to_pos / (sizeof(unsigned) * 8)] &= ~to_unit_mask;
   for (i = from_pos + 1; i < to_pos; ++i)
    bitset[i / (sizeof(unsigned) * 8)] = 0;
  }
 }
}
# 464 "ir/adt/raw_bitset.h"
static inline _Bool rbitsets_equal(const unsigned *bitset1,
                                  const unsigned *bitset2, size_t size)
{
 size_t size_bytes = (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned));
 return memcmp(bitset1, bitset2, size_bytes) == 0;
}
# 478 "ir/adt/raw_bitset.h"
static inline _Bool rbitsets_have_common(const unsigned *bitset1,
                                        const unsigned *bitset2, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  if ((bitset1[i] & bitset2[i]) != 0)
   return 1;
 }
 return 0;
}
# 497 "ir/adt/raw_bitset.h"
static inline _Bool rbitset_contains(const unsigned *bitset1,
                                    const unsigned *bitset2, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));

 for (i = 0; i < n; ++i) {
  if ((bitset1[i] & bitset2[i]) != bitset1[i])
   return 0;
 }
 return 1;
}






static inline void rbitset_minus1(unsigned *bitset, size_t size)
{
 size_t i, n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));
 unsigned last_mask = rbitset_last_mask_(size);

 for (i = 0; i < n; ++i) {
  unsigned mask = i == n-1 ? last_mask : ~0u;
  unsigned val = bitset[i] & mask;
  unsigned val_minus1 = val - 1;
  bitset[i] = val_minus1 & mask;

  if (((val >> ((sizeof(unsigned) * 8)-1)) ^ (val_minus1 >> ((sizeof(unsigned) * 8)-1))) == 0)
   break;
 }
}
# 537 "ir/adt/raw_bitset.h"
static inline void rbitset_copy(unsigned *dst, const unsigned *src,
                                size_t size)
{
 memcpy(dst, src, (((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned)));
}

static inline void rbitset_copy_into(unsigned *dst, const unsigned *src,
                                     size_t size)
{
 size_t n = ((size+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8));
 unsigned last_mask = rbitset_last_mask_(size);

 memcpy(dst, src, (n-1) * ((sizeof(unsigned) * 8)/8));
 dst[n-1] = (src[n-1] & last_mask) | (dst[n-1] & ~last_mask);
}
# 24 "ir/adt/bitset.h"
typedef struct bitset_t {
 size_t size;
 unsigned data[1];

} bitset_t;




static inline size_t bitset_total_size(size_t n_bits)
{
 return sizeof(bitset_t) - sizeof(((bitset_t*)0)->data)
  + (((n_bits+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned));
}





static inline bitset_t *bitset_init(void *memory, size_t size)
{
 bitset_t *result = (bitset_t*) memory;
 result->size = size;
 rbitset_clear_all(result->data, size);
 return result;
}







static inline bitset_t *bitset_obstack_alloc(struct obstack *obst,
                                             size_t n_bits)
{
 size_t size = bitset_total_size(n_bits);
 void *memory = __extension__ ({ struct obstack *__h = (obst); __extension__ ({ struct obstack *__o = (__h); long int __len = ((size)); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); });
 return bitset_init(memory, n_bits);
}






static inline bitset_t *bitset_malloc(size_t n_bits)
{
 size_t size = bitset_total_size(n_bits);
 void *memory = xmalloc(size);
 return bitset_init(memory, n_bits);
}
# 91 "ir/adt/bitset.h"
static inline size_t bitset_size(const bitset_t *bitset)
{
 return bitset->size;
}






static inline void bitset_set(bitset_t *bs, size_t bit)
{
 ((bit < bs->size) ? (void) (0) : __assert_fail ("bit < bs->size", "ir/adt/bitset.h", 103, __PRETTY_FUNCTION__));
 rbitset_set(bs->data, bit);
}






static inline void bitset_clear(bitset_t *bs, size_t bit)
{
 ((bit < bs->size) ? (void) (0) : __assert_fail ("bit < bs->size", "ir/adt/bitset.h", 114, __PRETTY_FUNCTION__));
 rbitset_clear(bs->data, bit);
}







static inline _Bool bitset_is_set(const bitset_t *bs, size_t bit)
{
 ((bit < bs->size) ? (void) (0) : __assert_fail ("bit < bs->size", "ir/adt/bitset.h", 126, __PRETTY_FUNCTION__));
 return rbitset_is_set(bs->data, bit);
}






static inline void bitset_flip(bitset_t *bs, size_t bit)
{
 ((bit < bs->size) ? (void) (0) : __assert_fail ("bit < bs->size", "ir/adt/bitset.h", 137, __PRETTY_FUNCTION__));
 rbitset_flip(bs->data, bit);
}





static inline void bitset_flip_all(bitset_t *bs)
{
 rbitset_flip_all(bs->data, bs->size);
}
# 157 "ir/adt/bitset.h"
static inline void bitset_copy(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size == src->size) ? (void) (0) : __assert_fail ("tgt->size == src->size", "ir/adt/bitset.h", 159, __PRETTY_FUNCTION__));
 rbitset_copy(tgt->data, src->data, src->size);
}

static inline void bitset_copy_into(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size >= src->size) ? (void) (0) : __assert_fail ("tgt->size >= src->size", "ir/adt/bitset.h", 165, __PRETTY_FUNCTION__));
 rbitset_copy_into(tgt->data, src->data, src->size);
}
# 177 "ir/adt/bitset.h"
static inline size_t bitset_next_clear(const bitset_t *bs, size_t pos)
{
 return rbitset_next_max(bs->data, pos, bs->size, 0);
}
# 190 "ir/adt/bitset.h"
static inline size_t bitset_next_set(const bitset_t *bs, size_t pos)
{
 return rbitset_next_max(bs->data, pos, bs->size, 1);
}
# 213 "ir/adt/bitset.h"
static inline size_t bitset_popcount(const bitset_t *bs)
{
 return rbitset_popcount(bs->data, bs->size);
}






static inline void bitset_clear_all(bitset_t *bs)
{
 rbitset_clear_all(bs->data, bs->size);
}






static inline void bitset_set_all(bitset_t *bs)
{
 rbitset_set_all(bs->data, bs->size);
}
# 245 "ir/adt/bitset.h"
static inline _Bool bitset_contains(const bitset_t *lhs, const bitset_t *rhs)
{
 ((lhs->size == rhs->size) ? (void) (0) : __assert_fail ("lhs->size == rhs->size", "ir/adt/bitset.h", 247, __PRETTY_FUNCTION__));
 return rbitset_contains(lhs->data, rhs->data, lhs->size);
}






static inline void bitset_minus1(bitset_t *bs)
{
 rbitset_minus1(bs->data, bs->size);
}







static inline _Bool bitset_intersect(const bitset_t *a, const bitset_t *b)
{
 ((a->size == b->size) ? (void) (0) : __assert_fail ("a->size == b->size", "ir/adt/bitset.h", 269, __PRETTY_FUNCTION__));
 return rbitsets_have_common(a->data, b->data, a->size);
}
# 280 "ir/adt/bitset.h"
static inline void bitset_mod_range(bitset_t *a, size_t from, size_t to,
                                    _Bool do_set)
{
 if (from == to)
     return;

 if (to < from) {
  size_t tmp = from;
  from = to;
  to = tmp;
 }

 if (to > a->size)
  to = a->size;

 rbitset_set_range(a->data, from, to, do_set);
}
# 306 "ir/adt/bitset.h"
static inline _Bool bitset_is_empty(const bitset_t *bs)
{
 return rbitset_is_empty(bs->data, bs->size);
}







static inline void bitset_fprint(FILE *file, const bitset_t *bs)
{
 const char *prefix = "";
 size_t i;

 _IO_putc ('{', file);
 for(i = bitset_next_set(bs, 0); i != (size_t)-1; i = bitset_next_set(bs, i + 1)) {
  ir_fprintf(file, "%s%zu", prefix, i);
  prefix = ",";
 }
 _IO_putc ('}', file);
}







static inline void bitset_and(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size == src->size) ? (void) (0) : __assert_fail ("tgt->size == src->size", "ir/adt/bitset.h", 338, __PRETTY_FUNCTION__));
 rbitset_and(tgt->data, src->data, src->size);
}







static inline void bitset_andnot(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size == src->size) ? (void) (0) : __assert_fail ("tgt->size == src->size", "ir/adt/bitset.h", 350, __PRETTY_FUNCTION__));
 rbitset_andnot(tgt->data, src->data, src->size);
}







static inline void bitset_or(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size == src->size) ? (void) (0) : __assert_fail ("tgt->size == src->size", "ir/adt/bitset.h", 362, __PRETTY_FUNCTION__));
 rbitset_or(tgt->data, src->data, src->size);
}







static inline void bitset_xor(bitset_t *tgt, const bitset_t *src)
{
 ((tgt->size == src->size) ? (void) (0) : __assert_fail ("tgt->size == src->size", "ir/adt/bitset.h", 374, __PRETTY_FUNCTION__));
 rbitset_xor(tgt->data, src->data, src->size);
}




static inline void rbitset_copy_to_bitset(const unsigned *rbitset,
                                          bitset_t *bitset)
{
 rbitset_copy(bitset->data, rbitset, bitset->size);
}
# 36 "include/libfirm/adt/hashptr.h"
static inline unsigned hash_data(const unsigned char *data, size_t bytes)
{
 size_t i;
 unsigned hash = 2166136261U;

 for(i = 0; i < bytes; ++i) {
  hash = ((hash) * 16777619U);
  hash ^= data[i];
 }

 return hash;
}






static inline unsigned hash_str(const char *str)
{
 unsigned i;
 unsigned hash = 2166136261U;

 for(i = 0; str[i] != '\0'; ++i) {
  hash = ((hash) * 16777619U);
  hash ^= str[i];
 }

 return hash;
}






static inline unsigned hash_ptr(const void *ptr)
{
 return ((unsigned)(((char *) (ptr) - (char *)0) >> 3));
}







static inline unsigned hash_combine(unsigned x, unsigned y)
{
 unsigned hash = ((2166136261U) * 16777619U);
 hash ^= x;
 hash = ((hash) * 16777619U);
 hash ^= y;
 return hash;
}
# 35 "include/libfirm/adt/pset.h"
extern int pset_default_ptr_cmp(const void *x, const void *y);
# 45 "include/libfirm/adt/pset.h"
typedef struct pset pset;
# 61 "include/libfirm/adt/pset.h"
typedef struct {
  unsigned hash;
  void *dptr;
} pset_entry;
# 75 "include/libfirm/adt/pset.h"
typedef int (*pset_cmp_fun) (const void *elt, const void *key);
# 87 "include/libfirm/adt/pset.h"
extern pset *new_pset(pset_cmp_fun func, size_t slots);
# 97 "include/libfirm/adt/pset.h"
extern void del_pset(pset *pset);






extern size_t pset_count(pset *pset);
# 116 "include/libfirm/adt/pset.h"
extern void *pset_find(pset *pset, const void *key, unsigned hash);
# 133 "include/libfirm/adt/pset.h"
extern void *pset_insert(pset *pset, const void *key, unsigned hash);
# 149 "include/libfirm/adt/pset.h"
extern pset_entry *pset_hinsert(pset *pset, const void *key, unsigned hash);
# 167 "include/libfirm/adt/pset.h"
extern void *pset_remove(pset *pset, const void *key, unsigned hash);
# 176 "include/libfirm/adt/pset.h"
extern void *pset_first(pset *pset);
# 198 "include/libfirm/adt/pset.h"
extern void *pset_next(pset *pset);
# 220 "include/libfirm/adt/pset.h"
extern void pset_break(pset *pset);
# 238 "include/libfirm/adt/pset.h"
extern void pset_insert_pset_ptr(pset *target, pset *src);
# 250 "include/libfirm/adt/pset.h"
typedef enum { _pset_find, _pset_insert, _pset_hinsert } _pset_action;

extern void *_pset_search(pset *, const void *, unsigned, _pset_action);
# 25 "include/libfirm/vrp.h"
enum range_types {
 VRP_UNDEFINED,
 VRP_RANGE,
 VRP_ANTIRANGE,

 VRP_VARYING
};


typedef struct {
 ir_tarval *bits_set;


 ir_tarval *bits_not_set;


 enum range_types range_type;
 ir_tarval *range_bottom;
 ir_tarval *range_top;
} vrp_attr;





extern void set_vrp_data(ir_graph *irg);




extern void free_vrp_data(ir_graph *irg);
# 64 "include/libfirm/vrp.h"
extern ir_relation vrp_cmp(const ir_node *left, const ir_node *right);
# 73 "include/libfirm/vrp.h"
extern vrp_attr *vrp_get_info(const ir_node *n);
# 34 "ir/ir/irtypes.h"
struct ir_nodemap {
 void * *data;
};

typedef struct arch_irn_ops_t arch_irn_ops_t;




typedef struct {
 hash_func hash;
 computed_value_func computed_value;
 computed_value_func computed_value_Proj;
 equivalent_node_func equivalent_node;
 equivalent_node_func equivalent_node_Proj;
 transform_node_func transform_node;
 transform_node_func transform_node_Proj;
 node_cmp_attr_func node_cmp_attr;
 reassociate_func reassociate;
 copy_attr_func copy_attr;
 get_type_attr_func get_type_attr;
 get_entity_attr_func get_entity_attr;
 verify_node_func verify_node;
 verify_proj_node_func verify_proj_node;
 dump_node_func dump_node;
 op_func generic;
 op_func generic1;
 op_func generic2;
 const arch_irn_ops_t *be_ops;
} ir_op_ops;


struct ir_op {
 unsigned code;
 ident *name;
 size_t attr_size;

 op_pin_state pin_state;
 op_arity opar;
 int op_index;

 int memory_index;
 int pn_x_regular;

 int pn_x_except;

 unsigned flags;

 unsigned tag;
 void *attr;

 ir_op_ops ops;
};


enum ir_mode_sort_helper {
 irmsh_is_num = 0x10,
 irmsh_is_data = 0x20,
 irmsh_is_datab = 0x40,
 irmsh_is_dataM = 0x80,
};






typedef enum ir_mode_sort {
 irms_control_flow = 0,
 irms_block = 1,
 irms_tuple = 2,
 irms_any = 3,
 irms_bad = 4,
 irms_memory = 5 | irmsh_is_dataM,



 irms_internal_boolean = 6 | irmsh_is_datab,



 irms_reference = 7 | irmsh_is_data | irmsh_is_datab | irmsh_is_dataM,


 irms_int_number = 8 | irmsh_is_data | irmsh_is_datab | irmsh_is_dataM | irmsh_is_num,


 irms_float_number = 9 | irmsh_is_data | irmsh_is_datab | irmsh_is_dataM | irmsh_is_num,
} ir_mode_sort;




typedef struct float_descriptor_t {
 unsigned char exponent_size;
 unsigned char mantissa_size;
 _Bool explicit_one;
} float_descriptor_t;
# 153 "ir/ir/irtypes.h"
struct ir_mode {
 firm_kind kind;
 ident *name;
 ir_type *type;



 ir_mode_sort sort;


 ir_mode_arithmetic arithmetic;
 unsigned size;
 unsigned sign:1;
 unsigned int modulo_shift;
 float_descriptor_t float_desc;


 ir_tarval *min;
 ir_tarval *max;
 ir_tarval *null;
 ir_tarval *one;
 ir_tarval *minus_one;
 ir_tarval *all_one;
 ir_mode *eq_signed;
 ir_mode *eq_unsigned;
 void *link;
 const void *tv_priv;
};


typedef struct ir_switch_table_entry {
 ir_tarval *min;
 ir_tarval *max;
 long pn;
} ir_switch_table_entry;

struct ir_switch_table {
 size_t n_entries;
 ir_switch_table_entry entries[];
};




typedef struct irg_attr {
 ir_graph *irg;
} irg_attr;

typedef struct bad_attr {
 irg_attr irg;
} bad_attr;

typedef struct anchor_attr {
 irg_attr irg;
} anchor_attr;


typedef struct block_attr {

 irg_attr irg;
 ir_visited_t block_visited;

 unsigned is_matured:1;
 unsigned dynamic_ins:1;
 unsigned marked:1;
 ir_node * *graph_arr;

 ir_dom_info dom;
 ir_dom_info pdom;
 bitset_t *backedge;
 ir_entity *entity;
 ir_node *phis;
 double execfreq;
} block_attr;


typedef struct cond_attr {
 cond_jmp_predicate jmp_pred;
} cond_attr;


typedef struct const_attr {
 ir_tarval *tarval;
} const_attr;


typedef struct symconst_attr {
 symconst_symbol sym;
 symconst_kind kind;
} symconst_attr;


typedef struct sel_attr {
 ir_entity *entity;
} sel_attr;


typedef struct except_attr {
 unsigned pin_state : 2;


 unsigned throws_exception : 1;


} except_attr;


typedef struct call_attr {
 except_attr exc;
 ir_type *type;
 ir_entity * *callee_arr;
} call_attr;


typedef struct builtin_attr {
 except_attr exc;
 ir_builtin_kind kind;
 ir_type *type;
} builtin_attr;


typedef struct alloc_attr {
 unsigned alignment;
} alloc_attr;


typedef struct load_attr {
 except_attr exc;
 __extension__ ir_volatility volatility:1;
 __extension__ ir_align unaligned:1;
 ir_mode *mode;
} load_attr;


typedef struct store_attr {
 except_attr exc;
 __extension__ ir_volatility volatility:1;
 __extension__ ir_align unaligned:1;
} store_attr;

typedef struct phi_attr {
 ir_node *next;
 union {
  bitset_t *backedge;
  int pos;





 } u;
} phi_attr;


typedef struct cmp_attr {
 ir_relation relation;
} cmp_attr;


typedef struct confirm_attr {
 ir_relation relation;
} confirm_attr;


typedef struct copyb_attr {
 ir_type *type;
} copyb_attr;


typedef struct div_attr {
 except_attr exc;
 ir_mode *resmode;
 char no_remainder;
} div_attr;


typedef struct mod_attr {
 except_attr exc;
 ir_mode *resmode;
} mod_attr;


typedef struct asm_attr {

 op_pin_state pin_state;
 ident *text;
 ir_asm_constraint *input_constraints;
 ir_asm_constraint *output_constraints;
 ident * *clobbers;
} asm_attr;

typedef struct proj_attr {
 long proj;
} proj_attr;

typedef struct switch_attr {
 unsigned n_outs;
 ir_switch_table *table;
} switch_attr;



typedef union ir_attr {
 irg_attr irg;
 bad_attr bad;
 anchor_attr anchor;
 block_attr block;
 cmp_attr cmp;
 cond_attr cond;
 const_attr con;
 symconst_attr symc;
 sel_attr sel;
 call_attr call;
 builtin_attr builtin;
 alloc_attr alloc;
 load_attr load;
 store_attr store;
 phi_attr phi;
 proj_attr proj;
 confirm_attr confirm;
 except_attr except;
 copyb_attr copyb;
 div_attr div;
 mod_attr mod;
 asm_attr assem;
 switch_attr switcha;
} ir_attr;




typedef struct irn_edge_kind_info_t {
 struct list_head outs_head;
 unsigned edges_built : 1;
 unsigned out_count : 31;
} irn_edge_info_t;

typedef irn_edge_info_t irn_edges_info_t[EDGE_KIND_LAST+1];




typedef struct ir_def_use_edge {
 ir_node *use;
 int pos;
} ir_def_use_edge;

typedef struct ir_def_use_edges {
 unsigned n_edges;
 ir_def_use_edge edges[];
} ir_def_use_edges;





struct ir_node {

 firm_kind kind;
 unsigned node_idx;
 ir_op *op;
 ir_mode *mode;
 struct ir_node * *in;
 ir_visited_t visited;
 void *link;


 long node_nr;

 union {
  ir_def_use_edges *out;
  unsigned n_outs;

 } o;
 struct dbg_info *dbi;

 ir_loop *loop;
 struct ir_node * *deps;
 void *backend_info;
 irn_edges_info_t edge_info;


 ir_attr attr;

};
# 28 "ir/adt/hashset.h"
struct ir_edgeset_t {
 ir_edge_t* *entries;
 size_t num_buckets;
 size_t enlarge_threshold;
 size_t shrink_threshold;
 size_t num_elements;
 size_t num_deleted;
 int consider_shrink;

 unsigned entries_version;




};


struct ir_edgeset_iterator_t {
 ir_edge_t* *current_bucket;
 ir_edge_t* *end;

 const struct ir_edgeset_t *set;
 unsigned entries_version;

};
# 29 "ir/ir/iredgeset.h"
typedef struct ir_edgeset_t ir_edgeset_t;
typedef struct ir_edgeset_iterator_t ir_edgeset_iterator_t;






void ir_edgeset_init(ir_edgeset_t *edgeset);







void ir_edgeset_destroy(ir_edgeset_t *edgeset);







ir_edge_t *ir_edgeset_insert(ir_edgeset_t *edgeset, ir_edge_t *edge);
# 63 "ir/ir/iredgeset.h"
void ir_edgeset_remove(ir_edgeset_t *edgeset, const ir_edge_t *edge);
# 72 "ir/ir/iredgeset.h"
int ir_edgeset_contains(const ir_edgeset_t *edgeset, const ir_edge_t *edge);
# 81 "ir/ir/iredgeset.h"
void ir_edgeset_iterator_init(ir_edgeset_iterator_t *iterator,
                              const ir_edgeset_t *edgeset);
# 93 "ir/ir/iredgeset.h"
ir_edge_t *ir_edgeset_iterator_next(ir_edgeset_iterator_t *iterator);







void ir_edgeset_remove_iterator(ir_edgeset_t *edgeset,
                                const ir_edgeset_iterator_t *iterator);
# 444 "ir/ir/irtypes.h"
typedef struct irg_edge_info_t {
 ir_edgeset_t edges;
 struct list_head free_edges;
 struct obstack edges_obst;
 unsigned allocated : 1;
 unsigned activated : 1;
} irg_edge_info_t;

typedef irg_edge_info_t irg_edges_info_t[EDGE_KIND_LAST+1];




typedef enum irg_anchors {
 anchor_first,
 anchor_end_block = anchor_first,

 anchor_start_block,
 anchor_end,
 anchor_start,
 anchor_initial_exec,
 anchor_frame,
 anchor_initial_mem,
 anchor_args,
 anchor_no_mem,
 anchor_last = anchor_no_mem
} irg_anchors;



typedef struct cg_callee_entry {
 ir_graph *irg;
 ir_node * *call_list;
 size_t max_depth;
} cg_callee_entry;

typedef struct ir_vrp_info {
 struct ir_nodemap infos;
 struct obstack obst;
} ir_vrp_info;




struct ir_graph {
 firm_kind kind;

 unsigned last_node_idx;
 ir_entity *ent;


 ir_type *frame_type;

 ir_node *anchor;
 struct obstack obst;
 ir_node *current_block;


 ir_graph_properties_t properties;
 ir_graph_constraints_t constraints;
 op_pin_state irg_pinned_state;
 ir_typeinfo_state typeinfo_state;
 irg_callee_info_state callee_info_state;
 unsigned mem_disambig_opt;


 int n_loc;

 void * *loc_descriptions;


 pset *value_table;

 struct obstack out_obst;
 _Bool out_obst_allocated;
 ir_vrp_info vrp;

 ir_loop *loop;
 ir_dom_front_info_t domfront;
 void *link;


 ir_graph * *callers;
 unsigned *caller_isbe;
 cg_callee_entry * *callees;
 unsigned *callee_isbe;
 ir_loop *l;
 size_t callgraph_loop_depth;
 size_t callgraph_recursion_depth;
 double method_execution_frequency;



 ir_visited_t visited;



 ir_visited_t block_visited;

 ir_visited_t self_visited;

 irg_edges_info_t edge_info;
 ir_node * *idx_irn_map;

 size_t index;

 void *be_data;

 unsigned dump_nr;

 long graph_nr;




 ir_resources_t reserved_resources;

};
# 578 "ir/ir/irtypes.h"
struct ir_prog {
 firm_kind kind;
 ident *name;
 ir_graph *main_irg;

 ir_graph * *graphs;
 ir_graph *const_code_irg;



 ir_entity *unknown_entity;
 ir_type *segment_types[IR_SEGMENT_LAST+1];
 ir_type * *types;
 ir_type *code_type;
 ir_type *unknown_type;
 ir_type *byte_type;
 ident * *global_asms;


 ir_node * *ip_outedges;


 irg_callee_info_state callee_info_state;

 ir_typeinfo_state typeinfo_state;
 inh_transitive_closure_state inh_trans_closure_state;


 irp_callgraph_state callgraph_state;
 ir_loop *outermost_cg_loop;

 size_t max_callgraph_loop_depth;
 size_t max_callgraph_recursion_depth;
 double max_method_execution_frequency;
 loop_nesting_depth_state lnd_state;
 ir_entity_usage_computed_state globals_entity_usage_state;

 ir_label_t last_label_nr;
 size_t max_irg_idx;
 long max_node_nr;
 unsigned dump_nr;
 pmap *compilerlib_entities;

 irp_resources_t reserved_resources;

};
# 86 "include/libfirm/tv.h"
extern ir_tarval *new_tarval_from_str(const char *str, size_t len,
                                        ir_mode *mode);
# 106 "include/libfirm/tv.h"
extern ir_tarval *new_integer_tarval_from_str(const char *str, size_t len,
                                                char sign, unsigned char base,
                                                ir_mode *mode);
# 137 "include/libfirm/tv.h"
extern ir_tarval *new_tarval_from_long(long l, ir_mode *mode);
# 149 "include/libfirm/tv.h"
extern ir_tarval *new_tarval_from_bytes(unsigned char const *buf,
                                          ir_mode *mode, int big_endian);




extern long get_tarval_long(ir_tarval *tv);
# 164 "include/libfirm/tv.h"
extern int tarval_is_long(ir_tarval *tv);
# 193 "include/libfirm/tv.h"
extern ir_tarval *new_tarval_from_double(double d, ir_mode *mode);




extern ir_tarval *new_tarval_from_long_double(long double d, ir_mode *mode);
# 209 "include/libfirm/tv.h"
extern double get_tarval_double(ir_tarval *tv);




extern long double get_tarval_long_double(ir_tarval *tv);
# 223 "include/libfirm/tv.h"
extern int tarval_is_double(ir_tarval *tv);






extern ir_mode *get_tarval_mode(const ir_tarval *tv);






extern int tarval_is_negative(ir_tarval *tv);






extern int tarval_is_null(ir_tarval *tv);






extern int tarval_is_one(ir_tarval *tv);






extern int tarval_is_minus_one(ir_tarval *tv);




extern int tarval_is_all_one(ir_tarval *tv);





extern int tarval_is_constant(ir_tarval *tv);


extern ir_tarval *tarval_bad;

extern ir_tarval *get_tarval_bad(void);


extern ir_tarval *tarval_undefined;

extern ir_tarval *get_tarval_undefined(void);


extern ir_tarval *tarval_b_false;

extern ir_tarval *get_tarval_b_false(void);


extern ir_tarval *tarval_b_true;

extern ir_tarval *get_tarval_b_true(void);


extern ir_tarval *tarval_unreachable;

extern ir_tarval *get_tarval_unreachable(void);


extern ir_tarval *tarval_reachable;

extern ir_tarval *get_tarval_reachable(void);
# 312 "include/libfirm/tv.h"
extern ir_tarval *get_tarval_max(ir_mode *mode);


extern ir_tarval *get_tarval_min(ir_mode *mode);



extern ir_tarval *get_tarval_null(ir_mode *mode);


extern ir_tarval *get_tarval_one(ir_mode *mode);



extern ir_tarval *get_tarval_minus_one(ir_mode *mode);



extern ir_tarval *get_tarval_all_one(ir_mode *mode);


extern ir_tarval *get_tarval_nan(ir_mode *mode);


extern ir_tarval *get_tarval_plus_inf(ir_mode *mode);


extern ir_tarval *get_tarval_minus_inf(ir_mode *mode);


typedef enum tarval_int_overflow_mode_t {
 TV_OVERFLOW_BAD,
 TV_OVERFLOW_WRAP,
 TV_OVERFLOW_SATURATE
} tarval_int_overflow_mode_t;






extern void tarval_set_integer_overflow_mode(tarval_int_overflow_mode_t ov_mode);




extern tarval_int_overflow_mode_t tarval_get_integer_overflow_mode(void);
# 371 "include/libfirm/tv.h"
extern ir_relation tarval_cmp(ir_tarval *a, ir_tarval *b);
# 395 "include/libfirm/tv.h"
extern ir_tarval *tarval_convert_to(ir_tarval *src, ir_mode *mode);
# 429 "include/libfirm/tv.h"
extern ir_tarval *tarval_not(ir_tarval *a);
# 438 "include/libfirm/tv.h"
extern ir_tarval *tarval_neg(ir_tarval *a);
# 448 "include/libfirm/tv.h"
extern ir_tarval *tarval_add(ir_tarval *a, ir_tarval *b);
# 459 "include/libfirm/tv.h"
extern ir_tarval *tarval_sub(ir_tarval *a, ir_tarval *b, ir_mode *dst_mode);
# 469 "include/libfirm/tv.h"
extern ir_tarval *tarval_mul(ir_tarval *a, ir_tarval *b);
# 479 "include/libfirm/tv.h"
extern ir_tarval *tarval_div(ir_tarval *a, ir_tarval *b);
# 489 "include/libfirm/tv.h"
extern ir_tarval *tarval_mod(ir_tarval *a, ir_tarval *b);
# 500 "include/libfirm/tv.h"
extern ir_tarval *tarval_divmod(ir_tarval *a, ir_tarval *b, ir_tarval * *mod_res);
# 509 "include/libfirm/tv.h"
extern ir_tarval *tarval_abs(ir_tarval *a);
# 519 "include/libfirm/tv.h"
extern ir_tarval *tarval_and(ir_tarval *a, ir_tarval *b);
# 529 "include/libfirm/tv.h"
extern ir_tarval *tarval_andnot(ir_tarval *a, ir_tarval *b);
# 539 "include/libfirm/tv.h"
extern ir_tarval *tarval_or(ir_tarval *a, ir_tarval *b);
# 549 "include/libfirm/tv.h"
extern ir_tarval *tarval_eor(ir_tarval *a, ir_tarval *b);
# 559 "include/libfirm/tv.h"
extern ir_tarval *tarval_shl(ir_tarval *a, ir_tarval *b);





extern ir_tarval *tarval_shl_unsigned(ir_tarval *a, unsigned b);
# 575 "include/libfirm/tv.h"
extern ir_tarval *tarval_shr(ir_tarval *a, ir_tarval *b);





extern ir_tarval *tarval_shr_unsigned(ir_tarval *a, unsigned b);
# 591 "include/libfirm/tv.h"
extern ir_tarval *tarval_shrs(ir_tarval *a, ir_tarval *b);





extern ir_tarval *tarval_shrs_unsigned(ir_tarval *a, unsigned b);
# 607 "include/libfirm/tv.h"
typedef enum {
 TVO_NATIVE,
 TVO_HEX,
 TVO_DECIMAL,
 TVO_OCTAL,
 TVO_BINARY,
 TVO_FLOAT,
 TVO_HEXFLOAT

} tv_output_mode;





typedef struct tarval_mode_info {
 tv_output_mode mode_output;
 const char *mode_prefix;

 const char *mode_suffix;

} tarval_mode_info;
# 640 "include/libfirm/tv.h"
extern int set_tarval_mode_output_option(ir_mode *mode,
                                           const tarval_mode_info *modeinfo);
# 652 "include/libfirm/tv.h"
extern const tarval_mode_info *get_tarval_mode_output_option(ir_mode *mode);
# 677 "include/libfirm/tv.h"
extern char *get_tarval_bitpattern(ir_tarval *tv);
# 705 "include/libfirm/tv.h"
extern unsigned char get_tarval_sub_bits(ir_tarval *tv, unsigned byte_ofs);







extern int tarval_is_single_bit(ir_tarval *tv);
# 722 "include/libfirm/tv.h"
extern int get_tarval_popcount(ir_tarval *tv);
# 731 "include/libfirm/tv.h"
extern int get_tarval_lowest_bit(ir_tarval *tv);
# 740 "include/libfirm/tv.h"
extern int get_tarval_highest_bit(ir_tarval *tv);
# 749 "include/libfirm/tv.h"
extern int tarval_snprintf(char *buf, size_t buflen, ir_tarval *tv);






extern int tarval_printf(ir_tarval *tv);







extern int tarval_zero_mantissa(ir_tarval *tv);







extern int tarval_get_exponent(ir_tarval *tv);
# 781 "include/libfirm/tv.h"
extern int tarval_ieee754_can_conv_lossless(ir_tarval *tv, ir_mode *mode);




extern unsigned tarval_ieee754_get_exact(void);






extern int tarval_is_NaN(ir_tarval *tv);






extern int tarval_is_plus_inf(ir_tarval *tv);






extern int tarval_is_minus_inf(ir_tarval *tv);






extern int tarval_is_finite(ir_tarval *tv);
# 824 "include/libfirm/tv.h"
extern int is_tarval(const void *thing);
# 33 "ir/ir/irop_t.h"
void firm_init_op(void);


void firm_finish_op(void);





static inline size_t get_op_attr_size(const ir_op *op)
{
 return op->attr_size;
}





static inline _Bool is_op_cfopcode(const ir_op *op)
{
 return op->flags & irop_flag_cfopcode;
}

static inline _Bool is_op_unknown_jump(const ir_op *op)
{
 return op->flags & irop_flag_unknown_jump;
}


static inline _Bool is_op_commutative(const ir_op *op)
{
 return op->flags & irop_flag_commutative;
}


static inline _Bool is_op_fragile(const ir_op *op)
{
 return op->flags & irop_flag_fragile;
}


static inline _Bool is_op_forking(const ir_op *op)
{
 return op->flags & irop_flag_forking;
}


static inline _Bool is_op_highlevel(const ir_op *op)
{
 return op->flags & irop_flag_highlevel;
}


static inline _Bool is_op_constlike(const ir_op *op)
{
 return op->flags & irop_flag_constlike;
}

static inline _Bool is_op_uses_memory(const ir_op *op)
{
 return op->flags & irop_flag_uses_memory;
}


static inline _Bool is_op_keep(const ir_op *op)
{
 return op->flags & irop_flag_keep;
}


static inline _Bool is_op_start_block_placed(const ir_op *op)
{
 return op->flags & irop_flag_start_block;
}


static inline _Bool is_op_cse_neutral(const ir_op *op)
{
 return op->flags & irop_flag_cse_neutral;
}

static inline unsigned get_op_code_(const ir_op *op)
{
 return op->code;
}

static inline ident *get_op_ident_(const ir_op *op)
{
 return op->name;
}

static inline op_pin_state get_op_pinned_(const ir_op *op)
{
 return op->pin_state;
}

static inline void set_generic_function_ptr_(ir_op *op, op_func func)
{
 op->ops.generic = func;
}

static inline op_func get_generic_function_ptr_(const ir_op *op)
{
 return op->ops.generic;
}

static inline ir_op_ops const *get_op_ops(ir_op const *const op)
{
 return &op->ops;
}

static inline void set_op_tag_(ir_op *op, unsigned tag)
{
 op->tag = tag;
}

static inline unsigned get_op_tag_(const ir_op *op)
{
 return op->tag;
}

static inline void set_op_attr_(ir_op *op, void *attr)
{
 op->attr = attr;
}

static inline void *get_op_attr_(const ir_op *op)
{
 return op->attr;
}
# 24 "ir/tr/tpop_t.h"
typedef void (*free_attrs_func)(ir_type *tp);


typedef void (*free_entities_func)(ir_type *tp);


typedef void (*free_auto_entities_func)(ir_type *tp);


typedef void (*set_type_mode_func)(ir_type *tp, ir_mode *m);


typedef void (*set_type_size_func)(ir_type *tp, unsigned size);


typedef size_t (*get_n_members_func)(const ir_type *tp);


typedef ir_entity *(*get_member_func)(const ir_type *tp, size_t pos);

typedef size_t (*get_member_index_func)(const ir_type *tp, ir_entity *member);


typedef void (*insert_entity_func)(ir_type *tp, ir_entity *member);




typedef struct tp_op_ops {
 free_attrs_func free_attrs;
 free_entities_func free_entities;
 free_auto_entities_func free_auto_entities;
 set_type_mode_func set_type_mode;
 set_type_size_func set_type_size;
 get_n_members_func get_n_members;
 get_member_func get_member;
 get_member_index_func get_member_index;
} tp_op_ops;


enum tp_op_flags_t {
 TP_OP_FLAG_COMPOUND = 1
};


struct tp_op {
 tp_opcode code;
 ident *name;
 size_t attr_size;
 unsigned flags;
 tp_op_ops ops;
};
# 92 "ir/tr/tpop_t.h"
const tp_op *new_tpop (tp_opcode code, ident *name, unsigned flags, size_t attr_size, const tp_op_ops *ops);




void free_tpop(const tp_op *tpop);
# 108 "ir/tr/tpop_t.h"
void init_tpop(void);






void finish_tpop(void);
# 126 "ir/tr/tpop_t.h"
static inline size_t get_tpop_attr_size(const tp_op *op)
{
 return op->attr_size;
}





static inline tp_opcode _get_tpop_code(const tp_op *op)
{
 return op->code;
}

static inline ident *_get_tpop_ident(const tp_op *op)
{
 return op->name;
}
# 226 "include/libfirm/adt/array.h"
typedef union {
  long double d;
  void *p;
  long l;
} aligned_type;




typedef struct {
 int magic;
 size_t allocated;
 size_t nelts;
 aligned_type elts[1];
} ir_arr_descr;

extern ir_arr_descr arr_mt_descr;

extern void *ir_new_arr_f(size_t nelts, size_t elts_size);
extern void ir_del_arr_f(void *elts);
extern void *ir_new_arr_d(struct obstack *obstack, size_t nelts, size_t elts_size);
extern void *ir_arr_resize(void *elts, size_t nelts, size_t elts_size);
extern void *ir_arr_setlen(void *elts, size_t nelts, size_t elts_size);
extern void ir_verify_arr(const void *elts);






static inline void ARR_SHRINKLEN(void *arr, size_t new_len)
{
 ir_verify_arr(arr);
 ((((ir_arr_descr *)(void *)((char *)(arr) - __builtin_offsetof (ir_arr_descr, elts)))->nelts >= new_len) ? (void) (0) : __assert_fail ("((ir_arr_descr *)(void *)((char *)(arr) - __builtin_offsetof (ir_arr_descr, elts)))->nelts >= new_len", "include/libfirm/adt/array.h", 259, __PRETTY_FUNCTION__));
 ((ir_arr_descr *)(void *)((char *)(arr) - __builtin_offsetof (ir_arr_descr, elts)))->nelts = new_len;
}
# 69 "ir/tr/type_t.h"
enum class_flags {
 cf_none = 0,
 cf_final_class = 1,
 cf_interface_class = 2,
 cf_absctract_class = 4,
};


typedef struct {
 ir_entity * *members;
 ir_type * *subtypes;
 ir_type * *supertypes;
 ir_peculiarity peculiarity;
 int dfn;
 unsigned vtable_size;
 unsigned clss_flags;
} cls_attr;


typedef struct {
 ir_entity * *members;
} stc_attr;


typedef struct {
 ir_type *tp;
 ir_entity *ent;
} tp_ent_pair;


typedef struct {
 size_t n_params;
 tp_ent_pair *params;
 size_t n_res;
 tp_ent_pair *res_type;
 ir_variadicity variadicity;
 mtp_additional_properties properties;
 unsigned irg_calling_conv;
} mtd_attr;


typedef struct {
 ir_entity * *members;
} uni_attr;


typedef struct {
 size_t n_dimensions;
 ir_node * *lower_bound;
 ir_node * *upper_bound;
 size_t *order;
 ir_type *element_type;
 ir_entity *element_ent;

} arr_attr;


struct ir_enum_const {
 ir_tarval *value;
 ident *nameid;
 ir_type *owner;
};


typedef struct {
 ir_enum_const *enumer;

} enm_attr;


typedef struct {
 ir_type *points_to;
} ptr_attr;


typedef union {
 cls_attr ca;
 stc_attr sa;
 mtd_attr ma;
 uni_attr ua;
 arr_attr aa;
 enm_attr ea;
 ptr_attr pa;
} tp_attr;


typedef enum type_flags {
 tf_none = 0,
 tf_lowered_type = 1U << 0,
 tf_layout_fixed = 1U << 1,

 tf_frame_type = 1U << 2,
 tf_segment = 1U << 3,
 tf_global_type = 1U << 4,
 tf_tls_type = 1U << 5,
 tf_constructors = 1U << 6,
 tf_destructors = 1U << 7,
 tf_variable_size = 1U << 8,
} type_flags;
# 184 "ir/tr/type_t.h"
struct ir_type {
 firm_kind kind;
 const tp_op *type_op;
 ident *name;
 ir_visibility visibility;
 unsigned flags;
 unsigned size;


 unsigned align;




 ir_mode *mode;
 ir_visited_t visit;
 void *link;
 type_dbg_info *dbi;
 ir_type *higher_type;



 long nr;


 tp_attr attr;

};

void free_type_entities(ir_type *tp);

void free_class_entities (ir_type *clss);
void free_struct_entities (ir_type *strct);
void free_method_entities (ir_type *method);
void free_union_entities (ir_type *uni);
void free_array_entities (ir_type *array);
void free_enumeration_entities(ir_type *enumeration);
void free_pointer_entities (ir_type *pointer);

void free_array_automatic_entities(ir_type *array);

void free_class_attrs (ir_type *clss);
void free_struct_attrs (ir_type *strct);
void free_method_attrs (ir_type *method);
void free_union_attrs (ir_type *uni);
void free_array_attrs (ir_type *array);
void free_enumeration_attrs(ir_type *enumeration);
void free_pointer_attrs (ir_type *pointer);

void set_class_mode(ir_type *tp, ir_mode *mode);
void set_struct_mode(ir_type *tp, ir_mode *mode);
void set_pointer_mode(ir_type *tp, ir_mode *mode);
void set_primitive_mode(ir_type *tp, ir_mode *mode);
void set_enumeration_mode(ir_type *tp, ir_mode *mode);

void set_class_size(ir_type *tp, unsigned bytes);
void set_struct_size(ir_type *tp, unsigned bytes);
void set_union_size(ir_type *tp, unsigned bytes);
void set_array_size(ir_type *tp, unsigned bytes);
void set_default_size(ir_type *tp, unsigned bytes);



void set_class_dfn(ir_type *clss, int dfn);
int get_class_dfn(const ir_type *clss);

void add_compound_member(ir_type *compound, ir_entity *entity);


void ir_init_type(ir_prog *irp);


void ir_finish_type(ir_prog *irp);
# 266 "ir/tr/type_t.h"
ir_type *clone_type_method(ir_type *tp);

extern ir_visited_t firm_type_visited;

static inline void _set_master_type_visited(ir_visited_t val)
{
 firm_type_visited = val;
}

static inline ir_visited_t _get_master_type_visited(void)
{
 return firm_type_visited;
}

static inline void _inc_master_type_visited(void)
{
 ++firm_type_visited;
}

static inline int is_lowered_type(const ir_type *tp)
{
 return tp->flags & tf_lowered_type;
}

static inline ir_type *get_higher_type(const ir_type *tp)
{
 return tp->higher_type;
}

static inline void set_higher_type(ir_type *tp, ir_type *higher_type)
{
 tp->flags |= tf_lowered_type;
 tp->higher_type = higher_type;
}

static inline void *_get_type_link(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 303, __PRETTY_FUNCTION__));
 return(tp -> link);
}

static inline void _set_type_link(ir_type *tp, void *l)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 309, __PRETTY_FUNCTION__));
 tp -> link = l;
}

static inline const tp_op *_get_type_tpop(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 315, __PRETTY_FUNCTION__));
 return tp->type_op;
}

static inline ident *_get_type_tpop_nameid(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 321, __PRETTY_FUNCTION__));
 return _get_tpop_ident(tp->type_op);
}

static inline tp_opcode _get_type_tpop_code(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 327, __PRETTY_FUNCTION__));
 return _get_tpop_code(tp->type_op);
}

static inline ir_mode *_get_type_mode(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 333, __PRETTY_FUNCTION__));
 return tp->mode;
}

static inline unsigned _get_type_size_bytes(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 339, __PRETTY_FUNCTION__));
 return tp->size;
}

static inline ir_type_state _get_type_state(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 345, __PRETTY_FUNCTION__));
 return tp->flags & tf_layout_fixed ? layout_fixed : layout_undefined;
}

static inline ir_visited_t _get_type_visited(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 351, __PRETTY_FUNCTION__));
 return tp->visit;
}

static inline void _set_type_visited(ir_type *tp, ir_visited_t num)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 357, __PRETTY_FUNCTION__));
 tp->visit = num;
}

static inline void _mark_type_visited(ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 363, __PRETTY_FUNCTION__));
 ((tp->visit < firm_type_visited) ? (void) (0) : __assert_fail ("tp->visit < firm_type_visited", "ir/tr/type_t.h", 364, __PRETTY_FUNCTION__));
 tp->visit = firm_type_visited;
}

static inline int _type_visited(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 370, __PRETTY_FUNCTION__));
 return tp->visit >= firm_type_visited;
}

static inline int _type_not_visited(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 376, __PRETTY_FUNCTION__));
 return tp->visit < firm_type_visited;
}

static inline type_dbg_info *_get_type_dbg_info(const ir_type *tp)
{
 return tp->dbi;
}

static inline void _set_type_dbg_info(ir_type *tp, type_dbg_info *db)
{
 tp->dbi = db;
}

static inline int _is_type(const void *thing)
{
 return get_kind(thing) == k_type;
}

static inline int _is_class_type(const ir_type *clss)
{
 return clss->type_op == type_class;
}

static inline size_t _get_class_n_members(const ir_type *clss)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 402, __PRETTY_FUNCTION__));
 return (ir_verify_arr((clss->attr.ca.members)), ((ir_arr_descr *)(void *)((char *)((clss->attr.ca.members)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts);
}

static inline ir_entity *_get_class_member(const ir_type *clss, size_t pos)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 408, __PRETTY_FUNCTION__));
 ((pos < _get_class_n_members(clss)) ? (void) (0) : __assert_fail ("pos < _get_class_n_members(clss)", "ir/tr/type_t.h", 409, __PRETTY_FUNCTION__));
 return clss->attr.ca.members[pos];
}

static inline unsigned _get_class_vtable_size(const ir_type *clss)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 415, __PRETTY_FUNCTION__));
 return clss->attr.ca.vtable_size;
}

static inline void _set_class_vtable_size(ir_type *clss, unsigned vtable_size)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 421, __PRETTY_FUNCTION__));
 clss->attr.ca.vtable_size = vtable_size;
}

static inline int _is_class_final(const ir_type *clss)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 427, __PRETTY_FUNCTION__));
 return clss->attr.ca.clss_flags & cf_final_class;
}

static inline void _set_class_final(ir_type *clss, int final)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 433, __PRETTY_FUNCTION__));
 if (final)
  clss->attr.ca.clss_flags |= cf_final_class;
 else
  clss->attr.ca.clss_flags &= ~cf_final_class;
}

static inline int _is_class_interface(const ir_type *clss)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 442, __PRETTY_FUNCTION__));
 return clss->attr.ca.clss_flags & cf_interface_class;
}

static inline void _set_class_interface(ir_type *clss, int final)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 448, __PRETTY_FUNCTION__));
 if (final)
  clss->attr.ca.clss_flags |= cf_interface_class;
 else
  clss->attr.ca.clss_flags &= ~cf_interface_class;
}

static inline int _is_class_abstract(const ir_type *clss)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 457, __PRETTY_FUNCTION__));
 return clss->attr.ca.clss_flags & cf_absctract_class;
}

static inline void _set_class_abstract(ir_type *clss, int final)
{
 ((clss->type_op == type_class) ? (void) (0) : __assert_fail ("clss->type_op == type_class", "ir/tr/type_t.h", 463, __PRETTY_FUNCTION__));
 if (final)
  clss->attr.ca.clss_flags |= cf_absctract_class;
 else
  clss->attr.ca.clss_flags &= ~cf_absctract_class;
}

static inline int _is_struct_type(const ir_type *strct)
{
 return (strct->type_op == type_struct);
}

static inline int _is_method_type(const ir_type *method)
{
 return (method->type_op == type_method);
}

static inline int _is_union_type(const ir_type *uni)
{
 return (uni->type_op == type_union);
}

static inline int _is_array_type(const ir_type *array)
{
 return (array->type_op == type_array);
}

static inline int _is_enumeration_type(const ir_type *enumeration)
{
 return (enumeration->type_op == type_enumeration);
}

static inline int _is_pointer_type(const ir_type *pointer)
{
 return (pointer->type_op == type_pointer);
}


static inline int _is_primitive_type(const ir_type *primitive)
{
 ((primitive->kind == k_type) ? (void) (0) : __assert_fail ("primitive->kind == k_type", "ir/tr/type_t.h", 503, __PRETTY_FUNCTION__));
 return (primitive->type_op == type_primitive);
}

static inline int _is_atomic_type(const ir_type *tp)
{
 ((tp->kind == k_type) ? (void) (0) : __assert_fail ("tp->kind == k_type", "ir/tr/type_t.h", 509, __PRETTY_FUNCTION__));
 return (_is_primitive_type(tp) || _is_pointer_type(tp) ||
         _is_enumeration_type(tp));
}

static inline size_t _get_method_n_params(const ir_type *method)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 516, __PRETTY_FUNCTION__));
 return method->attr.ma.n_params;
}

static inline size_t _get_method_n_ress(const ir_type *method)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 522, __PRETTY_FUNCTION__));
 return method->attr.ma.n_res;
}

static inline mtp_additional_properties _get_method_additional_properties(const ir_type *method)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 528, __PRETTY_FUNCTION__));
 return method->attr.ma.properties;
}

static inline void _set_method_additional_properties(ir_type *method, mtp_additional_properties properties)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 534, __PRETTY_FUNCTION__));
 method->attr.ma.properties = properties;
}

static inline void _add_method_additional_properties(ir_type *method, mtp_additional_properties properties)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 540, __PRETTY_FUNCTION__));
 method->attr.ma.properties |= properties;
}

static inline unsigned _get_method_calling_convention(const ir_type *method)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 546, __PRETTY_FUNCTION__));
 return method->attr.ma.irg_calling_conv;
}

static inline void _set_method_calling_convention(ir_type *method, unsigned cc_mask)
{
 ((method->type_op == type_method) ? (void) (0) : __assert_fail ("method->type_op == type_method", "ir/tr/type_t.h", 552, __PRETTY_FUNCTION__));
 method->attr.ma.irg_calling_conv = cc_mask;
}

ir_type *new_type_segment(ident *name, type_flags flags);
# 60 "ir/tr/entity_t.h"
typedef struct ir_initializer_base_t {
 ir_initializer_kind_t kind;
} ir_initializer_base_t;




typedef struct ir_initializer_compound_t {
 ir_initializer_base_t base;
 size_t n_initializers;
 ir_initializer_t *initializers[1];
} ir_initializer_compound_t;




typedef struct ir_initializer_const_t {
 ir_initializer_base_t base;
 ir_node *value;
} ir_initializer_const_t ;




typedef struct ir_initializer_tarval_t {
 ir_initializer_base_t base;
 ir_tarval *value;
} ir_initializer_tarval_t ;

union ir_initializer_t {
 ir_initializer_kind_t kind;
 ir_initializer_base_t base;
 ir_initializer_compound_t compound;
 ir_initializer_const_t consti;
 ir_initializer_tarval_t tarval;
};


typedef struct method_ent_attr {
 ir_graph *irg;

 mtp_additional_properties properties;


 unsigned vtable_number;


 ptr_access_kind *param_access;
 unsigned *param_weight;

} method_ent_attr;


typedef struct code_ent_attr {
 ir_label_t label;
} code_ent_attr;

typedef struct compound_member_ent_attr {
 int offset;

 unsigned bitfield_offset;
 unsigned bitfield_size;

} compound_member_ent_attr;

typedef struct parameter_ent_attr {
 compound_member_ent_attr base;

 size_t number;
 ir_mode *doubleword_low_mode;






} parameter_ent_attr;

typedef enum ir_entity_kind {
 IR_ENTITY_NORMAL,
 IR_ENTITY_METHOD,
 IR_ENTITY_COMPOUND_MEMBER,
 IR_ENTITY_PARAMETER,
 IR_ENTITY_LABEL,
 IR_ENTITY_UNKNOWN,
} ir_entity_kind;




struct ir_entity {
 firm_kind kind;
 ident *name;
 ident *ld_name;


 ir_type *type;
 ir_type *owner;

 unsigned entity_kind:3;
 unsigned linkage:10;
 unsigned volatility:1;
 unsigned aligned:1;
 unsigned usage:4;

 unsigned compiler_gen:1;

 unsigned visibility:3;
 unsigned allocation:3;
 unsigned peculiarity:3;
 unsigned final:1;
 unsigned alignment;
 ir_visited_t visit;

 struct dbg_info *dbi;
 void *link;

 ir_entity * *overwrites;
 ir_entity * *overwrittenby;


 ir_initializer_t *initializer;

 long nr;



 union {

  method_ent_attr mtd_attr;

  code_ent_attr code_attr;

  compound_member_ent_attr compound_member;

  parameter_ent_attr parameter;
 } attr;
};


void ir_init_entity(ir_prog *irp);

void ir_finish_entity(ir_prog *irp);





ir_entity *new_label_entity(ir_label_t label);




ir_entity *new_d_label_entity(ir_label_t label, dbg_info *dbgi);

void set_entity_irg(ir_entity *ent, ir_graph *irg);


static inline int _is_entity(const void *thing)
{
 return get_kind(thing) == k_entity;
}

static inline ident *_get_entity_ident(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 225, __PRETTY_FUNCTION__));
 return ent->name;
}

static inline const char *_get_entity_name(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 231, __PRETTY_FUNCTION__));
 return get_id_str(_get_entity_ident(ent));
}

static inline void _set_entity_ident(ir_entity *ent, ident *id)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 237, __PRETTY_FUNCTION__));
 ent->name = id;
}

static inline ir_type *_get_entity_owner(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 243, __PRETTY_FUNCTION__));
 return ent->owner;
}

static inline ident *_get_entity_ld_ident(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 249, __PRETTY_FUNCTION__));
 if (ent->ld_name == ((void *)0))
  return ent->name;
 return ent->ld_name;
}

static inline void _set_entity_ld_ident(ir_entity *ent, ident *ld_ident)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 257, __PRETTY_FUNCTION__));
 ent->ld_name = ld_ident;
}

static inline const char *_get_entity_ld_name(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 263, __PRETTY_FUNCTION__));
 return get_id_str(_get_entity_ld_ident(ent));
}

static inline ir_type *_get_entity_type(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 269, __PRETTY_FUNCTION__));
 return ent->type;
}

static inline ir_linkage _get_entity_linkage(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 275, __PRETTY_FUNCTION__));
 return (ir_linkage) ent->linkage;
}

static inline ir_volatility _get_entity_volatility(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 281, __PRETTY_FUNCTION__));
 return (ir_volatility) ent->volatility;
}

static inline void _set_entity_volatility(ir_entity *ent, ir_volatility vol)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 287, __PRETTY_FUNCTION__));
 ent->volatility = vol;
}

static inline unsigned _get_entity_alignment(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 293, __PRETTY_FUNCTION__));
 return ent->alignment;
}

static inline void _set_entity_alignment(ir_entity *ent, unsigned alignment)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 299, __PRETTY_FUNCTION__));
 ent->alignment = alignment;
}

static inline ir_align _get_entity_aligned(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 305, __PRETTY_FUNCTION__));
 return (ir_align) ent->aligned;
}

static inline void _set_entity_aligned(ir_entity *ent, ir_align a)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 311, __PRETTY_FUNCTION__));
 ent->aligned = a;
}

static inline int _is_entity_compiler_generated(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 317, __PRETTY_FUNCTION__));
 return ent->compiler_gen;
}

static inline void _set_entity_compiler_generated(ir_entity *ent, int flag)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 323, __PRETTY_FUNCTION__));
 ent->compiler_gen = flag ? 1 : 0;
}

static inline ir_entity_usage _get_entity_usage(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 329, __PRETTY_FUNCTION__));
 return (ir_entity_usage) ent->usage;
}

static inline void _set_entity_usage(ir_entity *ent, ir_entity_usage state)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 335, __PRETTY_FUNCTION__));
 ent->usage = state;
}

static inline _Bool is_entity_compound_member(const ir_entity *entity)
{
 return entity->entity_kind == IR_ENTITY_COMPOUND_MEMBER
     || entity->entity_kind == IR_ENTITY_PARAMETER;
}

static inline int _get_entity_offset(const ir_entity *ent)
{
 ((ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 347 "ir/tr/entity_t.h"
 ,
 348
# 347 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                   ;
 return ent->attr.compound_member.offset;
}

static inline void _set_entity_offset(ir_entity *ent, int offset)
{
 ((ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 354 "ir/tr/entity_t.h"
 ,
 355
# 354 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                   ;
 ent->attr.compound_member.offset = offset;
}

static inline unsigned _get_entity_bitfield_offset(const ir_entity *ent)
{
 ((ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 361 "ir/tr/entity_t.h"
 ,
 362
# 361 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                   ;
 return ent->attr.compound_member.bitfield_offset;
}

static inline void _set_entity_bitfield_offset(ir_entity *ent, unsigned offset)
{
 ((ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("ent->entity_kind == IR_ENTITY_COMPOUND_MEMBER || ent->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 368 "ir/tr/entity_t.h"
 ,
 369
# 368 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                   ;
 ent->attr.compound_member.bitfield_offset = offset;
}

static inline unsigned _get_entity_bitfield_size(const ir_entity *entity)
{
 ((entity->entity_kind == IR_ENTITY_COMPOUND_MEMBER || entity->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("entity->entity_kind == IR_ENTITY_COMPOUND_MEMBER || entity->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 375 "ir/tr/entity_t.h"
 ,
 376
# 375 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                      ;
 return entity->attr.compound_member.bitfield_size;
}

static inline void _set_entity_bitfield_size(ir_entity *entity, unsigned size)
{
 ((entity->entity_kind == IR_ENTITY_COMPOUND_MEMBER || entity->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("entity->entity_kind == IR_ENTITY_COMPOUND_MEMBER || entity->entity_kind == IR_ENTITY_PARAMETER",
 "ir/tr/entity_t.h"
# 382 "ir/tr/entity_t.h"
 ,
 383
# 382 "ir/tr/entity_t.h"
 , __PRETTY_FUNCTION__))
                                                      ;
 entity->attr.compound_member.bitfield_size = size;
}

static inline void *_get_entity_link(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 389, __PRETTY_FUNCTION__));
 return ent->link;
}

static inline void _set_entity_link(ir_entity *ent, void *l)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 395, __PRETTY_FUNCTION__));
 ent->link = l;
}

static inline ir_graph *_get_entity_irg(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 401, __PRETTY_FUNCTION__));
 if (!_is_method_type(ent->type) || is_unknown_entity(ent)) {
  return ((void *)0);
 }

 return ent->attr.mtd_attr.irg;
}

static inline ir_visited_t _get_entity_visited(const ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 411, __PRETTY_FUNCTION__));
 return ent->visit;
}

static inline void _set_entity_visited(ir_entity *ent, ir_visited_t num)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 417, __PRETTY_FUNCTION__));
 ent->visit = num;
}

static inline void _mark_entity_visited(ir_entity *ent)
{
 ((ent->kind == k_entity) ? (void) (0) : __assert_fail ("ent->kind == k_entity", "ir/tr/entity_t.h", 423, __PRETTY_FUNCTION__));
 ent->visit = firm_type_visited;
}

static inline int _entity_visited(const ir_entity *ent)
{
 return _get_entity_visited(ent) >= firm_type_visited;
}

static inline int _entity_not_visited(const ir_entity *ent)
{
 return _get_entity_visited(ent) < firm_type_visited;
}

static inline int _is_parameter_entity(const ir_entity *entity)
{
 return entity->entity_kind == IR_ENTITY_PARAMETER;
}

static inline size_t _get_entity_parameter_number(const ir_entity *entity)
{
 ((entity->entity_kind == IR_ENTITY_PARAMETER) ? (void) (0) : __assert_fail ("entity->entity_kind == IR_ENTITY_PARAMETER", "ir/tr/entity_t.h", 444, __PRETTY_FUNCTION__));
 return entity->attr.parameter.number;
}

static inline dbg_info *_get_entity_dbg_info(const ir_entity *ent)
{
 return ent->dbi;
}

static inline void _set_entity_dbg_info(ir_entity *ent, dbg_info *db)
{
 ent->dbi = db;
}
# 33 "include/libfirm/irloop.h"
extern int is_backedge(const ir_node *n, int pos);

extern void set_backedge(ir_node *n, int pos);

extern void set_not_backedge(ir_node *n, int pos);

extern int has_backedges(const ir_node *n);

extern void clear_backedges(ir_node *n);


typedef union {
 firm_kind *kind;
 ir_node *node;
 ir_loop *son;
 ir_graph *irg;
} loop_element;




extern int is_ir_loop(const void *thing);


extern void set_irg_loop(ir_graph *irg, ir_loop *l);


extern ir_loop *get_irg_loop(const ir_graph *irg);


extern ir_loop *get_irn_loop(const ir_node *n);


extern ir_loop *get_loop_outer_loop(const ir_loop *loop);

extern unsigned get_loop_depth(const ir_loop *loop);


extern size_t get_loop_n_elements(const ir_loop *loop);



extern loop_element get_loop_element(const ir_loop *loop, size_t pos);




extern long get_loop_loop_nr(const ir_loop *loop);


extern void set_loop_link(ir_loop *loop, void *link);


extern void *get_loop_link(const ir_loop *loop);
# 106 "include/libfirm/irloop.h"
extern void construct_backedges(ir_graph *irg);
# 122 "include/libfirm/irloop.h"
extern void construct_cf_backedges(ir_graph *irg);






extern void assure_loopinfo(ir_graph *irg);





extern void free_loop_information(ir_graph *irg);

extern void free_all_loop_information(void);
# 146 "include/libfirm/irloop.h"
extern int is_loop_invariant(const ir_node *n, const ir_node *block);
# 70 "ir/ir/irgraph_t.h"
void firm_init_irgraph(void);







void irg_set_nloc(ir_graph *res, int n_loc);




ir_graph *new_r_ir_graph(ir_entity *ent, int n_loc);





ir_graph *new_const_code_irg(void);







ir_graph *create_irg_copy(ir_graph *irg);







static inline void set_irg_pinned(ir_graph *irg, op_pin_state p)
{
 irg->irg_pinned_state = p;
}


static inline struct obstack *get_irg_obstack(ir_graph *const irg)
{
 ((__extension__ ({ struct obstack const *__o = (&irg->obst); (unsigned) (__o->next_free - __o->object_base); }) == 0) ? (void) (0) : __assert_fail ("__extension__ ({ struct obstack const *__o = (&irg->obst); (unsigned) (__o->next_free - __o->object_base); }) == 0", "ir/ir/irgraph_t.h", 113, __PRETTY_FUNCTION__));
 return &irg->obst;
}
# 125 "ir/ir/irgraph_t.h"
int node_is_in_irgs_storage(const ir_graph *irg, const ir_node *n);





static inline int is_ir_graph_(const void *thing)
{
 return (get_kind(thing) == k_ir_graph);
}


static inline ir_node *get_irg_start_block_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_start_block);
}

static inline void set_irg_start_block_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_start_block, node);
}

static inline ir_node *get_irg_start_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_start);
}

static inline void set_irg_start_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_start, node);
}

static inline ir_node *get_irg_end_block_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_end_block);
}

static inline void set_irg_end_block_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_end_block, node);
}

static inline ir_node *get_irg_end_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_end);
}

static inline void set_irg_end_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_end, node);
}

static inline ir_node *get_irg_initial_exec_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_initial_exec);
}

static inline void set_irg_initial_exec_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_initial_exec, node);
}

static inline ir_node *get_irg_frame_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_frame);
}

static inline void set_irg_frame_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_frame, node);
}

static inline ir_node *get_irg_initial_mem_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_initial_mem);
}

static inline void set_irg_initial_mem_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_initial_mem, node);
}

static inline ir_node *get_irg_args_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_args);
}

static inline void set_irg_args_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_args, node);
}

static inline ir_node *get_irg_no_mem_(const ir_graph *irg)
{
 return get_irn_n(irg->anchor, anchor_no_mem);
}

static inline void set_irg_no_mem_(ir_graph *irg, ir_node *node)
{
 set_irn_n(irg->anchor, anchor_no_mem, node);
}

static inline ir_entity *get_irg_entity_(const ir_graph *irg)
{
 return irg->ent;
}

static inline void set_irg_entity_(ir_graph *irg, ir_entity *ent)
{
 irg->ent = ent;
}

static inline ir_type *get_irg_frame_type_(ir_graph *irg)
{
 ((irg->frame_type) ? (void) (0) : __assert_fail ("irg->frame_type", "ir/ir/irgraph_t.h", 239, __PRETTY_FUNCTION__));
 return irg->frame_type;
}

static inline void set_irg_frame_type_(ir_graph *irg, ir_type *ftp)
{
 ((is_frame_type(ftp)) ? (void) (0) : __assert_fail ("is_frame_type(ftp)", "ir/ir/irgraph_t.h", 245, __PRETTY_FUNCTION__));
 irg->frame_type = ftp;
}

static inline op_pin_state get_irg_pinned_(const ir_graph *irg)
{
 return irg->irg_pinned_state;
}

static inline irg_callee_info_state get_irg_callee_info_state_(const ir_graph *irg)
{
 return irg->callee_info_state;
}

static inline void set_irg_callee_info_state_(ir_graph *irg, irg_callee_info_state s)
{
 irg_callee_info_state irp_state = get_irp_callee_info_state();

 irg->callee_info_state = s;


 if ((irp_state == irg_callee_info_consistent) ||
     ((irp_state == irg_callee_info_inconsistent) && (s == irg_callee_info_none)))
  set_irp_callee_info_state(s);
}

static inline void set_irg_link_(ir_graph *irg, void *thing)
{
 irg->link = thing;
}

static inline void *get_irg_link_(const ir_graph *irg)
{
 return irg->link;
}

static inline ir_visited_t get_irg_visited_(const ir_graph *irg)
{
 return irg->visited;
}

static inline ir_visited_t get_irg_block_visited_(const ir_graph *irg)
{
 return irg->block_visited;
}

static inline void set_irg_block_visited_(ir_graph *irg, ir_visited_t visited)
{
 irg->block_visited = visited;
}

static inline void inc_irg_block_visited_(ir_graph *irg)
{
 ++irg->block_visited;
}

static inline void dec_irg_block_visited_(ir_graph *irg)
{
 --irg->block_visited;
}

static inline int irg_is_constrained_(const ir_graph *irg,
                                      ir_graph_constraints_t constraints)
{
 return (irg->constraints & constraints) == constraints;
}

static inline void add_irg_properties_(ir_graph *irg,
                                       ir_graph_properties_t props)
{
 irg->properties |= props;
}

static inline void clear_irg_properties_(ir_graph *irg,
                                    ir_graph_properties_t props)
{
 irg->properties &= ~props;
}

static inline int irg_has_properties_(const ir_graph *irg,
                                      ir_graph_properties_t props)
{
 return (irg->properties & props) == props;
}







static inline unsigned irg_register_node_idx(ir_graph *irg, ir_node *irn)
{
 unsigned idx = irg->last_node_idx++;
 if (idx >= (unsigned)(ir_verify_arr((irg->idx_irn_map)), ((ir_arr_descr *)(void *)((char *)((irg->idx_irn_map)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts))
  ((irg->idx_irn_map) = (ir_node * *) ir_arr_resize((void *)(irg->idx_irn_map), (idx + 1), sizeof(ir_node *)));

 irg->idx_irn_map[idx] = irn;
 return idx;
}





static inline void irg_kill_node(ir_graph *irg, ir_node *n)
{
 unsigned idx = get_irn_idx(n);
 ((idx + 1 == irg->last_node_idx) ? (void) (0) : __assert_fail ("idx + 1 == irg->last_node_idx", "ir/ir/irgraph_t.h", 353, __PRETTY_FUNCTION__));

 if (idx + 1 == irg->last_node_idx)
  --irg->last_node_idx;
 irg->idx_irn_map[idx] = ((void *)0);
 __extension__ ({ struct obstack *__o = (&irg->obst); void *__obj = (n); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
}
# 368 "ir/ir/irgraph_t.h"
static inline ir_node *get_idx_irn_(const ir_graph *irg, unsigned idx)
{
 ((idx < (unsigned) (ir_verify_arr((irg->idx_irn_map)), ((ir_arr_descr *)(void *)((char *)((irg->idx_irn_map)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)) ? (void) (0) : __assert_fail ("idx < (unsigned) (ir_verify_arr((irg->idx_irn_map)), ((ir_arr_descr *)(void *)((char *)((irg->idx_irn_map)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)", "ir/ir/irgraph_t.h", 370, __PRETTY_FUNCTION__));
 return irg->idx_irn_map[idx];
}




static inline int get_irg_n_anchors(const ir_graph *irg)
{
 return get_irn_arity(irg->anchor);
}




static inline ir_node *get_irg_anchor(const ir_graph *irg, int idx)
{
 return get_irn_n(irg->anchor, idx);
}




static inline void set_irg_anchor(ir_graph *irg, int idx, ir_node *irn)
{
 set_irn_n(irg->anchor, idx, irn);
}
# 39 "include/libfirm/irflag.h"
typedef unsigned optimization_state_t;







extern void set_optimize(int value);


extern int get_optimize(void);







extern void set_opt_constant_folding(int value);

extern int get_opt_constant_folding(void);
# 69 "include/libfirm/irflag.h"
extern void set_opt_algebraic_simplification(int value);






extern void set_opt_cse(int value);


extern int get_opt_cse(void);
# 90 "include/libfirm/irflag.h"
extern void set_opt_global_cse(int value);
# 101 "include/libfirm/irflag.h"
extern void set_opt_global_null_ptr_elimination(int value);
# 112 "include/libfirm/irflag.h"
extern void set_opt_auto_create_sync(int value);





extern void set_opt_alias_analysis(int value);







extern void set_opt_closed_world(int value);




extern void save_optimization_state(optimization_state_t *state);




extern void restore_optimization_state(const optimization_state_t *state);




extern void all_optimizations_off(void);
# 19 "ir/ir/irflag_t.h"
typedef enum {
# 20 "ir/ir/irflag_t.def"
irf_optimize = (1 << 0),


irf_cse = (1 << 1),





irf_global_cse = (1 << 2),


irf_constant_folding = (1 << 3),


irf_algebraic_simplification = (1 << 4),


irf_global_null_ptr_elimination = (1 << 5),


irf_auto_create_sync = (1 << 10),


irf_alias_analysis = (1 << 11),


irf_closed_world = (1 << 12),
# 25 "ir/ir/irflag_t.h"
 irf_last



} libfirm_opts_t;




typedef enum {
# 52 "ir/ir/irflag_t.def"
ir_rf_reassoc = (1 << 0),
# 40 "ir/ir/irflag_t.h"
 ir_rf_last



} libfirm_running_t;

extern optimization_state_t libFIRM_opt, libFIRM_running, libFIRM_verb;


void firm_init_flags(void);
# 20 "ir/ir/irflag_t.def"
static inline int get_opt_optimize(void) { return libFIRM_opt & irf_optimize; }


static inline int get_opt_cse_(void) { return libFIRM_opt & irf_cse; }





static inline int get_opt_global_cse(void) { return libFIRM_opt & irf_global_cse; }


static inline int get_opt_constant_folding_(void) { return libFIRM_opt & irf_constant_folding; }


static inline int get_opt_algebraic_simplification(void) { return libFIRM_opt & irf_algebraic_simplification; }


static inline int get_opt_global_null_ptr_elimination(void) { return libFIRM_opt & irf_global_null_ptr_elimination; }


static inline int get_opt_auto_create_sync(void) { return libFIRM_opt & irf_auto_create_sync; }


static inline int get_opt_alias_analysis(void) { return libFIRM_opt & irf_alias_analysis; }


static inline int get_opt_closed_world(void) { return libFIRM_opt & irf_closed_world; }




static inline int is_reassoc_running(void) { return libFIRM_running & ir_rf_reassoc; } static inline void set_reassoc_running(int flag) { if (flag) libFIRM_running |= ir_rf_reassoc; else libFIRM_running &= ~ir_rf_reassoc; }
# 79 "ir/ir/irflag_t.h"
static inline int get_optimize_(void)
{
 return get_opt_optimize();
}
# 94 "ir/ir/irnode_t.h"
ir_node * *get_irn_in(const ir_node *node);
# 105 "ir/ir/irnode_t.h"
static inline int is_ir_node_(const void *thing)
{
 return (get_kind(thing) == k_ir_node);
}

static inline unsigned get_irn_idx_(const ir_node *node)
{
 return node->node_idx;
}





static inline ir_op *get_irn_op_(const ir_node *node)
{
 return node->op;
}

static inline void set_irn_op_(ir_node *node, ir_op *op)
{
 node->op = op;
}



static inline void copy_node_attr_(ir_graph *irg, const ir_node *old_node,
                                   ir_node *new_node)
{
 ir_op *op = get_irn_op_(old_node);


 op->ops.copy_attr(irg, old_node, new_node);
}





static inline unsigned get_irn_opcode_(const ir_node *node)
{
 ((k_ir_node == get_kind(node)) ? (void) (0) : __assert_fail ("k_ir_node == get_kind(node)", "ir/ir/irnode_t.h", 146, __PRETTY_FUNCTION__));
 return node->op->code;
}





static inline int get_irn_arity_(const ir_node *node)
{
 return (int)((ir_verify_arr((node->in)), ((ir_arr_descr *)(void *)((char *)((node->in)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts) - 1);
}



static inline int is_Id_(const ir_node *node);




static inline ir_node *get_irn_n_(const ir_node *node, int n)
{
 ir_node *nn;

 ((-1 <= n && n < get_irn_arity_(node)) ? (void) (0) : __assert_fail ("-1 <= n && n < get_irn_arity_(node)", "ir/ir/irnode_t.h", 170, __PRETTY_FUNCTION__));

 nn = node->in[n + 1];
 if (!is_Id_(nn)) return nn;

 return (node->in[n + 1] = skip_Id(nn));
}
# 327 "ir/ir/gen_irnode.h"
static inline int is_ASM_(const ir_node *node)
{
 return get_irn_op_(node) == op_ASM;
}

static inline ir_asm_constraint* get_ASM_input_constraints_(const ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 334, __PRETTY_FUNCTION__));
 return node->attr.assem.input_constraints;
}

static inline void set_ASM_input_constraints_(ir_node *node, ir_asm_constraint* input_constraints)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 340, __PRETTY_FUNCTION__));
 node->attr.assem.input_constraints = input_constraints;

}

static inline ir_asm_constraint* get_ASM_output_constraints_(const ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 347, __PRETTY_FUNCTION__));
 return node->attr.assem.output_constraints;
}

static inline void set_ASM_output_constraints_(ir_node *node, ir_asm_constraint* output_constraints)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 353, __PRETTY_FUNCTION__));
 node->attr.assem.output_constraints = output_constraints;

}

static inline ident* * get_ASM_clobbers_(const ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 360, __PRETTY_FUNCTION__));
 return node->attr.assem.clobbers;
}

static inline void set_ASM_clobbers_(ir_node *node, ident* * clobbers)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 366, __PRETTY_FUNCTION__));
 node->attr.assem.clobbers = clobbers;

}

static inline ident* get_ASM_text_(const ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 373, __PRETTY_FUNCTION__));
 return node->attr.assem.text;
}

static inline void set_ASM_text_(ir_node *node, ident* text)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 379, __PRETTY_FUNCTION__));
 node->attr.assem.text = text;

}

static inline ir_node *get_ASM_mem_(const ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 386, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_ASM_mem);
}

static inline void set_ASM_mem_(ir_node *node, ir_node *mem)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 392, __PRETTY_FUNCTION__));
 set_irn_n(node, n_ASM_mem, mem);
}

static inline int get_ASM_n_inputs_(ir_node const *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 398, __PRETTY_FUNCTION__));
 return get_irn_arity_(node) - (n_ASM_max + 1);
}

static inline ir_node *get_ASM_input_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_ASM_n_inputs_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_ASM_n_inputs_(node)", "ir/ir/gen_irnode.h", 404, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos + (n_ASM_max + 1));
}

static inline void set_ASM_input_(ir_node *node, int pos, ir_node *input)
{
 ((0 <= pos && pos < get_ASM_n_inputs_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_ASM_n_inputs_(node)", "ir/ir/gen_irnode.h", 410, __PRETTY_FUNCTION__));
 set_irn_n(node, pos + (n_ASM_max + 1), input);
}

static inline ir_node * *get_ASM_input_arr_(ir_node *node)
{
 ((is_ASM_(node)) ? (void) (0) : __assert_fail ("is_ASM_(node)", "ir/ir/gen_irnode.h", 416, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1 + (n_ASM_max + 1);
}

static inline int is_Add_(const ir_node *node)
{
 return get_irn_op_(node) == op_Add;
}

static inline ir_node *get_Add_left_(const ir_node *node)
{
 ((is_Add_(node)) ? (void) (0) : __assert_fail ("is_Add_(node)", "ir/ir/gen_irnode.h", 427, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Add_left);
}

static inline void set_Add_left_(ir_node *node, ir_node *left)
{
 ((is_Add_(node)) ? (void) (0) : __assert_fail ("is_Add_(node)", "ir/ir/gen_irnode.h", 433, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Add_left, left);
}

static inline ir_node *get_Add_right_(const ir_node *node)
{
 ((is_Add_(node)) ? (void) (0) : __assert_fail ("is_Add_(node)", "ir/ir/gen_irnode.h", 439, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Add_right);
}

static inline void set_Add_right_(ir_node *node, ir_node *right)
{
 ((is_Add_(node)) ? (void) (0) : __assert_fail ("is_Add_(node)", "ir/ir/gen_irnode.h", 445, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Add_right, right);
}

static inline int is_Alloc_(const ir_node *node)
{
 return get_irn_op_(node) == op_Alloc;
}

static inline unsigned get_Alloc_alignment_(const ir_node *node)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 456, __PRETTY_FUNCTION__));
 return node->attr.alloc.alignment;
}

static inline void set_Alloc_alignment_(ir_node *node, unsigned alignment)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 462, __PRETTY_FUNCTION__));
 node->attr.alloc.alignment = alignment;

}

static inline ir_node *get_Alloc_mem_(const ir_node *node)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 469, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Alloc_mem);
}

static inline void set_Alloc_mem_(ir_node *node, ir_node *mem)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 475, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Alloc_mem, mem);
}

static inline ir_node *get_Alloc_size_(const ir_node *node)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 481, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Alloc_size);
}

static inline void set_Alloc_size_(ir_node *node, ir_node *size)
{
 ((is_Alloc_(node)) ? (void) (0) : __assert_fail ("is_Alloc_(node)", "ir/ir/gen_irnode.h", 487, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Alloc_size, size);
}

static inline int is_Anchor_(const ir_node *node)
{
 return get_irn_op_(node) == op_Anchor;
}

static inline int is_And_(const ir_node *node)
{
 return get_irn_op_(node) == op_And;
}

static inline ir_node *get_And_left_(const ir_node *node)
{
 ((is_And_(node)) ? (void) (0) : __assert_fail ("is_And_(node)", "ir/ir/gen_irnode.h", 503, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_And_left);
}

static inline void set_And_left_(ir_node *node, ir_node *left)
{
 ((is_And_(node)) ? (void) (0) : __assert_fail ("is_And_(node)", "ir/ir/gen_irnode.h", 509, __PRETTY_FUNCTION__));
 set_irn_n(node, n_And_left, left);
}

static inline ir_node *get_And_right_(const ir_node *node)
{
 ((is_And_(node)) ? (void) (0) : __assert_fail ("is_And_(node)", "ir/ir/gen_irnode.h", 515, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_And_right);
}

static inline void set_And_right_(ir_node *node, ir_node *right)
{
 ((is_And_(node)) ? (void) (0) : __assert_fail ("is_And_(node)", "ir/ir/gen_irnode.h", 521, __PRETTY_FUNCTION__));
 set_irn_n(node, n_And_right, right);
}

static inline int is_Bad_(const ir_node *node)
{
 return get_irn_op_(node) == op_Bad;
}

static inline int is_Block_(const ir_node *node)
{
 return get_irn_op_(node) == op_Block;
}

static inline ir_entity* get_Block_entity_(const ir_node *node)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/gen_irnode.h", 537, __PRETTY_FUNCTION__));
 return node->attr.block.entity;
}

static inline void set_Block_entity_(ir_node *node, ir_entity* entity)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/gen_irnode.h", 543, __PRETTY_FUNCTION__));
 node->attr.block.entity = entity;

}

static inline int get_Block_n_cfgpreds_(ir_node const *node)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/gen_irnode.h", 550, __PRETTY_FUNCTION__));
 return get_irn_arity_(node);
}

static inline ir_node *get_Block_cfgpred_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Block_n_cfgpreds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Block_n_cfgpreds_(node)", "ir/ir/gen_irnode.h", 556, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos);
}

static inline void set_Block_cfgpred_(ir_node *node, int pos, ir_node *cfgpred)
{
 ((0 <= pos && pos < get_Block_n_cfgpreds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Block_n_cfgpreds_(node)", "ir/ir/gen_irnode.h", 562, __PRETTY_FUNCTION__));
 set_irn_n(node, pos, cfgpred);
}

static inline ir_node * *get_Block_cfgpred_arr_(ir_node *node)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/gen_irnode.h", 568, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1;
}

static inline int is_Builtin_(const ir_node *node)
{
 return get_irn_op_(node) == op_Builtin;
}

static inline ir_builtin_kind get_Builtin_kind_(const ir_node *node)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 579, __PRETTY_FUNCTION__));
 return node->attr.builtin.kind;
}

static inline void set_Builtin_kind_(ir_node *node, ir_builtin_kind kind)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 585, __PRETTY_FUNCTION__));
 node->attr.builtin.kind = kind;

}

static inline ir_type* get_Builtin_type_(const ir_node *node)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 592, __PRETTY_FUNCTION__));
 return node->attr.builtin.type;
}

static inline void set_Builtin_type_(ir_node *node, ir_type* type)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 598, __PRETTY_FUNCTION__));
 node->attr.builtin.type = type;

}

static inline ir_node *get_Builtin_mem_(const ir_node *node)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 605, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Builtin_mem);
}

static inline void set_Builtin_mem_(ir_node *node, ir_node *mem)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 611, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Builtin_mem, mem);
}

static inline int get_Builtin_n_params_(ir_node const *node)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 617, __PRETTY_FUNCTION__));
 return get_irn_arity_(node) - (n_Builtin_max + 1);
}

static inline ir_node *get_Builtin_param_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Builtin_n_params_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Builtin_n_params_(node)", "ir/ir/gen_irnode.h", 623, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos + (n_Builtin_max + 1));
}

static inline void set_Builtin_param_(ir_node *node, int pos, ir_node *param)
{
 ((0 <= pos && pos < get_Builtin_n_params_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Builtin_n_params_(node)", "ir/ir/gen_irnode.h", 629, __PRETTY_FUNCTION__));
 set_irn_n(node, pos + (n_Builtin_max + 1), param);
}

static inline ir_node * *get_Builtin_param_arr_(ir_node *node)
{
 ((is_Builtin_(node)) ? (void) (0) : __assert_fail ("is_Builtin_(node)", "ir/ir/gen_irnode.h", 635, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1 + (n_Builtin_max + 1);
}

static inline int is_Call_(const ir_node *node)
{
 return get_irn_op_(node) == op_Call;
}

static inline ir_type* get_Call_type_(const ir_node *node)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 646, __PRETTY_FUNCTION__));
 return node->attr.call.type;
}

static inline void set_Call_type_(ir_node *node, ir_type* type)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 652, __PRETTY_FUNCTION__));
 node->attr.call.type = type;

}

static inline ir_node *get_Call_mem_(const ir_node *node)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 659, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Call_mem);
}

static inline void set_Call_mem_(ir_node *node, ir_node *mem)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 665, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Call_mem, mem);
}

static inline ir_node *get_Call_ptr_(const ir_node *node)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 671, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Call_ptr);
}

static inline void set_Call_ptr_(ir_node *node, ir_node *ptr)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 677, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Call_ptr, ptr);
}

static inline int get_Call_n_params_(ir_node const *node)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 683, __PRETTY_FUNCTION__));
 return get_irn_arity_(node) - (n_Call_max + 1);
}

static inline ir_node *get_Call_param_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Call_n_params_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Call_n_params_(node)", "ir/ir/gen_irnode.h", 689, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos + (n_Call_max + 1));
}

static inline void set_Call_param_(ir_node *node, int pos, ir_node *param)
{
 ((0 <= pos && pos < get_Call_n_params_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Call_n_params_(node)", "ir/ir/gen_irnode.h", 695, __PRETTY_FUNCTION__));
 set_irn_n(node, pos + (n_Call_max + 1), param);
}

static inline ir_node * *get_Call_param_arr_(ir_node *node)
{
 ((is_Call_(node)) ? (void) (0) : __assert_fail ("is_Call_(node)", "ir/ir/gen_irnode.h", 701, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1 + (n_Call_max + 1);
}

static inline int is_Cmp_(const ir_node *node)
{
 return get_irn_op_(node) == op_Cmp;
}

static inline ir_relation get_Cmp_relation_(const ir_node *node)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 712, __PRETTY_FUNCTION__));
 return node->attr.cmp.relation;
}

static inline void set_Cmp_relation_(ir_node *node, ir_relation relation)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 718, __PRETTY_FUNCTION__));
 node->attr.cmp.relation = relation;

}

static inline ir_node *get_Cmp_left_(const ir_node *node)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 725, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Cmp_left);
}

static inline void set_Cmp_left_(ir_node *node, ir_node *left)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 731, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Cmp_left, left);
}

static inline ir_node *get_Cmp_right_(const ir_node *node)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 737, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Cmp_right);
}

static inline void set_Cmp_right_(ir_node *node, ir_node *right)
{
 ((is_Cmp_(node)) ? (void) (0) : __assert_fail ("is_Cmp_(node)", "ir/ir/gen_irnode.h", 743, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Cmp_right, right);
}

static inline int is_Cond_(const ir_node *node)
{
 return get_irn_op_(node) == op_Cond;
}

static inline cond_jmp_predicate get_Cond_jmp_pred_(const ir_node *node)
{
 ((is_Cond_(node)) ? (void) (0) : __assert_fail ("is_Cond_(node)", "ir/ir/gen_irnode.h", 754, __PRETTY_FUNCTION__));
 return node->attr.cond.jmp_pred;
}

static inline void set_Cond_jmp_pred_(ir_node *node, cond_jmp_predicate jmp_pred)
{
 ((is_Cond_(node)) ? (void) (0) : __assert_fail ("is_Cond_(node)", "ir/ir/gen_irnode.h", 760, __PRETTY_FUNCTION__));
 node->attr.cond.jmp_pred = jmp_pred;

}

static inline ir_node *get_Cond_selector_(const ir_node *node)
{
 ((is_Cond_(node)) ? (void) (0) : __assert_fail ("is_Cond_(node)", "ir/ir/gen_irnode.h", 767, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Cond_selector);
}

static inline void set_Cond_selector_(ir_node *node, ir_node *selector)
{
 ((is_Cond_(node)) ? (void) (0) : __assert_fail ("is_Cond_(node)", "ir/ir/gen_irnode.h", 773, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Cond_selector, selector);
}

static inline int is_Confirm_(const ir_node *node)
{
 return get_irn_op_(node) == op_Confirm;
}

static inline ir_relation get_Confirm_relation_(const ir_node *node)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 784, __PRETTY_FUNCTION__));
 return node->attr.confirm.relation;
}

static inline void set_Confirm_relation_(ir_node *node, ir_relation relation)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 790, __PRETTY_FUNCTION__));
 node->attr.confirm.relation = relation;

}

static inline ir_node *get_Confirm_value_(const ir_node *node)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 797, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Confirm_value);
}

static inline void set_Confirm_value_(ir_node *node, ir_node *value)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 803, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Confirm_value, value);
}

static inline ir_node *get_Confirm_bound_(const ir_node *node)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 809, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Confirm_bound);
}

static inline void set_Confirm_bound_(ir_node *node, ir_node *bound)
{
 ((is_Confirm_(node)) ? (void) (0) : __assert_fail ("is_Confirm_(node)", "ir/ir/gen_irnode.h", 815, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Confirm_bound, bound);
}

static inline int is_Const_(const ir_node *node)
{
 return get_irn_op_(node) == op_Const;
}

static inline ir_tarval* get_Const_tarval_(const ir_node *node)
{
 ((is_Const_(node)) ? (void) (0) : __assert_fail ("is_Const_(node)", "ir/ir/gen_irnode.h", 826, __PRETTY_FUNCTION__));
 return node->attr.con.tarval;
}

static inline void set_Const_tarval_(ir_node *node, ir_tarval* tarval)
{
 ((is_Const_(node)) ? (void) (0) : __assert_fail ("is_Const_(node)", "ir/ir/gen_irnode.h", 832, __PRETTY_FUNCTION__));
 node->attr.con.tarval = tarval;

}

static inline int is_Conv_(const ir_node *node)
{
 return get_irn_op_(node) == op_Conv;
}

static inline ir_node *get_Conv_op_(const ir_node *node)
{
 ((is_Conv_(node)) ? (void) (0) : __assert_fail ("is_Conv_(node)", "ir/ir/gen_irnode.h", 844, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Conv_op);
}

static inline void set_Conv_op_(ir_node *node, ir_node *op)
{
 ((is_Conv_(node)) ? (void) (0) : __assert_fail ("is_Conv_(node)", "ir/ir/gen_irnode.h", 850, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Conv_op, op);
}

static inline int is_CopyB_(const ir_node *node)
{
 return get_irn_op_(node) == op_CopyB;
}

static inline ir_type* get_CopyB_type_(const ir_node *node)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 861, __PRETTY_FUNCTION__));
 return node->attr.copyb.type;
}

static inline void set_CopyB_type_(ir_node *node, ir_type* type)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 867, __PRETTY_FUNCTION__));
 node->attr.copyb.type = type;

}

static inline ir_node *get_CopyB_mem_(const ir_node *node)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 874, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_CopyB_mem);
}

static inline void set_CopyB_mem_(ir_node *node, ir_node *mem)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 880, __PRETTY_FUNCTION__));
 set_irn_n(node, n_CopyB_mem, mem);
}

static inline ir_node *get_CopyB_dst_(const ir_node *node)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 886, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_CopyB_dst);
}

static inline void set_CopyB_dst_(ir_node *node, ir_node *dst)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 892, __PRETTY_FUNCTION__));
 set_irn_n(node, n_CopyB_dst, dst);
}

static inline ir_node *get_CopyB_src_(const ir_node *node)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 898, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_CopyB_src);
}

static inline void set_CopyB_src_(ir_node *node, ir_node *src)
{
 ((is_CopyB_(node)) ? (void) (0) : __assert_fail ("is_CopyB_(node)", "ir/ir/gen_irnode.h", 904, __PRETTY_FUNCTION__));
 set_irn_n(node, n_CopyB_src, src);
}

static inline int is_Deleted_(const ir_node *node)
{
 return get_irn_op_(node) == op_Deleted;
}

static inline int is_Div_(const ir_node *node)
{
 return get_irn_op_(node) == op_Div;
}

static inline ir_mode* get_Div_resmode_(const ir_node *node)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 920, __PRETTY_FUNCTION__));
 return node->attr.div.resmode;
}

static inline void set_Div_resmode_(ir_node *node, ir_mode* resmode)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 926, __PRETTY_FUNCTION__));
 node->attr.div.resmode = resmode;

}

static inline int get_Div_no_remainder_(const ir_node *node)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 933, __PRETTY_FUNCTION__));
 return node->attr.div.no_remainder;
}

static inline void set_Div_no_remainder_(ir_node *node, int no_remainder)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 939, __PRETTY_FUNCTION__));
 node->attr.div.no_remainder = no_remainder;

}

static inline ir_node *get_Div_mem_(const ir_node *node)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 946, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Div_mem);
}

static inline void set_Div_mem_(ir_node *node, ir_node *mem)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 952, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Div_mem, mem);
}

static inline ir_node *get_Div_left_(const ir_node *node)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 958, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Div_left);
}

static inline void set_Div_left_(ir_node *node, ir_node *left)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 964, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Div_left, left);
}

static inline ir_node *get_Div_right_(const ir_node *node)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 970, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Div_right);
}

static inline void set_Div_right_(ir_node *node, ir_node *right)
{
 ((is_Div_(node)) ? (void) (0) : __assert_fail ("is_Div_(node)", "ir/ir/gen_irnode.h", 976, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Div_right, right);
}

static inline int is_Dummy_(const ir_node *node)
{
 return get_irn_op_(node) == op_Dummy;
}

static inline int is_End_(const ir_node *node)
{
 return get_irn_op_(node) == op_End;
}

static inline int get_End_n_keepalives_(ir_node const *node)
{
 ((is_End_(node)) ? (void) (0) : __assert_fail ("is_End_(node)", "ir/ir/gen_irnode.h", 992, __PRETTY_FUNCTION__));
 return get_irn_arity_(node);
}

static inline ir_node *get_End_keepalive_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_End_n_keepalives_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_End_n_keepalives_(node)", "ir/ir/gen_irnode.h", 998, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos);
}

static inline void set_End_keepalive_(ir_node *node, int pos, ir_node *keepalive)
{
 ((0 <= pos && pos < get_End_n_keepalives_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_End_n_keepalives_(node)", "ir/ir/gen_irnode.h", 1004, __PRETTY_FUNCTION__));
 set_irn_n(node, pos, keepalive);
}

static inline ir_node * *get_End_keepalive_arr_(ir_node *node)
{
 ((is_End_(node)) ? (void) (0) : __assert_fail ("is_End_(node)", "ir/ir/gen_irnode.h", 1010, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1;
}

static inline int is_Eor_(const ir_node *node)
{
 return get_irn_op_(node) == op_Eor;
}

static inline ir_node *get_Eor_left_(const ir_node *node)
{
 ((is_Eor_(node)) ? (void) (0) : __assert_fail ("is_Eor_(node)", "ir/ir/gen_irnode.h", 1021, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Eor_left);
}

static inline void set_Eor_left_(ir_node *node, ir_node *left)
{
 ((is_Eor_(node)) ? (void) (0) : __assert_fail ("is_Eor_(node)", "ir/ir/gen_irnode.h", 1027, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Eor_left, left);
}

static inline ir_node *get_Eor_right_(const ir_node *node)
{
 ((is_Eor_(node)) ? (void) (0) : __assert_fail ("is_Eor_(node)", "ir/ir/gen_irnode.h", 1033, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Eor_right);
}

static inline void set_Eor_right_(ir_node *node, ir_node *right)
{
 ((is_Eor_(node)) ? (void) (0) : __assert_fail ("is_Eor_(node)", "ir/ir/gen_irnode.h", 1039, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Eor_right, right);
}

static inline int is_Free_(const ir_node *node)
{
 return get_irn_op_(node) == op_Free;
}

static inline ir_node *get_Free_mem_(const ir_node *node)
{
 ((is_Free_(node)) ? (void) (0) : __assert_fail ("is_Free_(node)", "ir/ir/gen_irnode.h", 1050, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Free_mem);
}

static inline void set_Free_mem_(ir_node *node, ir_node *mem)
{
 ((is_Free_(node)) ? (void) (0) : __assert_fail ("is_Free_(node)", "ir/ir/gen_irnode.h", 1056, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Free_mem, mem);
}

static inline ir_node *get_Free_ptr_(const ir_node *node)
{
 ((is_Free_(node)) ? (void) (0) : __assert_fail ("is_Free_(node)", "ir/ir/gen_irnode.h", 1062, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Free_ptr);
}

static inline void set_Free_ptr_(ir_node *node, ir_node *ptr)
{
 ((is_Free_(node)) ? (void) (0) : __assert_fail ("is_Free_(node)", "ir/ir/gen_irnode.h", 1068, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Free_ptr, ptr);
}

static inline int is_IJmp_(const ir_node *node)
{
 return get_irn_op_(node) == op_IJmp;
}

static inline ir_node *get_IJmp_target_(const ir_node *node)
{
 ((is_IJmp_(node)) ? (void) (0) : __assert_fail ("is_IJmp_(node)", "ir/ir/gen_irnode.h", 1079, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_IJmp_target);
}

static inline void set_IJmp_target_(ir_node *node, ir_node *target)
{
 ((is_IJmp_(node)) ? (void) (0) : __assert_fail ("is_IJmp_(node)", "ir/ir/gen_irnode.h", 1085, __PRETTY_FUNCTION__));
 set_irn_n(node, n_IJmp_target, target);
}

static inline int is_Id_(const ir_node *node)
{
 return get_irn_op_(node) == op_Id;
}

static inline ir_node *get_Id_pred_(const ir_node *node)
{
 ((is_Id_(node)) ? (void) (0) : __assert_fail ("is_Id_(node)", "ir/ir/gen_irnode.h", 1096, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Id_pred);
}

static inline void set_Id_pred_(ir_node *node, ir_node *pred)
{
 ((is_Id_(node)) ? (void) (0) : __assert_fail ("is_Id_(node)", "ir/ir/gen_irnode.h", 1102, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Id_pred, pred);
}

static inline int is_Jmp_(const ir_node *node)
{
 return get_irn_op_(node) == op_Jmp;
}

static inline int is_Load_(const ir_node *node)
{
 return get_irn_op_(node) == op_Load;
}

static inline ir_mode* get_Load_mode_(const ir_node *node)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1118, __PRETTY_FUNCTION__));
 return node->attr.load.mode;
}

static inline void set_Load_mode_(ir_node *node, ir_mode* mode)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1124, __PRETTY_FUNCTION__));
 node->attr.load.mode = mode;

}

static inline ir_volatility get_Load_volatility_(const ir_node *node)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1131, __PRETTY_FUNCTION__));
 return node->attr.load.volatility;
}

static inline void set_Load_volatility_(ir_node *node, ir_volatility volatility)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1137, __PRETTY_FUNCTION__));
 node->attr.load.volatility = volatility;

}

static inline ir_align get_Load_unaligned_(const ir_node *node)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1144, __PRETTY_FUNCTION__));
 return node->attr.load.unaligned;
}

static inline void set_Load_unaligned_(ir_node *node, ir_align unaligned)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1150, __PRETTY_FUNCTION__));
 node->attr.load.unaligned = unaligned;

}

static inline ir_node *get_Load_mem_(const ir_node *node)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1157, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Load_mem);
}

static inline void set_Load_mem_(ir_node *node, ir_node *mem)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1163, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Load_mem, mem);
}

static inline ir_node *get_Load_ptr_(const ir_node *node)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1169, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Load_ptr);
}

static inline void set_Load_ptr_(ir_node *node, ir_node *ptr)
{
 ((is_Load_(node)) ? (void) (0) : __assert_fail ("is_Load_(node)", "ir/ir/gen_irnode.h", 1175, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Load_ptr, ptr);
}

static inline int is_Minus_(const ir_node *node)
{
 return get_irn_op_(node) == op_Minus;
}

static inline ir_node *get_Minus_op_(const ir_node *node)
{
 ((is_Minus_(node)) ? (void) (0) : __assert_fail ("is_Minus_(node)", "ir/ir/gen_irnode.h", 1186, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Minus_op);
}

static inline void set_Minus_op_(ir_node *node, ir_node *op)
{
 ((is_Minus_(node)) ? (void) (0) : __assert_fail ("is_Minus_(node)", "ir/ir/gen_irnode.h", 1192, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Minus_op, op);
}

static inline int is_Mod_(const ir_node *node)
{
 return get_irn_op_(node) == op_Mod;
}

static inline ir_mode* get_Mod_resmode_(const ir_node *node)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1203, __PRETTY_FUNCTION__));
 return node->attr.mod.resmode;
}

static inline void set_Mod_resmode_(ir_node *node, ir_mode* resmode)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1209, __PRETTY_FUNCTION__));
 node->attr.mod.resmode = resmode;

}

static inline ir_node *get_Mod_mem_(const ir_node *node)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1216, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mod_mem);
}

static inline void set_Mod_mem_(ir_node *node, ir_node *mem)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1222, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mod_mem, mem);
}

static inline ir_node *get_Mod_left_(const ir_node *node)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1228, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mod_left);
}

static inline void set_Mod_left_(ir_node *node, ir_node *left)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1234, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mod_left, left);
}

static inline ir_node *get_Mod_right_(const ir_node *node)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1240, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mod_right);
}

static inline void set_Mod_right_(ir_node *node, ir_node *right)
{
 ((is_Mod_(node)) ? (void) (0) : __assert_fail ("is_Mod_(node)", "ir/ir/gen_irnode.h", 1246, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mod_right, right);
}

static inline int is_Mul_(const ir_node *node)
{
 return get_irn_op_(node) == op_Mul;
}

static inline ir_node *get_Mul_left_(const ir_node *node)
{
 ((is_Mul_(node)) ? (void) (0) : __assert_fail ("is_Mul_(node)", "ir/ir/gen_irnode.h", 1257, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mul_left);
}

static inline void set_Mul_left_(ir_node *node, ir_node *left)
{
 ((is_Mul_(node)) ? (void) (0) : __assert_fail ("is_Mul_(node)", "ir/ir/gen_irnode.h", 1263, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mul_left, left);
}

static inline ir_node *get_Mul_right_(const ir_node *node)
{
 ((is_Mul_(node)) ? (void) (0) : __assert_fail ("is_Mul_(node)", "ir/ir/gen_irnode.h", 1269, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mul_right);
}

static inline void set_Mul_right_(ir_node *node, ir_node *right)
{
 ((is_Mul_(node)) ? (void) (0) : __assert_fail ("is_Mul_(node)", "ir/ir/gen_irnode.h", 1275, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mul_right, right);
}

static inline int is_Mulh_(const ir_node *node)
{
 return get_irn_op_(node) == op_Mulh;
}

static inline ir_node *get_Mulh_left_(const ir_node *node)
{
 ((is_Mulh_(node)) ? (void) (0) : __assert_fail ("is_Mulh_(node)", "ir/ir/gen_irnode.h", 1286, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mulh_left);
}

static inline void set_Mulh_left_(ir_node *node, ir_node *left)
{
 ((is_Mulh_(node)) ? (void) (0) : __assert_fail ("is_Mulh_(node)", "ir/ir/gen_irnode.h", 1292, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mulh_left, left);
}

static inline ir_node *get_Mulh_right_(const ir_node *node)
{
 ((is_Mulh_(node)) ? (void) (0) : __assert_fail ("is_Mulh_(node)", "ir/ir/gen_irnode.h", 1298, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mulh_right);
}

static inline void set_Mulh_right_(ir_node *node, ir_node *right)
{
 ((is_Mulh_(node)) ? (void) (0) : __assert_fail ("is_Mulh_(node)", "ir/ir/gen_irnode.h", 1304, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mulh_right, right);
}

static inline int is_Mux_(const ir_node *node)
{
 return get_irn_op_(node) == op_Mux;
}

static inline ir_node *get_Mux_sel_(const ir_node *node)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1315, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mux_sel);
}

static inline void set_Mux_sel_(ir_node *node, ir_node *sel)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1321, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mux_sel, sel);
}

static inline ir_node *get_Mux_false_(const ir_node *node)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1327, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mux_false);
}

static inline void set_Mux_false_(ir_node *node, ir_node *false_)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1333, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mux_false, false_);
}

static inline ir_node *get_Mux_true_(const ir_node *node)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1339, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Mux_true);
}

static inline void set_Mux_true_(ir_node *node, ir_node *true_)
{
 ((is_Mux_(node)) ? (void) (0) : __assert_fail ("is_Mux_(node)", "ir/ir/gen_irnode.h", 1345, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Mux_true, true_);
}

static inline int is_NoMem_(const ir_node *node)
{
 return get_irn_op_(node) == op_NoMem;
}

static inline int is_Not_(const ir_node *node)
{
 return get_irn_op_(node) == op_Not;
}

static inline ir_node *get_Not_op_(const ir_node *node)
{
 ((is_Not_(node)) ? (void) (0) : __assert_fail ("is_Not_(node)", "ir/ir/gen_irnode.h", 1361, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Not_op);
}

static inline void set_Not_op_(ir_node *node, ir_node *op)
{
 ((is_Not_(node)) ? (void) (0) : __assert_fail ("is_Not_(node)", "ir/ir/gen_irnode.h", 1367, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Not_op, op);
}

static inline int is_Or_(const ir_node *node)
{
 return get_irn_op_(node) == op_Or;
}

static inline ir_node *get_Or_left_(const ir_node *node)
{
 ((is_Or_(node)) ? (void) (0) : __assert_fail ("is_Or_(node)", "ir/ir/gen_irnode.h", 1378, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Or_left);
}

static inline void set_Or_left_(ir_node *node, ir_node *left)
{
 ((is_Or_(node)) ? (void) (0) : __assert_fail ("is_Or_(node)", "ir/ir/gen_irnode.h", 1384, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Or_left, left);
}

static inline ir_node *get_Or_right_(const ir_node *node)
{
 ((is_Or_(node)) ? (void) (0) : __assert_fail ("is_Or_(node)", "ir/ir/gen_irnode.h", 1390, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Or_right);
}

static inline void set_Or_right_(ir_node *node, ir_node *right)
{
 ((is_Or_(node)) ? (void) (0) : __assert_fail ("is_Or_(node)", "ir/ir/gen_irnode.h", 1396, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Or_right, right);
}

static inline int is_Phi_(const ir_node *node)
{
 return get_irn_op_(node) == op_Phi;
}

static inline int get_Phi_n_preds_(ir_node const *node)
{
 ((is_Phi_(node)) ? (void) (0) : __assert_fail ("is_Phi_(node)", "ir/ir/gen_irnode.h", 1407, __PRETTY_FUNCTION__));
 return get_irn_arity_(node);
}

static inline ir_node *get_Phi_pred_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Phi_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Phi_n_preds_(node)", "ir/ir/gen_irnode.h", 1413, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos);
}

static inline void set_Phi_pred_(ir_node *node, int pos, ir_node *pred)
{
 ((0 <= pos && pos < get_Phi_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Phi_n_preds_(node)", "ir/ir/gen_irnode.h", 1419, __PRETTY_FUNCTION__));
 set_irn_n(node, pos, pred);
}

static inline ir_node * *get_Phi_pred_arr_(ir_node *node)
{
 ((is_Phi_(node)) ? (void) (0) : __assert_fail ("is_Phi_(node)", "ir/ir/gen_irnode.h", 1425, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1;
}

static inline int is_Pin_(const ir_node *node)
{
 return get_irn_op_(node) == op_Pin;
}

static inline ir_node *get_Pin_op_(const ir_node *node)
{
 ((is_Pin_(node)) ? (void) (0) : __assert_fail ("is_Pin_(node)", "ir/ir/gen_irnode.h", 1436, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Pin_op);
}

static inline void set_Pin_op_(ir_node *node, ir_node *op)
{
 ((is_Pin_(node)) ? (void) (0) : __assert_fail ("is_Pin_(node)", "ir/ir/gen_irnode.h", 1442, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Pin_op, op);
}

static inline int is_Proj_(const ir_node *node)
{
 return get_irn_op_(node) == op_Proj;
}

static inline long get_Proj_proj_(const ir_node *node)
{
 ((is_Proj_(node)) ? (void) (0) : __assert_fail ("is_Proj_(node)", "ir/ir/gen_irnode.h", 1453, __PRETTY_FUNCTION__));
 return node->attr.proj.proj;
}

static inline void set_Proj_proj_(ir_node *node, long proj)
{
 ((is_Proj_(node)) ? (void) (0) : __assert_fail ("is_Proj_(node)", "ir/ir/gen_irnode.h", 1459, __PRETTY_FUNCTION__));
 node->attr.proj.proj = proj;

}

static inline ir_node *get_Proj_pred_(const ir_node *node)
{
 ((is_Proj_(node)) ? (void) (0) : __assert_fail ("is_Proj_(node)", "ir/ir/gen_irnode.h", 1466, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Proj_pred);
}

static inline void set_Proj_pred_(ir_node *node, ir_node *pred)
{
 ((is_Proj_(node)) ? (void) (0) : __assert_fail ("is_Proj_(node)", "ir/ir/gen_irnode.h", 1472, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Proj_pred, pred);
}

static inline int is_Raise_(const ir_node *node)
{
 return get_irn_op_(node) == op_Raise;
}

static inline ir_node *get_Raise_mem_(const ir_node *node)
{
 ((is_Raise_(node)) ? (void) (0) : __assert_fail ("is_Raise_(node)", "ir/ir/gen_irnode.h", 1483, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Raise_mem);
}

static inline void set_Raise_mem_(ir_node *node, ir_node *mem)
{
 ((is_Raise_(node)) ? (void) (0) : __assert_fail ("is_Raise_(node)", "ir/ir/gen_irnode.h", 1489, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Raise_mem, mem);
}

static inline ir_node *get_Raise_exo_ptr_(const ir_node *node)
{
 ((is_Raise_(node)) ? (void) (0) : __assert_fail ("is_Raise_(node)", "ir/ir/gen_irnode.h", 1495, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Raise_exo_ptr);
}

static inline void set_Raise_exo_ptr_(ir_node *node, ir_node *exo_ptr)
{
 ((is_Raise_(node)) ? (void) (0) : __assert_fail ("is_Raise_(node)", "ir/ir/gen_irnode.h", 1501, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Raise_exo_ptr, exo_ptr);
}

static inline int is_Return_(const ir_node *node)
{
 return get_irn_op_(node) == op_Return;
}

static inline ir_node *get_Return_mem_(const ir_node *node)
{
 ((is_Return_(node)) ? (void) (0) : __assert_fail ("is_Return_(node)", "ir/ir/gen_irnode.h", 1512, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Return_mem);
}

static inline void set_Return_mem_(ir_node *node, ir_node *mem)
{
 ((is_Return_(node)) ? (void) (0) : __assert_fail ("is_Return_(node)", "ir/ir/gen_irnode.h", 1518, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Return_mem, mem);
}

static inline int get_Return_n_ress_(ir_node const *node)
{
 ((is_Return_(node)) ? (void) (0) : __assert_fail ("is_Return_(node)", "ir/ir/gen_irnode.h", 1524, __PRETTY_FUNCTION__));
 return get_irn_arity_(node) - (n_Return_max + 1);
}

static inline ir_node *get_Return_res_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Return_n_ress_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Return_n_ress_(node)", "ir/ir/gen_irnode.h", 1530, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos + (n_Return_max + 1));
}

static inline void set_Return_res_(ir_node *node, int pos, ir_node *res)
{
 ((0 <= pos && pos < get_Return_n_ress_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Return_n_ress_(node)", "ir/ir/gen_irnode.h", 1536, __PRETTY_FUNCTION__));
 set_irn_n(node, pos + (n_Return_max + 1), res);
}

static inline ir_node * *get_Return_res_arr_(ir_node *node)
{
 ((is_Return_(node)) ? (void) (0) : __assert_fail ("is_Return_(node)", "ir/ir/gen_irnode.h", 1542, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1 + (n_Return_max + 1);
}

static inline int is_Sel_(const ir_node *node)
{
 return get_irn_op_(node) == op_Sel;
}

static inline ir_entity* get_Sel_entity_(const ir_node *node)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1553, __PRETTY_FUNCTION__));
 return node->attr.sel.entity;
}

static inline void set_Sel_entity_(ir_node *node, ir_entity* entity)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1559, __PRETTY_FUNCTION__));
 node->attr.sel.entity = entity;

}

static inline ir_node *get_Sel_mem_(const ir_node *node)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1566, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Sel_mem);
}

static inline void set_Sel_mem_(ir_node *node, ir_node *mem)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1572, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Sel_mem, mem);
}

static inline ir_node *get_Sel_ptr_(const ir_node *node)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1578, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Sel_ptr);
}

static inline void set_Sel_ptr_(ir_node *node, ir_node *ptr)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1584, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Sel_ptr, ptr);
}

static inline int get_Sel_n_indexs_(ir_node const *node)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1590, __PRETTY_FUNCTION__));
 return get_irn_arity_(node) - (n_Sel_max + 1);
}

static inline ir_node *get_Sel_index_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Sel_n_indexs_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Sel_n_indexs_(node)", "ir/ir/gen_irnode.h", 1596, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos + (n_Sel_max + 1));
}

static inline void set_Sel_index_(ir_node *node, int pos, ir_node *index)
{
 ((0 <= pos && pos < get_Sel_n_indexs_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Sel_n_indexs_(node)", "ir/ir/gen_irnode.h", 1602, __PRETTY_FUNCTION__));
 set_irn_n(node, pos + (n_Sel_max + 1), index);
}

static inline ir_node * *get_Sel_index_arr_(ir_node *node)
{
 ((is_Sel_(node)) ? (void) (0) : __assert_fail ("is_Sel_(node)", "ir/ir/gen_irnode.h", 1608, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1 + (n_Sel_max + 1);
}

static inline int is_Shl_(const ir_node *node)
{
 return get_irn_op_(node) == op_Shl;
}

static inline ir_node *get_Shl_left_(const ir_node *node)
{
 ((is_Shl_(node)) ? (void) (0) : __assert_fail ("is_Shl_(node)", "ir/ir/gen_irnode.h", 1619, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shl_left);
}

static inline void set_Shl_left_(ir_node *node, ir_node *left)
{
 ((is_Shl_(node)) ? (void) (0) : __assert_fail ("is_Shl_(node)", "ir/ir/gen_irnode.h", 1625, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shl_left, left);
}

static inline ir_node *get_Shl_right_(const ir_node *node)
{
 ((is_Shl_(node)) ? (void) (0) : __assert_fail ("is_Shl_(node)", "ir/ir/gen_irnode.h", 1631, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shl_right);
}

static inline void set_Shl_right_(ir_node *node, ir_node *right)
{
 ((is_Shl_(node)) ? (void) (0) : __assert_fail ("is_Shl_(node)", "ir/ir/gen_irnode.h", 1637, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shl_right, right);
}

static inline int is_Shr_(const ir_node *node)
{
 return get_irn_op_(node) == op_Shr;
}

static inline ir_node *get_Shr_left_(const ir_node *node)
{
 ((is_Shr_(node)) ? (void) (0) : __assert_fail ("is_Shr_(node)", "ir/ir/gen_irnode.h", 1648, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shr_left);
}

static inline void set_Shr_left_(ir_node *node, ir_node *left)
{
 ((is_Shr_(node)) ? (void) (0) : __assert_fail ("is_Shr_(node)", "ir/ir/gen_irnode.h", 1654, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shr_left, left);
}

static inline ir_node *get_Shr_right_(const ir_node *node)
{
 ((is_Shr_(node)) ? (void) (0) : __assert_fail ("is_Shr_(node)", "ir/ir/gen_irnode.h", 1660, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shr_right);
}

static inline void set_Shr_right_(ir_node *node, ir_node *right)
{
 ((is_Shr_(node)) ? (void) (0) : __assert_fail ("is_Shr_(node)", "ir/ir/gen_irnode.h", 1666, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shr_right, right);
}

static inline int is_Shrs_(const ir_node *node)
{
 return get_irn_op_(node) == op_Shrs;
}

static inline ir_node *get_Shrs_left_(const ir_node *node)
{
 ((is_Shrs_(node)) ? (void) (0) : __assert_fail ("is_Shrs_(node)", "ir/ir/gen_irnode.h", 1677, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shrs_left);
}

static inline void set_Shrs_left_(ir_node *node, ir_node *left)
{
 ((is_Shrs_(node)) ? (void) (0) : __assert_fail ("is_Shrs_(node)", "ir/ir/gen_irnode.h", 1683, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shrs_left, left);
}

static inline ir_node *get_Shrs_right_(const ir_node *node)
{
 ((is_Shrs_(node)) ? (void) (0) : __assert_fail ("is_Shrs_(node)", "ir/ir/gen_irnode.h", 1689, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Shrs_right);
}

static inline void set_Shrs_right_(ir_node *node, ir_node *right)
{
 ((is_Shrs_(node)) ? (void) (0) : __assert_fail ("is_Shrs_(node)", "ir/ir/gen_irnode.h", 1695, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Shrs_right, right);
}

static inline int is_Start_(const ir_node *node)
{
 return get_irn_op_(node) == op_Start;
}

static inline int is_Store_(const ir_node *node)
{
 return get_irn_op_(node) == op_Store;
}

static inline ir_volatility get_Store_volatility_(const ir_node *node)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1711, __PRETTY_FUNCTION__));
 return node->attr.store.volatility;
}

static inline void set_Store_volatility_(ir_node *node, ir_volatility volatility)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1717, __PRETTY_FUNCTION__));
 node->attr.store.volatility = volatility;

}

static inline ir_align get_Store_unaligned_(const ir_node *node)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1724, __PRETTY_FUNCTION__));
 return node->attr.store.unaligned;
}

static inline void set_Store_unaligned_(ir_node *node, ir_align unaligned)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1730, __PRETTY_FUNCTION__));
 node->attr.store.unaligned = unaligned;

}

static inline ir_node *get_Store_mem_(const ir_node *node)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1737, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Store_mem);
}

static inline void set_Store_mem_(ir_node *node, ir_node *mem)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1743, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Store_mem, mem);
}

static inline ir_node *get_Store_ptr_(const ir_node *node)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1749, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Store_ptr);
}

static inline void set_Store_ptr_(ir_node *node, ir_node *ptr)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1755, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Store_ptr, ptr);
}

static inline ir_node *get_Store_value_(const ir_node *node)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1761, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Store_value);
}

static inline void set_Store_value_(ir_node *node, ir_node *value)
{
 ((is_Store_(node)) ? (void) (0) : __assert_fail ("is_Store_(node)", "ir/ir/gen_irnode.h", 1767, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Store_value, value);
}

static inline int is_Sub_(const ir_node *node)
{
 return get_irn_op_(node) == op_Sub;
}

static inline ir_node *get_Sub_left_(const ir_node *node)
{
 ((is_Sub_(node)) ? (void) (0) : __assert_fail ("is_Sub_(node)", "ir/ir/gen_irnode.h", 1778, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Sub_left);
}

static inline void set_Sub_left_(ir_node *node, ir_node *left)
{
 ((is_Sub_(node)) ? (void) (0) : __assert_fail ("is_Sub_(node)", "ir/ir/gen_irnode.h", 1784, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Sub_left, left);
}

static inline ir_node *get_Sub_right_(const ir_node *node)
{
 ((is_Sub_(node)) ? (void) (0) : __assert_fail ("is_Sub_(node)", "ir/ir/gen_irnode.h", 1790, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Sub_right);
}

static inline void set_Sub_right_(ir_node *node, ir_node *right)
{
 ((is_Sub_(node)) ? (void) (0) : __assert_fail ("is_Sub_(node)", "ir/ir/gen_irnode.h", 1796, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Sub_right, right);
}

static inline int is_Switch_(const ir_node *node)
{
 return get_irn_op_(node) == op_Switch;
}

static inline unsigned get_Switch_n_outs_(const ir_node *node)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1807, __PRETTY_FUNCTION__));
 return node->attr.switcha.n_outs;
}

static inline void set_Switch_n_outs_(ir_node *node, unsigned n_outs)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1813, __PRETTY_FUNCTION__));
 node->attr.switcha.n_outs = n_outs;

}

static inline ir_switch_table* get_Switch_table_(const ir_node *node)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1820, __PRETTY_FUNCTION__));
 return node->attr.switcha.table;
}

static inline void set_Switch_table_(ir_node *node, ir_switch_table* table)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1826, __PRETTY_FUNCTION__));
 node->attr.switcha.table = table;

}

static inline ir_node *get_Switch_selector_(const ir_node *node)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1833, __PRETTY_FUNCTION__));
 return get_irn_n_(node, n_Switch_selector);
}

static inline void set_Switch_selector_(ir_node *node, ir_node *selector)
{
 ((is_Switch_(node)) ? (void) (0) : __assert_fail ("is_Switch_(node)", "ir/ir/gen_irnode.h", 1839, __PRETTY_FUNCTION__));
 set_irn_n(node, n_Switch_selector, selector);
}

static inline int is_SymConst_(const ir_node *node)
{
 return get_irn_op_(node) == op_SymConst;
}

static inline int is_Sync_(const ir_node *node)
{
 return get_irn_op_(node) == op_Sync;
}

static inline int get_Sync_n_preds_(ir_node const *node)
{
 ((is_Sync_(node)) ? (void) (0) : __assert_fail ("is_Sync_(node)", "ir/ir/gen_irnode.h", 1855, __PRETTY_FUNCTION__));
 return get_irn_arity_(node);
}

static inline ir_node *get_Sync_pred_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Sync_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Sync_n_preds_(node)", "ir/ir/gen_irnode.h", 1861, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos);
}

static inline void set_Sync_pred_(ir_node *node, int pos, ir_node *pred)
{
 ((0 <= pos && pos < get_Sync_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Sync_n_preds_(node)", "ir/ir/gen_irnode.h", 1867, __PRETTY_FUNCTION__));
 set_irn_n(node, pos, pred);
}

static inline ir_node * *get_Sync_pred_arr_(ir_node *node)
{
 ((is_Sync_(node)) ? (void) (0) : __assert_fail ("is_Sync_(node)", "ir/ir/gen_irnode.h", 1873, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1;
}

static inline int is_Tuple_(const ir_node *node)
{
 return get_irn_op_(node) == op_Tuple;
}

static inline int get_Tuple_n_preds_(ir_node const *node)
{
 ((is_Tuple_(node)) ? (void) (0) : __assert_fail ("is_Tuple_(node)", "ir/ir/gen_irnode.h", 1884, __PRETTY_FUNCTION__));
 return get_irn_arity_(node);
}

static inline ir_node *get_Tuple_pred_(ir_node const *node, int pos)
{
 ((0 <= pos && pos < get_Tuple_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Tuple_n_preds_(node)", "ir/ir/gen_irnode.h", 1890, __PRETTY_FUNCTION__));
 return get_irn_n_(node, pos);
}

static inline void set_Tuple_pred_(ir_node *node, int pos, ir_node *pred)
{
 ((0 <= pos && pos < get_Tuple_n_preds_(node)) ? (void) (0) : __assert_fail ("0 <= pos && pos < get_Tuple_n_preds_(node)", "ir/ir/gen_irnode.h", 1896, __PRETTY_FUNCTION__));
 set_irn_n(node, pos, pred);
}

static inline ir_node * *get_Tuple_pred_arr_(ir_node *node)
{
 ((is_Tuple_(node)) ? (void) (0) : __assert_fail ("is_Tuple_(node)", "ir/ir/gen_irnode.h", 1902, __PRETTY_FUNCTION__));
 return get_irn_in(node) + 1;
}

static inline int is_Unknown_(const ir_node *node)
{
 return get_irn_op_(node) == op_Unknown;
}
void ir_init_opcodes(void);
void ir_finish_opcodes(void);
# 184 "ir/ir/irnode_t.h"
static inline unsigned hash_irn(const ir_node *node)
{
 return (unsigned) get_irn_idx_(node);
}

static inline int get_irn_deps_(const ir_node *node)
{
 return node->deps ? (int)(ir_verify_arr((node->deps)), ((ir_arr_descr *)(void *)((char *)((node->deps)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts) : 0;
}

static inline ir_node *get_irn_dep_(const ir_node *node, int pos)
{
 ((pos >= 0 && pos < (int)(ir_verify_arr((node->deps)), ((ir_arr_descr *)(void *)((char *)((node->deps)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts) && "dependency index out of range") ? (void) (0) : __assert_fail ("pos >= 0 && pos < (int)(ir_verify_arr((node->deps)), ((ir_arr_descr *)(void *)((char *)((node->deps)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts) && \"dependency index out of range\"", "ir/ir/irnode_t.h", 196, __PRETTY_FUNCTION__));
 return node->deps[pos];
}


void edges_notify_edge_kind(ir_node *src, int pos, ir_node *tgt, ir_node *old_tgt, ir_edge_kind_t kind, ir_graph *irg);

static inline int get_irn_ins_or_deps_(const ir_node *irn)
{
 return get_irn_deps_(irn) + get_irn_arity_(irn);
}

static inline ir_node *get_irn_in_or_dep_(const ir_node *irn, int pos)
{
 int n_in = get_irn_arity_(irn);
 return pos < n_in ? get_irn_n_(irn, pos) : get_irn_dep_(irn, pos - n_in);
}





static inline ir_mode *get_irn_mode_(const ir_node *node)
{
 return node->mode;
}





static inline void set_irn_mode_(ir_node *node, ir_mode *mode)
{
 node->mode = mode;
}

static inline int ir_has_irg_ref(const ir_node *node)
{
 return is_Block_(node) || is_Bad_(node) || is_Anchor_(node);
}

static inline ir_node *get_nodes_block_(const ir_node *node)
{
 ((!is_Block_(node)) ? (void) (0) : __assert_fail ("!is_Block_(node)", "ir/ir/irnode_t.h", 239, __PRETTY_FUNCTION__));
 return get_irn_n_(node, -1);
}

static inline ir_graph *get_irn_irg_(const ir_node *node)
{
 if (! is_Block_(node))
  node = get_nodes_block_(node);
 ((ir_has_irg_ref(node)) ? (void) (0) : __assert_fail ("ir_has_irg_ref(node)", "ir/ir/irnode_t.h", 247, __PRETTY_FUNCTION__));
 return node->attr.irg.irg;
}





static inline ir_visited_t get_irn_visited_(const ir_node *node)
{
 return node->visited;
}





static inline void set_irn_visited_(ir_node *node, ir_visited_t visited)
{
 node->visited = visited;
}





static inline void mark_irn_visited_(ir_node *node)
{
 node->visited = get_irn_irg_(node)->visited;
}





static inline int irn_visited_(const ir_node *node)
{
 ir_graph *irg = get_irn_irg_(node);
 return node->visited >= irg->visited;
}

static inline int irn_visited_else_mark_(ir_node *node)
{
 if (irn_visited_(node))
  return 1;
 mark_irn_visited_(node);
 return 0;
}





static inline void set_irn_link_(ir_node *node, void *link)
{
 node->link = link;
}





static inline void *get_irn_link_(const ir_node *node)
{
 ((is_ir_node_(node)) ? (void) (0) : __assert_fail ("is_ir_node_(node)", "ir/ir/irnode_t.h", 311, __PRETTY_FUNCTION__));
 return node->link;
}







static inline op_pin_state get_irn_pinned_(const ir_node *node)
{
 op_pin_state state;
 ((is_ir_node_(node)) ? (void) (0) : __assert_fail ("is_ir_node_(node)", "ir/ir/irnode_t.h", 324, __PRETTY_FUNCTION__));

 state = get_op_pinned_(get_irn_op_(node));

 if (state >= op_pin_state_exc_pinned)
  return (op_pin_state)node->attr.except.pin_state;

 return state;
}

static inline int is_binop_(const ir_node *node)
{
 ((is_ir_node_(node)) ? (void) (0) : __assert_fail ("is_ir_node_(node)", "ir/ir/irnode_t.h", 336, __PRETTY_FUNCTION__));
 return (node->op->opar == oparity_binary);
}

static inline int is_SymConst_addr_ent_(const ir_node *node)
{
 return is_SymConst_(node) && get_SymConst_kind(node) == symconst_addr_ent;
}
# 353 "ir/ir/irnode_t.h"
static inline ir_node *get_Block_cfgpred_block_(const ir_node *node, int pos)
{
 ir_node *res = get_Block_cfgpred_(node, pos);
 if (is_Bad_(res)) {

  ir_graph *irg = get_irn_irg_(node);
  return new_r_Bad(irg, mode_BB);
 } else {
  return get_nodes_block_(res);
 }
}

static inline ir_visited_t get_Block_block_visited_(const ir_node *node)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/irnode_t.h", 367, __PRETTY_FUNCTION__));
 return node->attr.block.block_visited;
}

static inline void set_Block_block_visited_(ir_node *node, ir_visited_t visit)
{
 ((is_Block_(node)) ? (void) (0) : __assert_fail ("is_Block_(node)", "ir/ir/irnode_t.h", 373, __PRETTY_FUNCTION__));
 node->attr.block.block_visited = visit;
}

static inline ir_graph *get_Block_irg_(const ir_node *block)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 379, __PRETTY_FUNCTION__));
 return block->attr.irg.irg;
}

static inline void mark_Block_block_visited_(ir_node *node)
{
 ir_graph *irg = get_Block_irg_(node);
 node->attr.block.block_visited = get_irg_block_visited_(irg);
}

static inline int Block_block_visited_(const ir_node *node)
{
 ir_graph *irg = get_Block_irg_(node);
 return node->attr.block.block_visited >= get_irg_block_visited_(irg);
}

static inline int is_Const_null_(const ir_node *node)
{
 return tarval_is_null(get_Const_tarval_(node));
}

static inline int is_Const_one_(const ir_node *node)
{
 return tarval_is_one(get_Const_tarval_(node));
}

static inline int is_Const_all_one_(const ir_node *node)
{
 return tarval_is_all_one(get_Const_tarval_(node));
}

static inline int is_irn_forking_(const ir_node *node)
{
 return is_op_forking(get_irn_op_(node));
}

static inline ir_type *get_irn_type_attr_(ir_node *node)
{
 return get_irn_op_(node)->ops.get_type_attr(node);
}

static inline ir_entity *get_irn_entity_attr_(ir_node *node)
{
 return get_irn_op_(node)->ops.get_entity_attr(node);
}

static inline int is_irn_constlike_(const ir_node *node)
{
 return is_op_constlike(get_irn_op_(node));
}

static inline int is_irn_keep_(const ir_node *node)
{
 return is_op_keep(get_irn_op_(node));
}

static inline int is_irn_start_block_placed_(const ir_node *node)
{
 return is_op_start_block_placed(get_irn_op_(node));
}

static inline int is_irn_cse_neutral_(const ir_node *node)
{
 return is_op_cse_neutral(get_irn_op_(node));
}

static inline void *get_irn_generic_attr_(ir_node *node)
{
 return &node->attr;
}

static inline const void *get_irn_generic_attr_const_(const ir_node *node)
{
 return &node->attr;
}

static inline dbg_info *get_irn_dbg_info_(const ir_node *n)
{
 return n->dbi;
}

static inline void set_irn_dbg_info_(ir_node *n, dbg_info *db)
{
 n->dbi = db;
}




static inline void set_Block_phis_(ir_node *block, ir_node *phi)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 470, __PRETTY_FUNCTION__));
 ((phi == ((void *)0) || is_Phi_(phi)) ? (void) (0) : __assert_fail ("phi == ((void *)0) || is_Phi_(phi)", "ir/ir/irnode_t.h", 471, __PRETTY_FUNCTION__));
 block->attr.block.phis = phi;
}





static inline ir_node *get_Block_phis_(const ir_node *block)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 481, __PRETTY_FUNCTION__));
 return block->attr.block.phis;
}

static inline void set_Phi_next_(ir_node *phi, ir_node *next)
{
 ((is_Phi_(phi)) ? (void) (0) : __assert_fail ("is_Phi_(phi)", "ir/ir/irnode_t.h", 487, __PRETTY_FUNCTION__));
 phi->attr.phi.next = next;
}

static inline ir_node *get_Phi_next_(const ir_node *phi)
{
 ((is_Phi_(phi)) ? (void) (0) : __assert_fail ("is_Phi_(phi)", "ir/ir/irnode_t.h", 493, __PRETTY_FUNCTION__));
 return phi->attr.phi.next;
}


static inline void add_Block_phi_(ir_node *block, ir_node *phi)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 500, __PRETTY_FUNCTION__));
 set_Phi_next_(phi, get_Block_phis_(block));
 set_Block_phis_(block, phi);
}


static inline unsigned get_Block_mark_(const ir_node *block)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 508, __PRETTY_FUNCTION__));
 return block->attr.block.marked;
}


static inline void set_Block_mark_(ir_node *block, unsigned mark)
{
 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/ir/irnode_t.h", 515, __PRETTY_FUNCTION__));
 block->attr.block.marked = mark;
}


static inline int is_arg_Proj_(const ir_node *node)
{
 if (! is_Proj_(node))
  return 0;
 node = get_Proj_pred_(node);
 if (! is_Proj_(node))
  return 0;
 return pn_Start_T_args == get_Proj_proj_(node) && is_Start_(get_Proj_pred_(node));
}

static inline size_t ir_switch_table_get_n_entries_(const ir_switch_table *table)
{
 return table->n_entries;
}

static inline ir_switch_table_entry *ir_switch_table_get_entry(
  ir_switch_table *table, size_t entry)
{
 ((entry < table->n_entries) ? (void) (0) : __assert_fail ("entry < table->n_entries", "ir/ir/irnode_t.h", 538, __PRETTY_FUNCTION__));
 return &table->entries[entry];
}

static inline const ir_switch_table_entry *ir_switch_table_get_entry_const(
  const ir_switch_table *table, size_t entry)
{
 ((entry < table->n_entries) ? (void) (0) : __assert_fail ("entry < table->n_entries", "ir/ir/irnode_t.h", 545, __PRETTY_FUNCTION__));
 return &table->entries[entry];
}

void ir_register_getter_ops(void);






_Bool only_used_by_keepalive(const ir_node *node);
# 33 "include/libfirm/iredges.h"
extern const ir_edge_t *get_irn_out_edge_first_kind(const ir_node *irn,
                                                      ir_edge_kind_t kind);
# 43 "include/libfirm/iredges.h"
extern const ir_edge_t *get_irn_out_edge_first(const ir_node *irn);
# 52 "include/libfirm/iredges.h"
extern const ir_edge_t *get_block_succ_first(const ir_node *block);
# 61 "include/libfirm/iredges.h"
extern const ir_edge_t *get_irn_out_edge_next(const ir_node *irn,
                                                const ir_edge_t *last,
                                                ir_edge_kind_t kind);
# 107 "include/libfirm/iredges.h"
extern ir_node *get_edge_src_irn(const ir_edge_t *edge);






extern int get_edge_src_pos(const ir_edge_t *edge);






extern int get_irn_n_edges_kind(const ir_node *irn, ir_edge_kind_t kind);





extern int get_irn_n_edges(const ir_node *irn);
# 137 "include/libfirm/iredges.h"
extern int edges_activated_kind(const ir_graph *irg, ir_edge_kind_t kind);






extern int edges_activated(const ir_graph *irg);







extern void edges_activate_kind(ir_graph *irg, ir_edge_kind_t kind);







extern void edges_deactivate_kind(ir_graph *irg, ir_edge_kind_t kind);
# 169 "include/libfirm/iredges.h"
extern void edges_reroute_kind(ir_node *old, ir_node *nw, ir_edge_kind_t kind);







extern void edges_reroute(ir_node *old, ir_node *nw);





extern void edges_reroute_except(ir_node *old, ir_node *nw,
                                   ir_node *exception);





extern int edges_verify(ir_graph *irg);





extern int edges_verify_kind(ir_graph *irg, ir_edge_kind_t kind);




extern void edges_init_dbg(int do_dbg);
# 210 "include/libfirm/iredges.h"
extern void edges_activate(ir_graph *irg);







extern void edges_deactivate(ir_graph *irg);






extern void assure_edges(ir_graph *irg);







extern void assure_edges_kind(ir_graph *irg, ir_edge_kind_t kind);
# 244 "include/libfirm/iredges.h"
extern void irg_block_edges_walk(ir_node *block, irg_walk_func *pre,
                                   irg_walk_func *post, void *env);


extern void irg_walk_edges(ir_node *start, irg_walk_func *pre,
                             irg_walk_func *post, void *env);
# 38 "ir/ir/iredges_t.h"
struct ir_edge_t {
 ir_node *src;
 int pos;

 unsigned present : 1;

 struct list_head list;
};


static inline irn_edge_info_t *get_irn_edge_info(ir_node *node,
                                                 ir_edge_kind_t kind)
{
 return &node->edge_info[kind];
}

static inline const irn_edge_info_t *get_irn_edge_info_const(
  const ir_node *node, ir_edge_kind_t kind)
{
 return &node->edge_info[kind];
}


static inline irg_edge_info_t *get_irg_edge_info(ir_graph *irg,
                                                 ir_edge_kind_t kind)
{
 return &irg->edge_info[kind];
}


static inline const irg_edge_info_t *get_irg_edge_info_const(
  const ir_graph *irg, ir_edge_kind_t kind)
{
 return &irg->edge_info[kind];
}
# 81 "ir/ir/iredges_t.h"
static inline const ir_edge_t *get_irn_out_edge_first_kind_(const ir_node *irn, ir_edge_kind_t kind)
{
 const struct list_head *head;
 ((edges_activated_kind(get_irn_irg_(irn), kind)) ? (void) (0) : __assert_fail ("edges_activated_kind(get_irn_irg_(irn), kind)", "ir/ir/iredges_t.h", 84, __PRETTY_FUNCTION__));
 head = &get_irn_edge_info_const(irn, kind)->outs_head;
 return list_empty(head) ? ((void *)0) : ((ir_edge_t *) ((char *) (head->next) - ((char *) &(((ir_edge_t *) 0)->list) - (char *) 0)));
}







static inline const ir_edge_t *get_irn_out_edge_next_(const ir_node *irn, const ir_edge_t *last, ir_edge_kind_t kind)
{
 struct list_head *next = last->list.next;
 const struct list_head *head
  = &get_irn_edge_info_const(irn, kind)->outs_head;
 return next == head ? ((void *)0) : ((ir_edge_t *) ((char *) (next) - ((char *) &(((ir_edge_t *) 0)->list) - (char *) 0)));
}






static inline int get_irn_n_edges_kind_(const ir_node *irn, ir_edge_kind_t kind)
{
 return get_irn_edge_info_const(irn, kind)->out_count;
}

static inline int edges_activated_kind_(const ir_graph *irg, ir_edge_kind_t kind)
{
 return get_irg_edge_info_const(irg, kind)->activated;
}

static inline int edges_activated_(const ir_graph *irg)
{
 return edges_activated_kind(irg, EDGE_KIND_NORMAL)
     && edges_activated_kind(irg, EDGE_KIND_BLOCK);
}





static inline void edges_assure_kind_(ir_graph *irg, ir_edge_kind_t kind)
{
 if(!edges_activated_kind_(irg, kind))
  edges_activate_kind(irg, kind);
}

void edges_init_graph_kind(ir_graph *irg, ir_edge_kind_t kind);

void edges_node_deleted(ir_node *irn);




void edges_node_revival(ir_node *node);

void edges_invalidate_kind(ir_node *irn, ir_edge_kind_t kind);

static inline ir_node *get_edge_src_irn_(const ir_edge_t *edge)
{
 return edge->src;
}

static inline int get_edge_src_pos_(const ir_edge_t *edge)
{
 return edge->pos;
}





extern void init_edges(void);

void edges_invalidate_all(ir_node *irn);





void edges_dump_kind(ir_graph *irg, ir_edge_kind_t kind);

void edges_notify_edge(ir_node *src, int pos, ir_node *tgt, ir_node *old_tgt,
                       ir_graph *irg);
# 45 "include/libfirm/irgwalk.h"
extern void irg_walk(ir_node *node, irg_walk_func *pre, irg_walk_func *post,
                       void *env);





extern void irg_walk_core(ir_node *node, irg_walk_func *pre,
                            irg_walk_func *post, void *env);
# 67 "include/libfirm/irgwalk.h"
extern void irg_walk_graph(ir_graph *irg, irg_walk_func *pre,
                             irg_walk_func *post, void *env);
# 89 "include/libfirm/irgwalk.h"
extern void irg_walk_in_or_dep(ir_node *node, irg_walk_func *pre,
                                 irg_walk_func *post, void *env);
# 105 "include/libfirm/irgwalk.h"
extern void irg_walk_in_or_dep_graph(ir_graph *irg, irg_walk_func *pre,
                                       irg_walk_func *post, void *env);
# 119 "include/libfirm/irgwalk.h"
extern void all_irg_walk(irg_walk_func *pre, irg_walk_func *post, void *env);
# 133 "include/libfirm/irgwalk.h"
extern void irg_block_walk(ir_node *node, irg_walk_func *pre,
                             irg_walk_func *post, void *env);
# 147 "include/libfirm/irgwalk.h"
extern void irg_block_walk_graph(ir_graph *irg, irg_walk_func *pre,
                                   irg_walk_func *post, void *env);
# 160 "include/libfirm/irgwalk.h"
extern void walk_const_code(irg_walk_func *pre, irg_walk_func *post,
                              void *env);
# 179 "include/libfirm/irgwalk.h"
extern void irg_walk_blkwise_graph(ir_graph *irg, irg_walk_func *pre,
                                     irg_walk_func *post, void *env);
# 199 "include/libfirm/irgwalk.h"
extern void irg_walk_in_or_dep_blkwise_graph(ir_graph *irg,
                                               irg_walk_func *pre,
                                               irg_walk_func *post, void *env);
# 220 "include/libfirm/irgwalk.h"
extern void irg_walk_blkwise_dom_top_down(ir_graph *irg, irg_walk_func *pre,
                                            irg_walk_func *post, void *env);
# 233 "include/libfirm/irgwalk.h"
extern void irg_walk_anchors(ir_graph *irg, irg_walk_func *pre,
                               irg_walk_func *post, void *env);





extern void irg_walk_2(ir_node *node, irg_walk_func *pre, irg_walk_func *post,
                         void *env);
# 45 "include/libfirm/irdump.h"
extern void dump_ir_graph(ir_graph *graph, const char *suffix);




typedef void (*ir_prog_dump_func)(FILE *out);
# 65 "include/libfirm/irdump.h"
extern void dump_ir_prog_ext(ir_prog_dump_func func, const char *suffix);




typedef void (*ir_graph_dump_func)(FILE *out, ir_graph *graph);
# 84 "include/libfirm/irdump.h"
extern void dump_ir_graph_ext(ir_graph_dump_func func, ir_graph *graph,
                                const char *suffix);






extern void dump_all_ir_graphs(const char *suffix);




extern void ir_set_dump_path(const char *path);
# 108 "include/libfirm/irdump.h"
extern void ir_set_dump_filter(const char *name);


extern const char *ir_get_dump_filter(void);


extern int ir_should_dump(const char *name);
# 125 "include/libfirm/irdump.h"
extern void dump_ir_graph_file(FILE *out, ir_graph *graph);
# 135 "include/libfirm/irdump.h"
extern void dump_cfg(FILE *out, ir_graph *graph);






extern void dump_callgraph(FILE *out);
# 152 "include/libfirm/irdump.h"
extern void dump_typegraph(FILE *out);
# 165 "include/libfirm/irdump.h"
extern void dump_class_hierarchy(FILE *out);
# 174 "include/libfirm/irdump.h"
extern void dump_loop_tree(FILE *out, ir_graph *graph);






extern void dump_callgraph_loop_tree(FILE *out);
# 191 "include/libfirm/irdump.h"
extern void dump_types_as_text(FILE *out);
# 200 "include/libfirm/irdump.h"
extern void dump_globals_as_text(FILE *out);







extern void dump_loop(FILE *out, ir_loop *loop);



extern void dump_graph_as_text(FILE *out, const ir_graph *graph);


extern void dump_entity_to_file(FILE *out, const ir_entity *entity);


extern void dump_type_to_file(FILE *out, const ir_type *type);


typedef enum {
 dump_verbosity_onlynames = 0x00000001,

 dump_verbosity_fields = 0x00000002,
 dump_verbosity_methods = 0x00000004,
 dump_verbosity_nostatic = 0x00000040,


 dump_verbosity_typeattrs = 0x00000008,
 dump_verbosity_entattrs = 0x00000010,
 dump_verbosity_entconsts = 0x00000020,

 dump_verbosity_accessStats = 0x00000100,

 dump_verbosity_max = 0x4FF00FBE
} ir_dump_verbosity_t;



extern void ir_set_dump_verbosity(ir_dump_verbosity_t verbosity);

extern ir_dump_verbosity_t ir_get_dump_verbosity(void);






typedef enum {

 ir_dump_flag_blocks_as_subgraphs = 1U << 0,

 ir_dump_flag_with_typegraph = 1U << 2,



 ir_dump_flag_disable_edge_labels = 1U << 3,



 ir_dump_flag_consts_local = 1U << 4,

 ir_dump_flag_idx_label = 1U << 5,

 ir_dump_flag_number_label = 1U << 6,

 ir_dump_flag_keepalive_edges = 1U << 7,

 ir_dump_flag_out_edges = 1U << 8,

 ir_dump_flag_dominance = 1U << 9,


 ir_dump_flag_loops = 1U << 10,

 ir_dump_flag_back_edges = 1U << 11,

 ir_dump_flag_analysed_types = 1U << 12,

 ir_dump_flag_iredges = 1U << 13,

 ir_dump_flag_node_addresses = 1U << 14,

 ir_dump_flag_all_anchors = 1U << 15,

 ir_dump_flag_show_marks = 1U << 16,


 ir_dump_flag_no_entity_values = 1U << 20,

 ir_dump_flag_ld_names = 1U << 21,

 ir_dump_flag_entities_in_hierarchy = 1U << 22,
} ir_dump_flags_t;



extern void ir_set_dump_flags(ir_dump_flags_t flags);

extern void ir_add_dump_flags(ir_dump_flags_t flags);

extern void ir_remove_dump_flags(ir_dump_flags_t flags);

extern ir_dump_flags_t ir_get_dump_flags(void);






typedef int (*dump_node_vcgattr_func)(FILE *out, const ir_node *node, const ir_node *local);






typedef int (*dump_edge_vcgattr_func)(FILE *out, const ir_node *node, int to);





typedef void (*dump_node_edge_func)(FILE *out, const ir_node *node);


extern void set_dump_node_vcgattr_hook(dump_node_vcgattr_func hook);

extern void set_dump_edge_vcgattr_hook(dump_edge_vcgattr_func hook);





extern void set_dump_node_edge_hook(dump_node_edge_func func);





extern dump_node_edge_func get_dump_node_edge_hook(void);





extern void set_dump_block_edge_hook(dump_node_edge_func func);





extern dump_node_edge_func get_dump_block_edge_hook(void);


typedef void (dump_node_info_cb_t)(void *data, FILE *out, const ir_node *n);
# 370 "include/libfirm/irdump.h"
extern void *dump_add_node_info_callback(dump_node_info_cb_t *cb, void *data);







extern void dump_remove_node_info_callback(void *handle);
# 35 "include/libfirm/adt/unionfind.h"
static inline void uf_init(int* data, size_t n_elems)
{
 size_t i;
 for(i = 0; i < n_elems; ++i) {
  data[i] = -1;
 }
}
# 52 "include/libfirm/adt/unionfind.h"
static inline int uf_union(int* data, int set1, int set2)
{
 int d1;
 int d2;
 int newcount;

 if(set1 == set2)
  return set1;


 d1 = data[set1];
 d2 = data[set2];
 ((d1 < 0 && d2 < 0) ? (void) (0) : __assert_fail ("d1 < 0 && d2 < 0", "include/libfirm/adt/unionfind.h", 64, __PRETTY_FUNCTION__));

 newcount = d1 + d2;
 if(d1 > d2) {
  data[set1] = set2;
  data[set2] = newcount;
  return set2;
 } else {
  data[set2] = set1;
  data[set1] = newcount;
  return set1;
 }
}
# 88 "include/libfirm/adt/unionfind.h"
static inline int uf_find(int* data, int e)
{

 int repr = e;
 while(data[repr] >= 0) {
  repr = data[repr];
 }


 while(e != repr) {
  int next = data[e];
  data[e] = repr;
  e = next;
 }

 return repr;
}
# 33 "include/libfirm/adt/pdeq.h"
typedef int (*cmp_fun)(const void *elem, const void *key);




typedef struct pdeq pdeq;






extern pdeq *new_pdeq(void);
# 54 "include/libfirm/adt/pdeq.h"
extern pdeq *new_pdeq1(const void *x);






extern void del_pdeq(pdeq *dq);






extern size_t pdeq_len(pdeq *dq);
# 77 "include/libfirm/adt/pdeq.h"
extern int pdeq_empty(pdeq *dq);
# 86 "include/libfirm/adt/pdeq.h"
extern int pdeq_contains(pdeq *dq, const void *x);
# 101 "include/libfirm/adt/pdeq.h"
extern void *pdeq_search(pdeq *qp, cmp_fun cmp, const void *key);
# 113 "include/libfirm/adt/pdeq.h"
extern void * *pdeq_copyl(pdeq *qp, const void * *dst);
# 125 "include/libfirm/adt/pdeq.h"
extern void * *pdeq_copyr(pdeq *qp, const void * *dst);
# 135 "include/libfirm/adt/pdeq.h"
extern pdeq *pdeq_putl(pdeq *dq, const void *x);
# 145 "include/libfirm/adt/pdeq.h"
extern pdeq *pdeq_putr(pdeq *dq, const void *x);
# 155 "include/libfirm/adt/pdeq.h"
extern void *pdeq_getl(pdeq *dq);
# 165 "include/libfirm/adt/pdeq.h"
extern void *pdeq_getr(pdeq *dq);





typedef pdeq waitq;
# 221 "include/libfirm/adt/pdeq.h"
typedef pdeq stack;
# 45 "include/libfirm/adt/hungarian.h"
typedef enum match_type_t {
 HUNGARIAN_MATCH_NORMAL,
 HUNGARIAN_MATCH_PERFECT

} match_type_t;


typedef enum hungarian_mode_t {
 HUNGARIAN_MODE_MINIMIZE_COST,
 HUNGARIAN_MODE_MAXIMIZE_UTIL
} hungarian_mode_t;




typedef struct hungarian_problem_t hungarian_problem_t;
# 71 "include/libfirm/adt/hungarian.h"
extern hungarian_problem_t *hungarian_new(unsigned num_rows,
                                            unsigned num_cols,
                                            match_type_t match_type);




extern void hungarian_add(hungarian_problem_t *p, unsigned left,
                            unsigned right, unsigned cost);




extern void hungarian_remove(hungarian_problem_t *p, unsigned left,
                               unsigned right);







extern void hungarian_prepare_cost_matrix(hungarian_problem_t *p,
                                            hungarian_mode_t mode);




extern void hungarian_free(hungarian_problem_t *p);
# 109 "include/libfirm/adt/hungarian.h"
extern int hungarian_solve(hungarian_problem_t *p, unsigned *assignment,
                             unsigned *final_cost, unsigned cost_threshold);






extern void hungarian_print_cost_matrix(hungarian_problem_t *p,
                                          int cost_width);
# 36 "include/libfirm/statev.h"
extern void stat_ev_ctx_push_fmt(const char *key, const char *fmt, ...);

extern void stat_ev_ctx_push_str(const char *key, const char *str);

extern void stat_ev_ctx_pop(const char *key);

extern void stat_ev_dbl(const char *name, double value);

extern void stat_ev_int(const char *name, int value);

extern void stat_ev_ull(const char *name, unsigned long long value);

extern void stat_ev(const char *name);
# 61 "include/libfirm/statev.h"
extern void stat_ev_begin(const char *filename_prefix, const char *filter);




extern void stat_ev_end(void);




extern int stat_ev_enabled;
# 16 "ir/be/be_types.h"
typedef unsigned int sched_timestep_t;

typedef struct arch_register_class_t arch_register_class_t;
typedef struct arch_register_req_t arch_register_req_t;
typedef struct arch_register_t arch_register_t;
typedef struct arch_flag_t arch_flag_t;
typedef struct arch_isa_if_t arch_isa_if_t;
typedef struct arch_env_t arch_env_t;




typedef enum arch_irn_flags_t {
 arch_irn_flags_none = 0,
 arch_irn_flags_dont_spill = 1U << 0,
 arch_irn_flags_rematerializable = 1U << 1,
 arch_irn_flags_modify_flags = 1U << 2,


 arch_irn_flags_simple_jump = 1U << 3,
 arch_irn_flags_not_scheduled = 1U << 4,


 arch_irn_flags_spill = 1U << 5,
 arch_irn_flags_backend = 1U << 6,

} arch_irn_flags_t;


typedef struct be_lv_t be_lv_t;
typedef union be_lv_info_t be_lv_info_t;

typedef struct be_abi_call_flags_bits_t be_abi_call_flags_bits_t;
typedef struct be_abi_call_flags_t be_abi_call_flags_t;
typedef struct be_abi_callbacks_t be_abi_callbacks_t;
typedef struct be_abi_call_t be_abi_call_t;
typedef struct be_abi_irg_t be_abi_irg_t;
typedef struct be_stack_layout_t be_stack_layout_t;

typedef struct backend_info_t backend_info_t;
typedef struct sched_info_t sched_info_t;
typedef struct reg_out_info_t reg_out_info_t;
typedef struct be_ifg_t be_ifg_t;
typedef struct copy_opt_t copy_opt_t;

typedef struct be_main_env_t be_main_env_t;
typedef struct be_options_t be_options_t;
# 19 "ir/be/beabi.h"
struct be_abi_call_flags_t {
 _Bool try_omit_fp : 1;
 _Bool call_has_imm : 1;

};

struct be_abi_callbacks_t {





 ir_type *(*get_between_type)(ir_graph *irg);
};
# 41 "ir/be/beabi.h"
void be_abi_call_set_flags(be_abi_call_t *call, be_abi_call_flags_t flags, const be_abi_callbacks_t *cb);




void be_abi_call_set_pop(be_abi_call_t *call, int pop);





typedef enum {
 ABI_CONTEXT_CALLEE = 1 << 0,
 ABI_CONTEXT_CALLER = 1 << 1,
 ABI_CONTEXT_BOTH = ABI_CONTEXT_CALLEE | ABI_CONTEXT_CALLER
} be_abi_context_t;
# 68 "ir/be/beabi.h"
void be_abi_call_param_stack(be_abi_call_t *call, int pos, ir_mode *load_mode,
                             unsigned alignment, unsigned space_before,
                             unsigned space_after, be_abi_context_t context);
# 79 "ir/be/beabi.h"
void be_abi_call_param_reg(be_abi_call_t *call, int pos,
                           const arch_register_t *reg,
                           be_abi_context_t context);
# 90 "ir/be/beabi.h"
void be_abi_call_res_reg(be_abi_call_t *call, int pos,
                         const arch_register_t *reg,
                         be_abi_context_t context);
# 101 "ir/be/beabi.h"
be_abi_call_flags_t be_abi_call_get_flags(const be_abi_call_t *call);

void be_abi_introduce(ir_graph *irg);
# 15 "ir/be/bechordal.h"
typedef struct be_chordal_env_t be_chordal_env_t;
typedef struct be_ra_chordal_opts_t be_ra_chordal_opts_t;
typedef struct border_t border_t;

typedef struct be_ra_chordal_coloring_t {
 void (*allocate)(be_chordal_env_t *env);
} be_ra_chordal_coloring_t;

void be_register_chordal_coloring(const char *name, be_ra_chordal_coloring_t *coloring);
# 28 "ir/adt/hashset.h"
struct ir_nodeset_t {
 ir_node* *entries;
 size_t num_buckets;
 size_t enlarge_threshold;
 size_t shrink_threshold;
 size_t num_elements;
 size_t num_deleted;
 int consider_shrink;

 unsigned entries_version;




};


struct ir_nodeset_iterator_t {
 ir_node* *current_bucket;
 ir_node* *end;

 const struct ir_nodeset_t *set;
 unsigned entries_version;

};
# 34 "ir/ir/irnodeset.h"
typedef struct ir_nodeset_t ir_nodeset_t;
typedef struct ir_nodeset_iterator_t ir_nodeset_iterator_t;






void ir_nodeset_init(ir_nodeset_t *nodeset);







void ir_nodeset_init_size(ir_nodeset_t *nodeset, size_t expected_elements);







void ir_nodeset_destroy(ir_nodeset_t *nodeset);







static inline ir_nodeset_t *ir_nodeset_new(size_t expected_elements) {
 ir_nodeset_t *res = ((ir_nodeset_t*)xmalloc(sizeof(ir_nodeset_t) * (1)));
 ir_nodeset_init_size(res, expected_elements);
 return res;
}




static inline void ir_nodeset_del(ir_nodeset_t *nodeset) {
 ir_nodeset_destroy(nodeset);
 free(nodeset);
}
# 88 "ir/ir/irnodeset.h"
_Bool ir_nodeset_insert(ir_nodeset_t *nodeset, ir_node *node);
# 98 "ir/ir/irnodeset.h"
void ir_nodeset_remove(ir_nodeset_t *nodeset, const ir_node *node);







_Bool ir_nodeset_contains(const ir_nodeset_t *nodeset, const ir_node *node);







size_t ir_nodeset_size(const ir_nodeset_t *nodeset);
# 123 "ir/ir/irnodeset.h"
void ir_nodeset_iterator_init(ir_nodeset_iterator_t *iterator,
                              const ir_nodeset_t *nodeset);
# 135 "ir/ir/irnodeset.h"
ir_node *ir_nodeset_iterator_next(ir_nodeset_iterator_t *iterator);







void ir_nodeset_remove_iterator(ir_nodeset_t *nodeset,
                                const ir_nodeset_iterator_t *iterator);

static inline ir_node *ir_nodeset_first(ir_nodeset_t const *const nodeset)
{
 ir_nodeset_iterator_t iter;
 ir_nodeset_iterator_init(&iter, nodeset);
 return ir_nodeset_iterator_next(&iter);
}
# 20 "ir/be/beifg.h"
struct be_ifg_t {
 const be_chordal_env_t *env;
};

typedef struct nodes_iter_t {
 const be_chordal_env_t *env;
 struct obstack obst;
 int n;
 int curr;
 ir_node * *nodes;
} nodes_iter_t;

typedef struct neighbours_iter_t {
 const be_chordal_env_t *env;
 const ir_node *irn;
 int valid;
 ir_nodeset_t neighbours;
 ir_nodeset_iterator_t iter;
} neighbours_iter_t;

typedef struct cliques_iter_t {
 struct obstack ob;
 const be_chordal_env_t *cenv;
 ir_node * *buf;
 ir_node * *blocks;
 int n_blocks, blk;
 struct list_head *bor;
 pset *living;
} cliques_iter_t;

void be_ifg_free(be_ifg_t *ifg);
ir_node *be_ifg_neighbours_begin(const be_ifg_t *ifg, neighbours_iter_t *iter,
                                 const ir_node *irn);
ir_node *be_ifg_neighbours_next(neighbours_iter_t *iter);
void be_ifg_neighbours_break(neighbours_iter_t *iter);
nodes_iter_t be_ifg_nodes_begin(be_ifg_t const *ifg);
ir_node *be_ifg_nodes_next(nodes_iter_t *iter);
int be_ifg_cliques_begin(const be_ifg_t *ifg, cliques_iter_t *iter,
                              ir_node * *buf);
int be_ifg_cliques_next(cliques_iter_t *iter);
void be_ifg_cliques_break(cliques_iter_t *iter);
int be_ifg_degree(const be_ifg_t *ifg, const ir_node *irn);
# 76 "ir/be/beifg.h"
typedef struct {
 int n_nodes;
 int n_edges;
 int n_comps;
} be_ifg_stat_t;

void be_ifg_stat(ir_graph *irg, be_ifg_t *ifg, be_ifg_stat_t *stat);

be_ifg_t *be_create_ifg(const be_chordal_env_t *env);
# 28 "ir/be/bechordal_t.h"
struct border_t {
 struct list_head list;
 ir_node *irn;
 unsigned step;
 unsigned is_def : 1;
 unsigned is_real : 1;



};




struct be_chordal_env_t {
 struct obstack obst;
 be_ra_chordal_opts_t *opts;
 ir_graph *irg;
 const arch_register_class_t *cls;
 pmap *border_heads;
 be_ifg_t *ifg;
 bitset_t *allocatable_regs;
};

static inline struct list_head *get_block_border_head(be_chordal_env_t const *const inf, ir_node *const bl)
{
  return ((list_head*)pmap_get(inf->border_heads, bl));
}



enum {

 BE_CH_DUMP_NONE = (1 << 0),
 BE_CH_DUMP_SPILL = (1 << 1),
 BE_CH_DUMP_LIVE = (1 << 2),
 BE_CH_DUMP_COLOR = (1 << 3),
 BE_CH_DUMP_COPYMIN = (1 << 4),
 BE_CH_DUMP_SSADESTR = (1 << 5),
 BE_CH_DUMP_TREE_INTV = (1 << 6),
 BE_CH_DUMP_CONSTR = (1 << 7),
 BE_CH_DUMP_SPILLSLOTS = (1 << 8),
 BE_CH_DUMP_LOWER = (1 << 9),
 BE_CH_DUMP_SPLIT = (1 << 10),
 BE_CH_DUMP_APPEL = (1 << 11),
 BE_CH_DUMP_ALL = 2 * BE_CH_DUMP_APPEL - 1,


 BE_CH_LOWER_PERM_SWAP = 1,
 BE_CH_LOWER_PERM_COPY = 2,
};

struct be_ra_chordal_opts_t {
 unsigned dump_flags;
 int lower_perm_opt;
};

void check_for_memory_operands(ir_graph *irg);
# 26 "include/libfirm/irarch.h"
typedef enum insn_kind {
 LEA,
 SHIFT,
 SUB,
 ADD,
 ZERO,
 MUL,
 ROOT
} insn_kind;
# 45 "include/libfirm/irarch.h"
typedef int (*evaluate_costs_func)(insn_kind kind, const ir_mode *mode, ir_tarval *tv);





typedef struct ir_settings_arch_dep_t {

 unsigned also_use_subs : 1;
 unsigned maximum_shifts;
 unsigned highest_shift_amount;


 evaluate_costs_func evaluate;


 unsigned allow_mulhs : 1;
 unsigned allow_mulhu : 1;
 unsigned max_bits_for_mulh;

} ir_settings_arch_dep_t;





typedef const ir_settings_arch_dep_t *(*arch_dep_params_factory_t)(void);




typedef enum arch_dep_opts_t {
 arch_dep_none = 0,
 arch_dep_mul_to_shift = 1u << 0,
 arch_dep_div_by_const = 1u << 1,
 arch_dep_mod_by_const = 1u << 2
} arch_dep_opts_t;






extern void arch_dep_set_opts(arch_dep_opts_t opts);
# 97 "include/libfirm/irarch.h"
extern ir_node *arch_dep_replace_mul_with_shifts(ir_node *irn);
# 114 "include/libfirm/irarch.h"
extern ir_node *arch_dep_replace_div_by_const(ir_node *irn);
# 131 "include/libfirm/irarch.h"
extern ir_node *arch_dep_replace_mod_by_const(ir_node *irn);
# 48 "include/libfirm/lowering.h"
extern void lower_CopyB(ir_graph *irg, unsigned max_small_size,
                          unsigned min_large_size, int allow_misalignments);
# 61 "include/libfirm/lowering.h"
extern void lower_switch(ir_graph *irg, unsigned small_switch,
                           unsigned spare_size, ir_mode *selector_mode);
# 74 "include/libfirm/lowering.h"
extern void lower_highlevel_graph(ir_graph *irg);
# 85 "include/libfirm/lowering.h"
extern void lower_highlevel(void);




extern void lower_const_code(void);
# 100 "include/libfirm/lowering.h"
typedef int lower_mux_callback(ir_node* mux);
# 110 "include/libfirm/lowering.h"
extern void lower_mux(ir_graph *irg, lower_mux_callback *cb_func);







typedef int (i_mapper_func)(ir_node *node);



enum ikind {
 INTRINSIC_CALL = 0,
 INTRINSIC_INSTR
};




typedef struct i_call_record {
 enum ikind kind;
 ir_entity *i_ent;
 i_mapper_func *i_mapper;
} i_call_record;




typedef struct i_instr_record {
 enum ikind kind;
 ir_op *op;
 i_mapper_func *i_mapper;
} i_instr_record;




typedef union i_record {
 enum ikind kind;
 i_call_record i_call;
 i_instr_record i_instr;
} i_record;

typedef struct ir_intrinsics_map ir_intrinsics_map;
# 164 "include/libfirm/lowering.h"
extern ir_intrinsics_map *ir_create_intrinsics_map(i_record *list,
                                                     size_t length,
                                                     int part_block_used);





extern void ir_free_intrinsics_map(ir_intrinsics_map *map);







extern void ir_lower_intrinsics(ir_graph *irg, ir_intrinsics_map *map);







extern int i_mapper_abs(ir_node *call);







extern int i_mapper_bswap(ir_node *call);






extern int i_mapper_sqrt(ir_node *call);






extern int i_mapper_cbrt(ir_node *call);






extern int i_mapper_pow(ir_node *call);






extern int i_mapper_exp(ir_node *call);






extern int i_mapper_exp2(ir_node *call);






extern int i_mapper_exp10(ir_node *call);






extern int i_mapper_log(ir_node *call);






extern int i_mapper_log2(ir_node *call);






extern int i_mapper_log10(ir_node *call);






extern int i_mapper_sin(ir_node *call);






extern int i_mapper_cos(ir_node *call);






extern int i_mapper_tan(ir_node *call);






extern int i_mapper_asin(ir_node *call);






extern int i_mapper_acos(ir_node *call);






extern int i_mapper_atan(ir_node *call);






extern int i_mapper_sinh(ir_node *call);






extern int i_mapper_cosh(ir_node *call);






extern int i_mapper_tanh(ir_node *call);






extern int i_mapper_strcmp(ir_node *call);






extern int i_mapper_strncmp(ir_node *call);






extern int i_mapper_strcpy(ir_node *call);






extern int i_mapper_strlen(ir_node *call);






extern int i_mapper_memcpy(ir_node *call);






extern int i_mapper_mempcpy(ir_node *call);






extern int i_mapper_memmove(ir_node *call);






extern int i_mapper_memset(ir_node *call);






extern int i_mapper_memcmp(ir_node *call);







extern int i_mapper_alloca(ir_node *call);
# 32 "include/libfirm/iroptimize.h"
extern void optimize_cf(ir_graph *irg);






extern void opt_jumpthreading(ir_graph* irg);







extern void opt_bool(ir_graph *irg);






extern void conv_opt(ir_graph *irg);





typedef int (*check_alloc_entity_func)(ir_entity *ent);
# 69 "include/libfirm/iroptimize.h"
extern void escape_enalysis_irg(ir_graph *irg,
                                  check_alloc_entity_func callback);
# 94 "include/libfirm/iroptimize.h"
extern void escape_analysis(int run_scalar_replace,
                              check_alloc_entity_func callback);
# 119 "include/libfirm/iroptimize.h"
extern void optimize_funccalls(void);
# 130 "include/libfirm/iroptimize.h"
extern void do_gvn_pre(ir_graph *irg);
# 143 "include/libfirm/iroptimize.h"
typedef int (*arch_allow_ifconv_func)(ir_node *sel, ir_node *mux_false,
                                      ir_node *mux_true);
# 154 "include/libfirm/iroptimize.h"
extern void opt_if_conv(ir_graph *irg);






extern void opt_parallelize_mem(ir_graph *irg);
# 174 "include/libfirm/iroptimize.h"
extern ir_node *can_replace_load_by_const(const ir_node *load, ir_node *c);
# 201 "include/libfirm/iroptimize.h"
extern void optimize_load_store(ir_graph *irg);






extern void opt_ldst(ir_graph *irg);
# 219 "include/libfirm/iroptimize.h"
extern void loop_optimization(ir_graph *irg);
# 231 "include/libfirm/iroptimize.h"
extern void opt_frame_irg(ir_graph *irg);


typedef enum osr_flags {
 osr_flag_none = 0,
 osr_flag_lftr_with_ov_check = 1,

 osr_flag_ignore_x86_shift = 2,
 osr_flag_keep_reg_pressure = 4

} osr_flags;
# 304 "include/libfirm/iroptimize.h"
extern void opt_osr(ir_graph *irg, unsigned flags);
# 316 "include/libfirm/iroptimize.h"
extern void remove_phi_cycles(ir_graph *irg);
# 332 "include/libfirm/iroptimize.h"
extern void proc_cloning(float threshold);
# 348 "include/libfirm/iroptimize.h"
extern void optimize_reassociation(ir_graph *irg);
# 370 "include/libfirm/iroptimize.h"
extern void normalize_one_return(ir_graph *irg);
# 392 "include/libfirm/iroptimize.h"
extern void normalize_n_returns(ir_graph *irg);
# 401 "include/libfirm/iroptimize.h"
extern void scalar_replacement_opt(ir_graph *irg);
# 417 "include/libfirm/iroptimize.h"
extern void opt_tail_rec_irg(ir_graph *irg);
# 430 "include/libfirm/iroptimize.h"
extern void opt_tail_recursion(void);
# 441 "include/libfirm/iroptimize.h"
extern void combo(ir_graph *irg);


typedef void (*opt_ptr)(ir_graph *irg);
# 457 "include/libfirm/iroptimize.h"
extern void inline_functions(unsigned maxsize, int inline_threshold,
                               opt_ptr after_inline_opt);






extern void shape_blocks(ir_graph *irg);






extern void do_loop_inversion(ir_graph *irg);






extern void do_loop_unrolling(ir_graph *irg);




extern void do_loop_peeling(ir_graph *irg);
# 494 "include/libfirm/iroptimize.h"
extern void garbage_collect_entities(void);
# 515 "include/libfirm/iroptimize.h"
extern void dead_node_elimination(ir_graph *irg);
# 531 "include/libfirm/iroptimize.h"
extern void place_code(ir_graph *irg);






extern void fixpoint_vrp(ir_graph*);





extern void occult_consts(ir_graph*);
# 556 "include/libfirm/iroptimize.h"
extern int value_not_zero(const ir_node *n, const ir_node * *confirm);
# 571 "include/libfirm/iroptimize.h"
extern int value_not_null(const ir_node *n, const ir_node * *confirm);
# 581 "include/libfirm/iroptimize.h"
extern ir_tarval *computed_value_Cmp_Confirm(
 const ir_node *cmp, ir_node *left, ir_node *right, ir_relation relation);


typedef ident *(*compilerlib_name_mangle_t)(ident *id, ir_type *mt);







extern void set_compilerlib_name_mangle(compilerlib_name_mangle_t cb);


extern compilerlib_name_mangle_t get_compilerlib_name_mangle(void);
# 605 "include/libfirm/iroptimize.h"
extern ir_entity *create_compilerlib_entity(ident *id, ir_type *mt);
# 30 "include/libfirm/be.h"
typedef enum asm_constraint_flags_t {
 ASM_CONSTRAINT_FLAG_NONE = 0,

 ASM_CONSTRAINT_FLAG_SUPPORTS_REGISTER = 1u << 0,

 ASM_CONSTRAINT_FLAG_SUPPORTS_MEMOP = 1u << 1,

 ASM_CONSTRAINT_FLAG_SUPPORTS_IMMEDIATE = 1u << 2,

 ASM_CONSTRAINT_FLAG_NO_SUPPORT = 1u << 3,

 ASM_CONSTRAINT_FLAG_MODIFIER_WRITE = 1u << 4,

 ASM_CONSTRAINT_FLAG_MODIFIER_NO_WRITE = 1u << 5,

 ASM_CONSTRAINT_FLAG_MODIFIER_READ = 1u << 6,

 ASM_CONSTRAINT_FLAG_MODIFIER_NO_READ = 1u << 7,


 ASM_CONSTRAINT_FLAG_MODIFIER_EARLYCLOBBER = 1u << 8,

 ASM_CONSTRAINT_FLAG_MODIFIER_COMMUTATIVE = 1u << 9,

 ASM_CONSTRAINT_FLAG_INVALID = 1u << 10
} asm_constraint_flags_t;



typedef enum {
 DW_LANG_C89 = 0x0001,
 DW_LANG_C = 0x0002,
 DW_LANG_Ada83 = 0x0003,
 DW_LANG_C_plus_plus = 0x0004,
 DW_LANG_Cobol74 = 0x0005,
 DW_LANG_Cobol85 = 0x0006,
 DW_LANG_Fortran77 = 0x0007,
 DW_LANG_Fortran90 = 0x0008,
 DW_LANG_Pascal83 = 0x0009,
 DW_LANG_Modula2 = 0x000a,
 DW_LANG_Java = 0x000b,
 DW_LANG_C99 = 0x000c,
 DW_LANG_Ada95 = 0x000d,
 DW_LANG_Fortran95 = 0x000e,
 DW_LANG_PLI = 0x000f,
 DW_LANG_ObjC = 0x0010,
 DW_LANG_ObjC_plus_plus = 0x0011,
 DW_LANG_UPC = 0x0012,
 DW_LANG_D = 0x0013,
 DW_LANG_Python = 0x0014,
 DW_LANG_Go = 0x0016,
} dwarf_source_language;
# 93 "include/libfirm/be.h"
typedef ir_node *(create_trampoline_fkt)(ir_node *block, ir_node *mem, ir_node *trampoline, ir_node *env, ir_node *callee);





typedef struct backend_params {

 unsigned byte_order_big_endian:1;




 unsigned modulo_shift_efficient:1;




 unsigned non_modulo_shift_efficient:1;

 unsigned pic_supported:1;


 const ir_settings_arch_dep_t *dep_param;


 arch_allow_ifconv_func allow_ifconv;



 unsigned machine_size;





 ir_mode *mode_float_arithmetic;




 ir_type *type_long_long;




 ir_type *type_unsigned_long_long;




 ir_type *type_long_double;


 unsigned trampoline_size;


 unsigned trampoline_align;


 create_trampoline_fkt *build_trampoline;


 unsigned stack_param_align;
} backend_params;




extern int be_parse_arg(const char *arg);





extern int be_is_big_endian(void);





extern unsigned be_get_machine_size(void);







extern ir_mode *be_get_mode_float_arithmetic(void);


extern ir_type *be_get_type_long_long(void);


extern ir_type *be_get_type_unsigned_long_long(void);


extern ir_type *be_get_type_long_double(void);







extern const backend_params *be_get_backend_param(void);
# 210 "include/libfirm/be.h"
extern void be_lower_for_target(void);




extern void be_main(FILE *output, const char *compilation_unit_name);





extern asm_constraint_flags_t be_parse_asm_constraints(const char *constraints);




extern int be_is_valid_clobber(const char *clobber);




extern void be_dwarf_set_source_language(dwarf_source_language language);





extern void be_dwarf_set_compilation_directory(const char *directory);
# 23 "include/libfirm/timing.h"
typedef struct ir_timer_t ir_timer_t;
# 32 "include/libfirm/timing.h"
extern int ir_timer_enter_high_priority(void);






extern int ir_timer_leave_high_priority(void);





extern size_t ir_get_heap_used_bytes(void);






extern ir_timer_t *ir_timer_new(void);





extern void ir_timer_free(ir_timer_t *timer);





extern void ir_timer_start(ir_timer_t *timer);





extern void ir_timer_reset_and_start(ir_timer_t *timer);





extern void ir_timer_reset(ir_timer_t *timer);






extern void ir_timer_stop(ir_timer_t *timer);




extern void ir_timer_init_parent(ir_timer_t *timer);
# 97 "include/libfirm/timing.h"
extern void ir_timer_push(ir_timer_t *timer);






extern void ir_timer_pop(ir_timer_t *timer);






extern unsigned long ir_timer_elapsed_msec(const ir_timer_t *timer);






extern unsigned long ir_timer_elapsed_usec(const ir_timer_t *timer);




extern double ir_timer_elapsed_sec(const ir_timer_t *timer);
# 24 "ir/be/be_t.h"
enum {
 DUMP_NONE = 0,
 DUMP_INITIAL = 1 << 0,
 DUMP_SCHED = 1 << 2,
 DUMP_PREPARED = 1 << 3,
 DUMP_RA = 1 << 4,
 DUMP_FINAL = 1 << 5,
 DUMP_BE = 1 << 6
};

enum {
 BE_TIME_OFF,
 BE_TIME_ON
};


struct be_options_t {
 unsigned dump_flags;
 int timing;
 int opt_profile_generate;
 int opt_profile_use;
 int omit_fp;
 int pic;
 int do_verify;
 char ilp_server[128];
 char ilp_solver[128];
 int verbose_asm;
};
extern be_options_t be_options;

struct be_main_env_t {
 arch_env_t *arch_env;
 const char *cup_name;
 pmap *ent_trampoline_map;
 ir_type *pic_trampolines_type;
 pmap *ent_pic_symbol_map;
 ir_type *pic_symbols_type;
};

extern asm_constraint_flags_t asm_constraint_flags[256];

void be_get_allocatable_regs(ir_graph const *irg, arch_register_class_t const *cls, unsigned *raw_bitset);

unsigned be_get_n_allocatable_regs(const ir_graph *irg,
                                   const arch_register_class_t *cls);




void firm_be_init(void);
void firm_be_finish(void);

extern int be_timing;

typedef enum {
 T_FIRST,
 T_ABI = T_FIRST,
 T_CODEGEN,
 T_RA_PREPARATION,
 T_SCHED,
 T_CONSTR,
 T_FINISH,
 T_EMIT,
 T_VERIFY,
 T_OTHER,
 T_HEIGHTS,
 T_LIVE,
 T_EXECFREQ,
 T_SSA_CONSTR,
 T_RA_EPILOG,
 T_RA_CONSTR,
 T_RA_SPILL,
 T_RA_SPILL_APPLY,
 T_RA_COLOR,
 T_RA_IFG,
 T_RA_COPYMIN,
 T_RA_SSA,
 T_RA_OTHER,
 T_LAST = T_RA_OTHER
} be_timer_id_t;

extern ir_timer_t *be_timers[T_LAST+1];

static inline void be_timer_push(be_timer_id_t id)
{
 ((id <= T_LAST) ? (void) (0) : __assert_fail ("id <= T_LAST", "ir/be/be_t.h", 109, __PRETTY_FUNCTION__));
 if (!be_timing)
  return;
 ir_timer_push(be_timers[id]);
}

static inline void be_timer_pop(be_timer_id_t id)
{
 ((id <= T_LAST) ? (void) (0) : __assert_fail ("id <= T_LAST", "ir/be/be_t.h", 117, __PRETTY_FUNCTION__));
 if (!be_timing)
  return;
 ir_timer_pop(be_timers[id]);
}
# 130 "ir/be/be_t.h"
static inline void be_dump(int mask, ir_graph *irg, const char *suffix)
{
 if (be_options.dump_flags & mask)
  dump_ir_graph(irg, suffix);
}
# 20 "ir/be/beirg.h"
void be_assure_live_sets(ir_graph *irg);
void be_assure_live_chk(ir_graph *irg);




void be_invalidate_live_sets(ir_graph *irg);




void be_invalidate_live_chk(ir_graph *irg);





void be_free_birg(ir_graph *irg);
# 51 "ir/be/beirg.h"
struct be_stack_layout_t {
 ir_type *arg_type;
 ir_type *between_type;
 ir_type *frame_type;

 ir_type *order[3];

 int initial_offset;
 int initial_bias;
 _Bool sp_relative : 1;

};





typedef struct be_irg_t {
 be_main_env_t *main_env;
 be_lv_t *lv;
 be_stack_layout_t stack_layout;
 unsigned *allocatable_regs;

 arch_register_req_t const *sp_req;

 struct obstack obst;



 void *isa_link;
} be_irg_t;

static inline be_irg_t *be_birg_from_irg(const ir_graph *irg)
{
 return (be_irg_t*) irg->be_data;
}

static inline be_main_env_t *be_get_irg_main_env(const ir_graph *irg)
{
 return be_birg_from_irg(irg)->main_env;
}

static inline be_lv_t *be_get_irg_liveness(const ir_graph *irg)
{
 return be_birg_from_irg(irg)->lv;
}

static inline const arch_env_t *be_get_irg_arch_env(const ir_graph *irg)
{
 return be_birg_from_irg(irg)->main_env->arch_env;
}

static inline struct obstack *be_get_be_obst(const ir_graph *irg)
{
 be_irg_t *const birg = be_birg_from_irg(irg);
 struct obstack *const obst = &birg->obst;
 ((__extension__ ({ struct obstack const *__o = (obst); (unsigned) (__o->next_free - __o->object_base); }) == 0) ? (void) (0) : __assert_fail ("__extension__ ({ struct obstack const *__o = (obst); (unsigned) (__o->next_free - __o->object_base); }) == 0", "ir/be/beirg.h", 107, __PRETTY_FUNCTION__));
 return obst;
}

static inline be_stack_layout_t *be_get_irg_stack_layout(const ir_graph *irg)
{
 return &be_birg_from_irg(irg)->stack_layout;
}
# 18 "ir/ir/irnodehashmap.h"
typedef struct ir_nodehashmap_entry_t {
 ir_node *node;
 void *data;
} ir_nodehashmap_entry_t;
# 28 "ir/adt/hashset.h"
struct ir_nodehashmap_t {
 ir_nodehashmap_entry_t *entries;
 size_t num_buckets;
 size_t enlarge_threshold;
 size_t shrink_threshold;
 size_t num_elements;
 size_t num_deleted;
 int consider_shrink;

 unsigned entries_version;




};


struct ir_nodehashmap_iterator_t {
 ir_nodehashmap_entry_t *current_bucket;
 ir_nodehashmap_entry_t *end;

 const struct ir_nodehashmap_t *set;
 unsigned entries_version;

};
# 33 "ir/ir/irnodehashmap.h"
typedef struct ir_nodehashmap_t ir_nodehashmap_t;
typedef struct ir_nodehashmap_iterator_t ir_nodehashmap_iterator_t;






void ir_nodehashmap_init(ir_nodehashmap_t *nodehashmap);
# 50 "ir/ir/irnodehashmap.h"
void ir_nodehashmap_init_size(ir_nodehashmap_t *nodehashmap,
                              size_t expected_elements);







void ir_nodehashmap_destroy(ir_nodehashmap_t *nodehashmap);
# 68 "ir/ir/irnodehashmap.h"
void ir_nodehashmap_insert(ir_nodehashmap_t *nodehashmap, ir_node *node,
                           void *data);
# 78 "ir/ir/irnodehashmap.h"
void ir_nodehashmap_remove(ir_nodehashmap_t *nodehashmap, const ir_node *node);
# 87 "ir/ir/irnodehashmap.h"
void *ir_nodehashmap_get(const ir_nodehashmap_t *nodehashmap,
                         const ir_node *node);
# 98 "ir/ir/irnodehashmap.h"
size_t ir_nodehashmap_size(const ir_nodehashmap_t *nodehashmap);
# 107 "ir/ir/irnodehashmap.h"
void ir_nodehashmap_iterator_init(ir_nodehashmap_iterator_t *iterator,
                                  const ir_nodehashmap_t *nodehashmap);
# 119 "ir/ir/irnodehashmap.h"
ir_nodehashmap_entry_t ir_nodehashmap_iterator_next(
  ir_nodehashmap_iterator_t *iterator);







void ir_nodehashmap_remove_iterator(ir_nodehashmap_t *nodehashmap,
                                    const ir_nodehashmap_iterator_t *iterator);
# 20 "ir/ir/irhooks.h"
typedef enum {
 HOOK_OPT_DEAD_BLOCK,
 HOOK_OPT_STG,
 HOOK_OPT_IFSIM,
 HOOK_OPT_CONST_EVAL,
 HOOK_OPT_ALGSIM,
 HOOK_OPT_PHI,
 HOOK_OPT_SYNC,
 HOOK_OPT_WAW,
 HOOK_OPT_WAR,
 HOOK_OPT_RAW,
 HOOK_OPT_RAR,
 HOOK_OPT_RC,
 HOOK_OPT_TUPLE,
 HOOK_OPT_ID,
 HOOK_OPT_CSE,
 HOOK_OPT_STRENGTH_RED,
 HOOK_OPT_ARCH_DEP,
 HOOK_OPT_REASSOC,
 HOOK_OPT_POLY_CALL,
 HOOK_OPT_IF_CONV,
 HOOK_OPT_FUNC_CALL,
 HOOK_OPT_CONFIRM,
 HOOK_OPT_CONFIRM_C,
 HOOK_OPT_CONFIRM_E,
 HOOK_OPT_EXC_REM,
 HOOK_OPT_NORMALIZE,
 HOOK_LOWERED,
 HOOK_BACKEND,
 HOOK_OPT_LAST
} hook_opt_kind;


typedef enum if_result_t {
 IF_RESULT_SUCCESS = 0,
 IF_RESULT_SIDE_EFFECT = 1,
 IF_RESULT_SIDE_EFFECT_PHI = 2,
 IF_RESULT_TOO_DEEP = 3,
 IF_RESULT_BAD_CF = 4,
 IF_RESULT_DENIED = 5,
 IF_RESULT_LAST
} if_result_t;




typedef void (generic_func)(void);




typedef struct hook_entry {

 union {

  void (*_hook_new_ir_op)(void *context, ir_op *op);


  void (*_hook_free_ir_op)(void *context, ir_op *op);


  void (*_hook_new_node)(void *context, ir_graph *graph, ir_node *node);


  void (*_hook_set_irn_n)(void *context, ir_node *src,
                          int pos, ir_node *tgt, ir_node *old_tgt);


  void (*_hook_replace)(void *context, ir_node *old_node, ir_node *new_node);


  void (*_hook_turn_into_id)(void *context, ir_node *node);


  void (*_hook_normalize)(void *context, ir_node *node);



  void (*_hook_new_graph)(void *context, ir_graph *irg, ir_entity *ent);


  void (*_hook_free_graph)(void *context, ir_graph *irg);


  void (*_hook_irg_walk)(void *context, ir_graph *irg, generic_func *pre, generic_func *post);


  void (*_hook_irg_walk_blkwise)(void *context, ir_graph *irg, generic_func *pre, generic_func *post);


  void (*_hook_irg_block_walk)(void *context, ir_graph *irg, ir_node *node, generic_func *pre, generic_func *post);


  void (*_hook_merge_nodes)(void *context, ir_node * *new_node_array, int new_num_entries,
                            ir_node * *old_node_array, int old_num_entries, hook_opt_kind opt);


  void (*_hook_reassociate)(void *context, int start);


  void (*_hook_lower)(void *context, ir_node *node);


  void (*_hook_inline)(void *context, ir_node *call, ir_graph *irg);


  void (*_hook_tail_rec)(void *context, ir_graph *irg, int n_calls);


  void (*_hook_strength_red)(void *context, ir_graph *irg, ir_node *node);


  void (*_hook_dead_node_elim)(void *context, ir_graph *irg, int start);


  void (*_hook_if_conversion)(void *context, ir_graph *irg, ir_node *phi, int pos, ir_node *mux, if_result_t reason);


  void (*_hook_func_call)(void *context, ir_graph *irg, ir_node *call);


  void (*_hook_arch_dep_replace_mul_with_shifts)(void *context, ir_node *irn);


  void (*_hook_arch_dep_replace_division_by_const)(void *context, ir_node *irn);


  void (*_hook_new_mode)(void *context, ir_mode *mode);


  void (*_hook_new_entity)(void *context, ir_entity *ent);


  void (*_hook_new_type)(void *context, ir_type *tp);


  void (*_hook_node_info)(void *context, FILE *f, const ir_node *n);
 } hook;


 void *context;


 struct hook_entry *next;
} hook_entry_t;




typedef enum {
 hook_new_ir_op,
 hook_free_ir_op,
 hook_new_node,
 hook_set_irn_n,
 hook_replace,
 hook_turn_into_id,
 hook_normalize,
 hook_new_graph,
 hook_free_graph,
 hook_irg_walk,
 hook_irg_walk_blkwise,
 hook_irg_block_walk,
 hook_merge_nodes,
 hook_reassociate,
 hook_lower,
 hook_inline,
 hook_tail_rec,
 hook_strength_red,
 hook_dead_node_elim,
 hook_if_conversion,
 hook_func_call,

 hook_arch_dep_replace_mul_with_shifts,

 hook_arch_dep_replace_division_by_const,
 hook_new_mode,
 hook_new_entity,
 hook_new_type,
 hook_node_info,
 hook_last
} hook_type_t;







void register_hook(hook_type_t hook, hook_entry_t *entry);







void unregister_hook(hook_type_t hook, hook_entry_t *entry);


extern hook_entry_t *hooks[hook_last];
# 23 "ir/ana/irlivechk.h"
typedef enum {
 lv_chk_state_in = 1,
 lv_chk_state_end = 2,
 lv_chk_state_out = 4,
 lv_chk_state_through = lv_chk_state_in | lv_chk_state_out | lv_chk_state_end,
} lv_chk_state_t;

typedef struct lv_chk_t lv_chk_t;







static inline _Bool is_liveness_node(const ir_node *irn)
{
 switch (get_irn_opcode_(irn)) {
 case iro_Block:
 case iro_Bad:
 case iro_End:
 case iro_Anchor:
 case iro_NoMem:
  return 0;
 default:
  return 1;
 }
}






extern lv_chk_t *lv_chk_new(ir_graph *irg);





extern void lv_chk_free(lv_chk_t *lv);
# 73 "ir/ana/irlivechk.h"
extern unsigned lv_chk_bl_xxx(lv_chk_t *lv, const ir_node *bl, const ir_node *irn);
# 18 "ir/be/belive.h"
typedef enum {
 be_lv_state_none = 0,
 be_lv_state_in = 1,
 be_lv_state_end = 2,
 be_lv_state_out = 4,
} be_lv_state_t;






be_lv_t *be_liveness_new(ir_graph *irg);




void be_liveness_free(be_lv_t *lv);




void be_liveness_compute_sets(be_lv_t *lv);
void be_liveness_compute_chk(be_lv_t *lv);
# 51 "ir/be/belive.h"
void be_liveness_invalidate_sets(be_lv_t *lv);
void be_liveness_invalidate_chk(be_lv_t *lv);
# 61 "ir/be/belive.h"
void be_liveness_update(be_lv_t *lv, ir_node *irn);




void be_liveness_remove(be_lv_t *lv, const ir_node *irn);







void be_liveness_introduce(be_lv_t *lv, ir_node *irn);







int (be_is_live_in)(const be_lv_t *lv, const ir_node *block, const ir_node *irn);







int (be_is_live_out)(const be_lv_t *lv, const ir_node *block, const ir_node *irn);







int (be_is_live_end)(const be_lv_t *lv, const ir_node *block, const ir_node *irn);
# 110 "ir/be/belive.h"
void be_liveness_transfer(const arch_register_class_t *cls, ir_node *node,
                          ir_nodeset_t *nodeset);
# 120 "ir/be/belive.h"
void be_liveness_end_of_block(const be_lv_t *lv,
                              const arch_register_class_t *cls,
                              const ir_node *bl, ir_nodeset_t *nodeset);







void be_liveness_nodes_live_before(be_lv_t const *lv, arch_register_class_t const *cls, ir_node const *pos, ir_nodeset_t *live);
# 23 "ir/be/beinfo.h"
struct sched_info_t {
 ir_node *next;
 ir_node *prev;
 sched_timestep_t time_step;
};

struct reg_out_info_t {
 const arch_register_t *reg;
 const arch_register_req_t *req;
};

struct backend_info_t {
 sched_info_t sched_info;
 const arch_register_req_t * *in_reqs;
 reg_out_info_t *out_infos;
 arch_irn_flags_t flags;
};

static inline backend_info_t *be_get_info(const ir_node *node)
{
 ((!is_Proj_(node)) ? (void) (0) : __assert_fail ("!is_Proj_(node)", "ir/be/beinfo.h", 43, __PRETTY_FUNCTION__));
 return (backend_info_t*) node->backend_info;
}

void be_info_init(void);
void be_info_free(void);
void be_info_init_irg(ir_graph *irg);
void be_info_new_node(ir_graph *irg, ir_node *node);

int be_nodes_equal(const ir_node *node1, const ir_node *node2);
# 30 "ir/be/bearch.h"
typedef enum arch_register_class_flags_t {
 arch_register_class_flag_none = 0,

 arch_register_class_flag_manual_ra = 1U << 0,

 arch_register_class_flag_state = 1U << 1
} arch_register_class_flags_t;


typedef enum arch_register_type_t {
 arch_register_type_none = 0,

 arch_register_type_ignore = 1U << 0,



 arch_register_type_virtual = 1U << 1,


 arch_register_type_state = 1U << 2,
} arch_register_type_t;





typedef enum arch_register_req_type_t {

 arch_register_req_type_none = 0,

 arch_register_req_type_normal = 1U << 0,

 arch_register_req_type_limited = 1U << 1,

 arch_register_req_type_should_be_same = 1U << 2,

 arch_register_req_type_must_be_different = 1U << 3,

 arch_register_req_type_ignore = 1U << 5,



 arch_register_req_type_produces_sp = 1U << 6,
} arch_register_req_type_t;


extern arch_register_req_t const arch_no_requirement;


void arch_dump_register_reqs(FILE *F, const ir_node *node);
void arch_dump_reqs_and_registers(FILE *F, const ir_node *node);

void arch_set_frame_offset(ir_node *irn, int bias);

ir_entity *arch_get_frame_entity(const ir_node *irn);
int arch_get_sp_bias(ir_node *irn);

int arch_get_op_estimated_cost(const ir_node *irn);
int arch_possible_memory_operand(const ir_node *irn,
                                             unsigned int i);
void arch_perform_memory_operand(ir_node *irn, ir_node *spill,
                                            unsigned int i);




const arch_register_t *arch_get_irn_register(const ir_node *irn);




void arch_set_irn_register(ir_node *irn, const arch_register_t *reg);




void arch_set_irn_register_out(ir_node *irn, unsigned pos, const arch_register_t *r);

const arch_register_t *arch_get_irn_register_out(const ir_node *irn, unsigned pos);
const arch_register_t *arch_get_irn_register_in(const ir_node *irn, int pos);




static inline const arch_register_req_t *arch_get_irn_register_req_in(
  const ir_node *node, int pos)
{
 const backend_info_t *info = be_get_info(node);
 return info->in_reqs[pos];
}




static inline const arch_register_req_t *arch_get_irn_register_req_out(
  const ir_node *node, unsigned pos)
{
 const backend_info_t *info = be_get_info(node);
 return info->out_infos[pos].req;
}

static inline void arch_set_irn_register_req_out(ir_node *node, unsigned pos,
  const arch_register_req_t *req)
{
 backend_info_t *info = be_get_info(node);
 ((pos < (unsigned)(ir_verify_arr((info->out_infos)), ((ir_arr_descr *)(void *)((char *)((info->out_infos)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)) ? (void) (0) : __assert_fail ("pos < (unsigned)(ir_verify_arr((info->out_infos)), ((ir_arr_descr *)(void *)((char *)((info->out_infos)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)", "ir/be/bearch.h", 135, __PRETTY_FUNCTION__));
 info->out_infos[pos].req = req;
}

static inline void arch_set_irn_register_reqs_in(ir_node *node,
  const arch_register_req_t * *reqs)
{
 backend_info_t *info = be_get_info(node);
 info->in_reqs = reqs;
}

static inline const arch_register_req_t * *arch_get_irn_register_reqs_in(
  const ir_node *node)
{
 backend_info_t *info = be_get_info(node);
 return info->in_reqs;
}

static inline reg_out_info_t *get_out_info(const ir_node *node)
{
 size_t pos = 0;
 const backend_info_t *info;
 ((get_irn_mode_(node) != mode_T) ? (void) (0) : __assert_fail ("get_irn_mode_(node) != mode_T", "ir/be/bearch.h", 157, __PRETTY_FUNCTION__));
 if (is_Proj_(node)) {
  pos = get_Proj_proj_(node);
  node = get_Proj_pred_(node);
 }

 info = be_get_info(node);
 ((pos < (ir_verify_arr((info->out_infos)), ((ir_arr_descr *)(void *)((char *)((info->out_infos)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)) ? (void) (0) : __assert_fail ("pos < (ir_verify_arr((info->out_infos)), ((ir_arr_descr *)(void *)((char *)((info->out_infos)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts)", "ir/be/bearch.h", 164, __PRETTY_FUNCTION__));
 return &info->out_infos[pos];
}

static inline const arch_register_req_t *arch_get_irn_register_req(const ir_node *node)
{
 reg_out_info_t *out = get_out_info(node);
 return out->req;
}






static inline arch_irn_flags_t arch_get_irn_flags(const ir_node *node)
{
 backend_info_t const *const info = be_get_info(node);
 return info->flags;
}

void arch_set_irn_flags(ir_node *node, arch_irn_flags_t flags);
void arch_add_irn_flags(ir_node *node, arch_irn_flags_t flags);



static inline unsigned arch_get_irn_n_outs(const ir_node *node)
{
 backend_info_t *const info = be_get_info(node);
 return (unsigned)(ir_verify_arr((info->out_infos)), ((ir_arr_descr *)(void *)((char *)((info->out_infos)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts);
}







void be_register_isa_if(const char *name, const arch_isa_if_t *isa);




struct arch_register_t {
 const char *name;
 const arch_register_class_t *reg_class;
 unsigned short index;

 unsigned short global_index;

 arch_register_type_t type;

 const arch_register_req_t *single_req;

 unsigned short dwarf_number;

 unsigned short encoding;
};





struct arch_register_class_t {
 unsigned index;
 const char *name;
 unsigned n_regs;

 ir_mode *mode;
 const arch_register_t *regs;
 arch_register_class_flags_t flags;
 const arch_register_req_t *class_req;
};
# 253 "ir/be/bearch.h"
static inline const arch_register_t *arch_register_for_index(
  const arch_register_class_t *cls, unsigned idx)
{
 ((idx < cls->n_regs) ? (void) (0) : __assert_fail ("idx < cls->n_regs", "ir/be/bearch.h", 256, __PRETTY_FUNCTION__));
 return &cls->regs[idx];
}
# 273 "ir/be/bearch.h"
struct arch_register_req_t {

 arch_register_req_type_t type;

 const arch_register_class_t *cls;

 const unsigned *limited;

 unsigned other_same;


 unsigned other_different;



 unsigned char width;
};

static inline _Bool reg_reqs_equal(const arch_register_req_t *req1,
                                  const arch_register_req_t *req2)
{
 if (req1 == req2)
  return 1;

 if (req1->type != req2->type ||
     req1->cls != req2->cls ||
     req1->other_same != req2->other_same ||
     req1->other_different != req2->other_different ||
     (req1->limited != ((void *)0)) != (req2->limited != ((void *)0)))
  return 0;

 if (req1->limited != ((void *)0)) {
  size_t const n_regs = ((req1->cls)->n_regs);
  if (!rbitsets_equal(req1->limited, req2->limited, n_regs))
   return 0;
 }

 return 1;
}

struct arch_irn_ops_t {







 ir_entity *(*get_frame_entity)(const ir_node *irn);






 void (*set_frame_offset)(ir_node *irn, int offset);
# 341 "ir/be/bearch.h"
 int (*get_sp_bias)(const ir_node *irn);







 int (*get_op_estimated_cost)(const ir_node *irn);
# 360 "ir/be/bearch.h"
 int (*possible_memory_operand)(const ir_node *irn, unsigned int i);
# 369 "ir/be/bearch.h"
 void (*perform_memory_operand)(ir_node *irn, ir_node *spill,
                                unsigned int i);
};




struct arch_isa_if_t {




 void (*init)(void);




 void (*finish)(void);




 const backend_params *(*get_params)(void);





 void (*lower_for_target)(void);





 int (*is_valid_clobber)(const char *clobber);





 arch_env_t *(*begin_codegeneration)(void);




 void (*end_codegeneration)(void *self);






 void (*get_call_abi)(ir_type *call_type, be_abi_call_t *abi);




 void (*mark_remat)(ir_node *node);
# 436 "ir/be/bearch.h"
 ir_node *(*new_spill)(ir_node *value, ir_node *after);
# 446 "ir/be/bearch.h"
 ir_node *(*new_reload)(ir_node *value, ir_node *spilled_value,
                        ir_node *before);





 int (*register_saved_by)(const arch_register_t *reg, int callee);





 void (*handle_intrinsics)(ir_graph *irg);





 void (*prepare_graph)(ir_graph *irg);




 void (*before_ra)(ir_graph *irg);






 void (*emit)(ir_graph *irg);
};
# 491 "ir/be/bearch.h"
struct arch_env_t {
 const arch_isa_if_t *impl;
 unsigned n_registers;
 const arch_register_t *registers;
 unsigned n_register_classes;
 const arch_register_class_t *register_classes;
 const arch_register_t *sp;
 const arch_register_t *bp;
 int stack_alignment;
 int spill_cost;
 int reload_cost;
};

static inline _Bool arch_irn_is_ignore(const ir_node *irn)
{
 const arch_register_req_t *req = arch_get_irn_register_req(irn);
 return (((req)->type & (arch_register_req_type_ignore)) != 0);
}

static inline _Bool arch_irn_consider_in_reg_alloc(
  const arch_register_class_t *cls, const ir_node *node)
{
 const arch_register_req_t *req = arch_get_irn_register_req(node);
 return req->cls == cls && !(((req)->type & (arch_register_req_type_ignore)) != 0);
}
# 567 "ir/be/bearch.h"
static inline const arch_register_class_t *arch_get_irn_reg_class(
  const ir_node *node)
{
 const arch_register_req_t *req = arch_get_irn_register_req(node);
 return req->cls;
}

_Bool arch_reg_is_allocatable(const arch_register_req_t *req,
                             const arch_register_t *reg);
# 26 "ir/be/belive_t.h"
struct be_lv_t {
 ir_nodehashmap_t map;
 struct obstack obst;
 _Bool sets_valid;
 ir_graph *irg;
 lv_chk_t *lvc;
};

typedef struct be_lv_info_node_t be_lv_info_node_t;
struct be_lv_info_node_t {
 ir_node *node;
 unsigned flags;
};

struct be_lv_info_head_t {
 unsigned n_members;
 unsigned n_size;
};

union be_lv_info_t {
 struct be_lv_info_head_t head;
 struct be_lv_info_node_t node;
};

be_lv_info_node_t *be_lv_get(const be_lv_t *li, const ir_node *block,
                             const ir_node *irn);

static inline unsigned _be_is_live_xxx(const be_lv_t *li, const ir_node *block,
                                       const ir_node *irn, unsigned flags)
{
 unsigned res;

 if (li->sets_valid) {
  be_lv_info_node_t *info = be_lv_get(li, block, irn);
  res = info != ((void *)0) ? (info->flags & flags) != 0 : 0;
 } else {
  res = (lv_chk_bl_xxx(li->lvc, block, irn) & flags) != 0;
 }

 return res;
}

typedef struct lv_iterator_t
{
 be_lv_info_t *info;
 size_t i;
} lv_iterator_t;

static inline lv_iterator_t be_lv_iteration_begin(const be_lv_t *lv,
 const ir_node *block)
{
 lv_iterator_t res;
 res.info = ((be_lv_info_t*)ir_nodehashmap_get((&lv->map), (block)));
 res.i = res.info != ((void *)0) ? res.info[0].head.n_members : 0;
 return res;
}

static inline ir_node *be_lv_iteration_next(lv_iterator_t *iterator, be_lv_state_t flags)
{
 while (iterator->i != 0) {
  const be_lv_info_t *info = iterator->info + iterator->i--;
  if (info->node.flags & flags)
   return info->node.node;
 }
 return ((void *)0);
}

static inline ir_node *be_lv_iteration_cls_next(lv_iterator_t *iterator, be_lv_state_t flags, const arch_register_class_t *cls)
{
 while (iterator->i != 0) {
  const be_lv_info_t *info = iterator->info + iterator->i--;
  if (!(info->node.flags & flags))
   continue;

  ir_node *node = info->node.node;
  ir_mode *mode = get_irn_mode_(node);
  if (!mode_is_datab(mode))
   continue;
  if (!arch_irn_consider_in_reg_alloc(cls, node))
   continue;
  return node;
 }
 return ((void *)0);
}
# 35 "ir/be/bemodule.h"
void be_init_modules(void);




void be_quit_modules(void);
# 48 "/usr/include/stdint.h" 3
typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;



typedef unsigned long int uint64_t;
# 65 "/usr/include/stdint.h" 3
typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;

typedef long int int_least64_t;






typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;

typedef unsigned long int uint_least64_t;
# 90 "/usr/include/stdint.h" 3
typedef signed char int_fast8_t;

typedef long int int_fast16_t;
typedef long int int_fast32_t;
typedef long int int_fast64_t;
# 103 "/usr/include/stdint.h" 3
typedef unsigned char uint_fast8_t;

typedef unsigned long int uint_fast16_t;
typedef unsigned long int uint_fast32_t;
typedef unsigned long int uint_fast64_t;
# 119 "/usr/include/stdint.h" 3
typedef long int intptr_t;


typedef unsigned long int uintptr_t;
# 134 "/usr/include/stdint.h" 3
typedef long int intmax_t;
typedef unsigned long int uintmax_t;
# 19 "ir/libcore/lc_appendable.h"
struct lc_appendable_funcs_t;

typedef struct lc_appendable_t {
 void *obj;
 size_t written;
 size_t limit;
 const struct lc_appendable_funcs_t *app;
} lc_appendable_t;

typedef struct lc_appendable_funcs_t {
 void (*init)(lc_appendable_t *obj);
 void (*finish)(lc_appendable_t *obj);
 int (*snadd)(lc_appendable_t *obj, const char *str, size_t len);
 int (*chadd)(lc_appendable_t *obj, int ch);
} lc_appendable_funcs_t;





extern void lc_appendable_init(lc_appendable_t *app, const lc_appendable_funcs_t *funcs,
  void *obj, size_t limit);

extern int lc_appendable_snwadd(lc_appendable_t *app, const char *str,
  size_t len, unsigned int width, int left_just, char pad);

extern const lc_appendable_funcs_t *lc_appendable_file;
extern const lc_appendable_funcs_t *lc_appendable_string;
extern const lc_appendable_funcs_t *lc_appendable_obstack;
# 24 "ir/libcore/lc_printf.h"
typedef struct lc_arg_occ_t {
 int width;
 int precision;

 const char *modifier;




 size_t modifier_length;
 char conversion;
 int lc_arg_type;



 _Bool flag_hash : 1;
 _Bool flag_zero : 1;
 _Bool flag_minus : 1;
 _Bool flag_plus : 1;
 _Bool flag_space : 1;
} lc_arg_occ_t;






typedef union {
# 6 "ir/libcore/lc_printf_arg_types.def"
char v_char;
short v_short;
int v_int;
long v_long;
long long v_long_long;
double v_double;
long double v_long_double;
void * v_ptr;
intmax_t v_intmax_t;
ptrdiff_t v_ptrdiff_t;
size_t v_size_t;
# 55 "ir/libcore/lc_printf.h"
} lc_arg_value_t;

enum {
# 6 "ir/libcore/lc_printf_arg_types.def"
lc_arg_type_char,
lc_arg_type_short,
lc_arg_type_int,
lc_arg_type_long,
lc_arg_type_long_long,
lc_arg_type_double,
lc_arg_type_long_double,
lc_arg_type_ptr,
lc_arg_type_intmax_t,
lc_arg_type_ptrdiff_t,
lc_arg_type_size_t,
# 61 "ir/libcore/lc_printf.h"
  lc_arg_type_last
};

typedef struct lc_arg_handler {
 int (*get_lc_arg_type)(const lc_arg_occ_t *occ);
 int (*emit)(lc_appendable_t *app, const lc_arg_occ_t *occ, const lc_arg_value_t *arg);
} lc_arg_handler_t;

typedef struct lc_arg_env_t lc_arg_env_t;

lc_arg_env_t *lc_arg_new_env(void);
void lc_arg_free_env(lc_arg_env_t *env);
lc_arg_env_t *lc_arg_get_default_env(void);

int lc_arg_register(lc_arg_env_t *env, const char *name, char letter, const lc_arg_handler_t *handler);
void lc_arg_unregister(lc_arg_env_t *env, const char *name);

lc_arg_env_t *lc_arg_add_std(lc_arg_env_t *env);

int lc_arg_append(lc_appendable_t *app, const lc_arg_occ_t *occ, const char *str, size_t len);

int lc_epprintf(const lc_arg_env_t *env, lc_appendable_t *app, const char *fmt, ...);
int lc_evpprintf(const lc_arg_env_t *env, lc_appendable_t *app, const char *fmt, va_list args);
int lc_pprintf(lc_appendable_t *app, const char *fmt, ...);
int lc_vpprintf(lc_appendable_t *app, const char *fmt, va_list args);

int lc_eprintf(const lc_arg_env_t *env, const char *fmt, ...);
int lc_esnprintf(const lc_arg_env_t *env, char *buf, size_t len, const char *fmt, ...);
int lc_efprintf(const lc_arg_env_t *env, FILE *file, const char *fmt, ...);
int lc_eoprintf(const lc_arg_env_t *env, struct obstack *obst, const char *fmt, ...);

int lc_evprintf(const lc_arg_env_t *env, const char *fmt, va_list args);
int lc_evsnprintf(const lc_arg_env_t *env, char *buf, size_t len, const char *fmt, va_list args);
int lc_evfprintf(const lc_arg_env_t *env, FILE *f, const char *fmt, va_list args);
int lc_evoprintf(const lc_arg_env_t *env, struct obstack *obst, const char *fmt, va_list args);

int lc_printf(const char *fmt, ...);
int lc_snprintf(char *buf, size_t len, const char *fmt, ...);
int lc_fprintf(FILE *f, const char *fmt, ...);
int lc_oprintf(struct obstack *obst, const char *fmt, ...);

int lc_vprintf(const char *fmt, va_list args);
int lc_vsnprintf(char *buf, size_t len, const char *fmt, va_list args);
int lc_vfprintf(FILE *f, const char *fmt, va_list args);
int lc_voprintf(struct obstack *obst, const char *fmt, va_list args);
# 23 "ir/libcore/lc_opts.h"
typedef enum {
 lc_opt_type_invalid,
 lc_opt_type_enum,
 lc_opt_type_bit,
 lc_opt_type_boolean,
 lc_opt_type_string,
 lc_opt_type_int,
 lc_opt_type_double
} lc_opt_type_t;

typedef struct lc_opt_entry_t lc_opt_entry_t;

typedef _Bool (lc_opt_callback_t)(const char *name, lc_opt_type_t type, void *data, size_t length, ...);

typedef int (lc_opt_dump_t)(char *buf, size_t n, const char *name, lc_opt_type_t type, void *data, size_t length);

typedef int (lc_opt_dump_vals_t)(char *buf, size_t n, const char *name, lc_opt_type_t type, void *data, size_t length);

typedef struct {
 const char *name;
 const char *desc;
 lc_opt_type_t type;
 void *value;



 size_t len;

 lc_opt_callback_t *cb;


 lc_opt_dump_t *dump;



 lc_opt_dump_vals_t *dump_vals;



} lc_opt_table_entry_t;
# 79 "ir/libcore/lc_opts.h"
typedef char lc_opt_str_t[];
# 90 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_root_grp(void);






int lc_opt_grp_is_root(const lc_opt_entry_t *ent);
# 106 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_get_grp(lc_opt_entry_t *parent, const char *name);
# 123 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_add_opt(lc_opt_entry_t *grp,
                               const char *name,
                               const char *desc,
                               lc_opt_type_t type,
                               void *value, size_t length,
                               lc_opt_callback_t *cb,
                               lc_opt_dump_t *dump,
                               lc_opt_dump_vals_t *dump_vals);

_Bool lc_opt_std_cb(const char *name, lc_opt_type_t type, void *data, size_t length, ...);

int lc_opt_std_dump(char *buf, size_t n, const char *name, lc_opt_type_t type, void *data, size_t length);

int lc_opt_bool_dump_vals(char *buf, size_t n, const char *name, lc_opt_type_t type, void *data, size_t length);
# 157 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_find_grp(const lc_opt_entry_t *grp, const char *name);







lc_opt_entry_t *lc_opt_find_opt(const lc_opt_entry_t *grp, const char *name);
# 174 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_resolve_grp(const lc_opt_entry_t *root,
                                   const char * const *names, int n);
# 184 "ir/libcore/lc_opts.h"
lc_opt_entry_t *lc_opt_resolve_opt(const lc_opt_entry_t *root,
                                   const char * const *names, int n);







_Bool lc_opt_occurs(lc_opt_entry_t *opt, const char *value);
# 202 "ir/libcore/lc_opts.h"
char *lc_opt_value_to_string(char *buf, size_t len, const lc_opt_entry_t *ent);






const char *lc_opt_get_type_name(const lc_opt_entry_t *ent);




void lc_opt_print_help(lc_opt_entry_t *ent, FILE *f);







void lc_opt_print_help_for_entry(lc_opt_entry_t *ent, char separator, FILE *f);

void lc_opt_print_tree(lc_opt_entry_t *ent, FILE *f);

_Bool lc_opt_add_table(lc_opt_entry_t *grp, const lc_opt_table_entry_t *table);







int lc_opt_from_single_arg(const lc_opt_entry_t *grp, const char *arg);
# 46 "ir/be/bemodule.h"
typedef struct be_module_list_entry_t be_module_list_entry_t;

void be_add_module_to_list(be_module_list_entry_t * *list_head, const char *name,
                           void *module);

void be_add_module_list_opt(lc_opt_entry_t *grp, const char *name,
                            const char *description,
                            be_module_list_entry_t * const * first,
                            void * *var);
# 24 "ir/be/benode.h"
typedef enum be_opcode {
 beo_Spill,
 beo_Reload,
 beo_Perm,
 beo_MemPerm,
 beo_Copy,
 beo_Keep,
 beo_CopyKeep,
 beo_Call,
 beo_Return,
 beo_IncSP,
 beo_AddSP,
 beo_SubSP,
 beo_Start,
 beo_FrameAddr,

 beo_first = beo_Spill,
 beo_last = beo_FrameAddr
} be_opcode;




extern ir_op *op_be_Spill;
extern ir_op *op_be_Reload;
extern ir_op *op_be_Perm;
extern ir_op *op_be_MemPerm;
extern ir_op *op_be_Copy;
extern ir_op *op_be_Keep;
extern ir_op *op_be_CopyKeep;
extern ir_op *op_be_Call;
extern ir_op *op_be_Return;
extern ir_op *op_be_IncSP;
extern ir_op *op_be_AddSP;
extern ir_op *op_be_SubSP;
extern ir_op *op_be_Start;
extern ir_op *op_be_FrameAddr;




_Bool is_be_node(const ir_node *irn);

be_opcode get_be_irn_opcode(const ir_node *node);




void be_init_op(void);

void be_finish_op(void);




enum {
 n_be_Spill_frame = 0,
 n_be_Spill_val = 1
};




ir_node *be_new_Spill(const arch_register_class_t *cls,
                      const arch_register_class_t *cls_frame, ir_node *block,
                      ir_node *frame, ir_node *to_spill);




enum {
 n_be_Reload_frame = 0,
 n_be_Reload_mem = 1
};




ir_node *be_new_Reload(const arch_register_class_t *cls,
                       const arch_register_class_t *cls_frame, ir_node *block,
                       ir_node *frame, ir_node *mem, ir_mode *mode);




enum {
 n_be_Copy_op = 0
};




ir_node *be_new_Copy(ir_node *block, ir_node *in);

ir_node *be_get_Copy_op(const ir_node *cpy);




ir_node *be_new_Perm(arch_register_class_t const *cls, ir_node *block, int n, ir_node *const *in);
# 139 "ir/be/benode.h"
void be_Perm_reduce(ir_node *perm, int new_size, int *map);







ir_node *be_new_MemPerm(ir_node *block, int n, ir_node *const *in);

ir_node *be_new_Keep(ir_node *block, int arity, ir_node *const *in);

void be_Keep_add_node(ir_node *keep, const arch_register_class_t *cls,
                      ir_node *node);




enum {
 n_be_FrameAddr_ptr = 0
};


ir_node *be_new_FrameAddr(const arch_register_class_t *cls_frame,
                          ir_node *block, ir_node *frame, ir_entity *ent);


ir_node *be_get_FrameAddr_frame(const ir_node *node);

ir_entity *be_get_FrameAddr_entity(const ir_node *node);




enum {
 n_be_AddSP_old_sp = 0,
 n_be_AddSP_size = 1,
 n_be_AddSP_last = 2
};

enum {
 pn_be_AddSP_sp = 0,
 pn_be_AddSP_res = 1,
 pn_be_AddSP_M = 2,
 pn_be_AddSP_last = 3
};
# 198 "ir/be/benode.h"
ir_node *be_new_AddSP(const arch_register_t *sp, ir_node *block,
                      ir_node *old_sp, ir_node *size);




enum {
 n_be_SubSP_old_sp = 0,
 n_be_SubSP_size = 1,
 n_be_SubSP_last = 2
};

enum {
 pn_be_SubSP_sp = 0,
 pn_be_SubSP_M = 1,
 pn_be_SubSP_last = 2
};
# 228 "ir/be/benode.h"
ir_node *be_new_SubSP(const arch_register_t *sp, ir_node *block,
                      ir_node *old_sp, ir_node *size);
# 246 "ir/be/benode.h"
ir_node *be_new_IncSP(const arch_register_t *sp, ir_node *block,
                      ir_node *old_sp, int offset, int align);


ir_node *be_get_IncSP_pred(ir_node *incsp);


void be_set_IncSP_pred(ir_node *incsp, ir_node *pred);







void be_set_IncSP_offset(ir_node *irn, int offset);


int be_get_IncSP_offset(const ir_node *irn);
int be_get_IncSP_align(const ir_node *irn);


ir_entity *be_Call_get_entity(const ir_node *call);

void be_Call_set_entity(ir_node *call, ir_entity *ent);

ir_type *be_Call_get_type(ir_node *call);

void be_Call_set_type(ir_node *call, ir_type *call_tp);

void be_Call_set_pop(ir_node *call, unsigned pop);

unsigned be_Call_get_pop(const ir_node *call);




enum {
 n_be_Call_mem = 0,
 n_be_Call_sp = 1,
 n_be_Call_ptr = 2,
 n_be_Call_first_arg = 3
};




typedef enum {
 pn_be_Call_M = pn_Call_M,
 pn_be_Call_X_regular = pn_Call_X_regular,
 pn_be_Call_X_except = pn_Call_X_except,
 pn_be_Call_sp = pn_Call_max+1,
 pn_be_Call_first_res
} pn_be_Call;
# 315 "ir/be/benode.h"
ir_node *be_new_Call(dbg_info *dbg, ir_node *block, ir_node *mem, arch_register_req_t const *sp_req, ir_node *sp, arch_register_req_t const *ptr_req, ir_node *ptr, int n_outs, int n, ir_node *const *in, ir_type *call_tp);




enum {
 n_be_Return_mem = 0,
 n_be_Return_sp = 1,
 n_be_Return_val = 2,
};
# 336 "ir/be/benode.h"
ir_node *be_new_Return(dbg_info *dbg, ir_node *block, int n_res, unsigned pop, int n, ir_node *const *in);


int be_Return_get_n_rets(const ir_node *ret);







unsigned be_Return_get_pop(const ir_node *ret);






int be_Return_get_emit_pop(const ir_node *ret);






void be_Return_set_emit_pop(ir_node *ret, int emit_pop);

void be_return_set_destroy_stackframe(ir_node *node, _Bool value);

ir_node *be_new_Start(dbg_info *dbgi, ir_node *block, int n_out);

void be_start_set_setup_stackframe(ir_node *node, _Bool value);

enum {
 n_be_CopyKeep_op = 0
};
ir_node *be_new_CopyKeep(ir_node *block, ir_node *src,
                         int n, ir_node *in_keep[]);

ir_node *be_new_CopyKeep_single(ir_node *block, ir_node *src, ir_node *keep);

ir_node *be_get_CopyKeep_op(const ir_node *cpy);

void be_set_CopyKeep_op(ir_node *cpy, ir_node *op);







ir_entity *be_get_frame_entity(const ir_node *irn);

void be_node_set_frame_entity(ir_node *node, ir_entity *entity);




int be_get_frame_offset(const ir_node *irn);

ir_node* be_get_Reload_mem(const ir_node *irn);
ir_node *be_get_Reload_frame(const ir_node *irn);
ir_node* be_get_Spill_val(const ir_node *irn);
ir_node *be_get_Spill_frame(const ir_node *irn);

void be_set_MemPerm_in_entity(const ir_node *irn, int n, ir_entity* ent);
ir_entity *be_get_MemPerm_in_entity(const ir_node *irn, int n);

void be_set_MemPerm_out_entity(const ir_node *irn, int n, ir_entity* ent);
ir_entity *be_get_MemPerm_out_entity(const ir_node *irn, int n);

void be_set_MemPerm_offset(ir_node *irn, int offset);
int be_get_MemPerm_offset(const ir_node *irn);

int be_get_MemPerm_entity_arity(const ir_node *irn);
# 419 "ir/be/benode.h"
void be_set_constr_single_reg_in(ir_node *irn, int pos,
  const arch_register_t *reg, arch_register_req_type_t additional_flags);
void be_set_constr_single_reg_out(ir_node *irn, int pos,
  const arch_register_t *reg, arch_register_req_type_t additional_flags);

const arch_register_req_t *be_create_reg_req(struct obstack *obst,
  const arch_register_t *reg, arch_register_req_type_t additional_types);
# 436 "ir/be/benode.h"
void be_set_constr_in(ir_node *irn, int pos, const arch_register_req_t *req);
void be_set_constr_out(ir_node *irn, int pos, const arch_register_req_t *req);







void be_node_set_reg_class_in(ir_node *irn, int pos,
                              const arch_register_class_t *cls);
void be_node_set_reg_class_out(ir_node *irn, int pos,
                               const arch_register_class_t *cls);




void be_set_phi_reg_req(ir_node *phi, const arch_register_req_t *req);

void be_dump_phi_reg_reqs(FILE *out, const ir_node *node, dump_reason_t reason);




ir_node *be_new_Phi(ir_node *block, int n_ins, ir_node * *ins, ir_mode *mode,
                    const arch_register_req_t *req);




ir_node *be_get_initial_reg_value(ir_graph *irg, const arch_register_t *reg);

static inline _Bool be_is_Spill (const ir_node *irn) { return get_irn_op_(irn) == op_be_Spill ; }
static inline _Bool be_is_Reload (const ir_node *irn) { return get_irn_op_(irn) == op_be_Reload ; }
static inline _Bool be_is_Copy (const ir_node *irn) { return get_irn_op_(irn) == op_be_Copy ; }
static inline _Bool be_is_CopyKeep (const ir_node *irn) { return get_irn_op_(irn) == op_be_CopyKeep ; }
static inline _Bool be_is_Perm (const ir_node *irn) { return get_irn_op_(irn) == op_be_Perm ; }
static inline _Bool be_is_MemPerm (const ir_node *irn) { return get_irn_op_(irn) == op_be_MemPerm ; }
static inline _Bool be_is_Keep (const ir_node *irn) { return get_irn_op_(irn) == op_be_Keep ; }
static inline _Bool be_is_Call (const ir_node *irn) { return get_irn_op_(irn) == op_be_Call ; }
static inline _Bool be_is_Return (const ir_node *irn) { return get_irn_op_(irn) == op_be_Return ; }
static inline _Bool be_is_IncSP (const ir_node *irn) { return get_irn_op_(irn) == op_be_IncSP ; }
static inline _Bool be_is_AddSP (const ir_node *irn) { return get_irn_op_(irn) == op_be_AddSP ; }
static inline _Bool be_is_SubSP (const ir_node *irn) { return get_irn_op_(irn) == op_be_SubSP ; }
static inline _Bool be_is_Start (const ir_node *irn) { return get_irn_op_(irn) == op_be_Start ; }
static inline _Bool be_is_FrameAddr(const ir_node *irn) { return get_irn_op_(irn) == op_be_FrameAddr; }
# 17 "ir/be/bera.h"
typedef struct be_ra_t {
 void (*allocate)(ir_graph *irg);
} be_ra_t;

void be_register_allocator(const char *name, be_ra_t *allocator);




void be_allocate_registers(ir_graph *irg);
# 18 "ir/be/besched.h"
static sched_info_t *get_irn_sched_info(const ir_node *node)
{
 return &be_get_info(skip_Proj_const(node))->sched_info;
}
# 30 "ir/be/besched.h"
static inline _Bool sched_is_scheduled(const ir_node *irn)
{
 return get_irn_sched_info(irn)->next != ((void *)0);
}
# 42 "ir/be/besched.h"
static inline sched_timestep_t sched_get_time_step(const ir_node *irn)
{
 ((sched_is_scheduled(irn)) ? (void) (0) : __assert_fail ("sched_is_scheduled(irn)", "ir/be/besched.h", 44, __PRETTY_FUNCTION__));
 return get_irn_sched_info(irn)->time_step;
}

static inline _Bool sched_is_end(const ir_node *node)
{
 return is_Block_(node);
}

static inline _Bool sched_is_begin(const ir_node *node)
{
 return is_Block_(node);
}






static inline ir_node *sched_next(const ir_node *irn)
{
 const sched_info_t *info = get_irn_sched_info(irn);
 return info->next;
}







static inline ir_node *sched_prev(const ir_node *irn)
{
 const sched_info_t *info = get_irn_sched_info(irn);
 return info->prev;
}







static inline ir_node *sched_first(const ir_node *block)
{
 ((is_Block_(block) && "Need a block here") ? (void) (0) : __assert_fail ("is_Block_(block) && \"Need a block here\"", "ir/be/besched.h", 89, __PRETTY_FUNCTION__));
 return sched_next(block);
}







static inline ir_node *sched_last(const ir_node *block)
{
 ((is_Block_(block) && "Need a block here") ? (void) (0) : __assert_fail ("is_Block_(block) && \"Need a block here\"", "ir/be/besched.h", 101, __PRETTY_FUNCTION__));
 return sched_prev(block);
}






void sched_add_before(ir_node *before, ir_node *irn);







void sched_add_after(ir_node *after, ir_node *irn);

static inline void sched_init_block(ir_node *block)
{
 sched_info_t *info = get_irn_sched_info(block);
 ((info->next == ((void *)0) && info->time_step == 0) ? (void) (0) : __assert_fail ("info->next == ((void *)0) && info->time_step == 0", "ir/be/besched.h", 123, __PRETTY_FUNCTION__));
 info->next = block;
 info->prev = block;
}

static inline void sched_reset(ir_node *node)
{
 sched_info_t *info = get_irn_sched_info(node);
 info->next = ((void *)0);
 info->prev = ((void *)0);
}





void sched_remove(ir_node *irn);




void sched_replace(ir_node *old, ir_node *irn);
# 153 "ir/be/besched.h"
static inline _Bool sched_comes_after(const ir_node *n1, const ir_node *n2)
{
 (((is_Block_(n1) ? n1 : get_nodes_block_(n1)) == (is_Block_(n2) ? n2 : get_nodes_block_(n2))) ? (void) (0) : __assert_fail ("(is_Block_(n1) ? n1 : get_nodes_block_(n1)) == (is_Block_(n2) ? n2 : get_nodes_block_(n2))", "ir/be/besched.h", 155, __PRETTY_FUNCTION__));
 return sched_get_time_step(n1) < sched_get_time_step(n2);
}
# 204 "ir/be/besched.h"
typedef void (*schedule_func) (ir_graph *irg);




void be_register_scheduler(const char *name, schedule_func func);




void be_schedule_graph(ir_graph *irg);
# 17 "ir/be/bespill.h"
extern int be_coalesce_spill_slots;
extern int be_do_remats;




typedef struct be_spiller_t {






 void (*spill)(ir_graph *irg, const arch_register_class_t *cls);
} be_spiller_t;
# 40 "ir/be/bespill.h"
void be_register_spiller(const char *name, be_spiller_t *spiller);







void be_do_spill(ir_graph *irg, const arch_register_class_t *cls);





void be_pre_spill_prepare_constr(ir_graph *irg,
                                 const arch_register_class_t *cls);
# 21 "ir/be/bespillutil.h"
typedef struct spill_env_t spill_env_t;




spill_env_t *be_new_spill_env(ir_graph *irg);




void be_delete_spill_env(spill_env_t *senv);




ir_node *be_get_end_of_block_insertion_point(const ir_node *block);




void be_add_spill(spill_env_t *senv, ir_node *to_spill, ir_node *after);
# 57 "ir/be/bespillutil.h"
void be_add_reload(spill_env_t *senv, ir_node *to_spill, ir_node *before,
                   const arch_register_class_t *reload_cls, int allow_remat);





void be_add_reload_on_edge(spill_env_t *senv, ir_node *to_spill, ir_node *bl,
                           int pos, const arch_register_class_t *reload_cls,
                           int allow_remat);






void be_insert_spills_reloads(spill_env_t *senv);
# 82 "ir/be/bespillutil.h"
void be_spill_phi(spill_env_t *env, ir_node *node);







double be_get_spill_costs(spill_env_t *env, ir_node *to_spill, ir_node *before);







double be_get_reload_costs(spill_env_t *env, ir_node *to_spill,
                           ir_node *before);

unsigned be_get_reload_costs_no_weight(spill_env_t *env, const ir_node *to_spill,
                                       const ir_node *before);






double be_get_reload_costs_on_edge(spill_env_t *env, ir_node *to_spill,
                                   ir_node *block, int pos);

typedef struct {
 unsigned n_spills;
 unsigned n_reloads;
 double spill_costs;
 double reload_costs;
} be_total_spill_costs_t;
# 126 "ir/be/bespillutil.h"
void make_spill_locations_dominate_irn(spill_env_t *env, ir_node *irn);






void be_get_total_spill_costs(ir_graph *irg, be_total_spill_costs_t *costs);






int be_is_rematerializable(spill_env_t *env, const ir_node *to_remat, const ir_node *before);





ir_node *be_new_spill(ir_node *value, ir_node *after);





ir_node *be_new_reload(ir_node *value, ir_node *spilled, ir_node *before);
# 28 "ir/be/beverify.h"
_Bool be_verify_register_pressure(ir_graph *irg,
                                 const arch_register_class_t* cls);







_Bool be_verify_schedule(ir_graph *irg);







_Bool be_verify_spillslots(ir_graph *irg);
# 55 "ir/be/beverify.h"
_Bool be_verify_register_allocation(ir_graph *irg);




void be_liveness_check(be_lv_t *lv);
# 23 "ir/be/beutil.h"
static inline ir_node *get_block(ir_node *irn)
{
 return is_Block_(irn) ? irn : get_nodes_block_(irn);
}

static inline const ir_node *get_block_const(const ir_node *irn)
{
 return is_Block_(irn) ? irn : get_nodes_block_(irn);
}





void be_clear_links(ir_graph *irg);




ir_node *be_get_Proj_for_pn(const ir_node *irn, long pn);






ir_node * *be_get_cfgpostorder(ir_graph *irg);





ir_node *get_first_block_succ(const ir_node *block);
# 22 "ir/be/bestack.h"
void be_abi_fix_stack_nodes(ir_graph *irg);





void be_abi_fix_stack_bias(ir_graph *irg);

int be_get_stack_entity_offset(be_stack_layout_t *frame, ir_entity *ent,
                               int bias);
# 69 "ir/be/beprefalloc.c"
static firm_dbg_module_t *dbg = ((void *)0);

static struct obstack obst;
static ir_graph *irg;
static const arch_register_class_t *cls;
static be_lv_t *lv;
static unsigned n_regs;
static unsigned *normal_regs;
static int *congruence_classes;
static ir_node * *block_order;
static size_t n_block_order;



static ir_node * *assignments;





struct allocation_info_t {
 ir_node *current_value;
 ir_node *original_value;
 float prefs[];
};
typedef struct allocation_info_t allocation_info_t;


typedef struct node_info_t {

 unsigned last_uses[2];
 allocation_info_t *infos[];
} node_info_t;


struct reg_pref_t {
 unsigned num;
 float pref;
};
typedef struct reg_pref_t reg_pref_t;


struct block_info_t {
 _Bool processed;
 ir_node *assignments[];
};
typedef struct block_info_t block_info_t;





static node_info_t *get_node_info(ir_node *node)
{
 node_info_t *info = (node_info_t*)get_irn_link_(node);
 if (info == ((void *)0)) {
  unsigned n_outs = arch_get_irn_n_outs(node);
  info = ((node_info_t*)memset(((node_info_t*)__extension__ ({ struct obstack *__h = (((&obst))); __extension__ ({ struct obstack *__o = (__h); long int __len = ((__builtin_offsetof (node_info_t, infos) + sizeof(*((node_info_t*)0)->infos) * ((n_outs)))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); })), 0, __builtin_offsetof (node_info_t, infos) + sizeof(*((node_info_t*)0)->infos) * (n_outs)));
  set_irn_link_(node, info);
 }
 return info;
}

static allocation_info_t *get_out_alloc_info(node_info_t *info, unsigned out)
{
 allocation_info_t *allocinfo = info->infos[out];
 if (allocinfo == ((void *)0)) {
  allocinfo = ((allocation_info_t*)memset(((allocation_info_t*)__extension__ ({ struct obstack *__h = (((&obst))); __extension__ ({ struct obstack *__o = (__h); long int __len = ((__builtin_offsetof (allocation_info_t, prefs) + sizeof(*((allocation_info_t*)0)->prefs) * ((n_regs)))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); })), 0, __builtin_offsetof (allocation_info_t, prefs) + sizeof(*((allocation_info_t*)0)->prefs) * (n_regs)));
  allocinfo->current_value = ((void *)0);
  allocinfo->original_value = ((void *)0);
  info->infos[out] = allocinfo;
 }
 return allocinfo;
}

static allocation_info_t *try_get_out_info(node_info_t *info, unsigned out)
{
 allocation_info_t *allocinfo = info->infos[out];
 return allocinfo;
}

static allocation_info_t *get_value_info(ir_node *value)
{
 ir_node *insn = value;
 unsigned o = 0;
 if (is_Proj_(value)) {
  o = (unsigned)get_Proj_proj_(value);
  insn = get_Proj_pred_(value);
 }
 node_info_t *info = get_node_info(insn);
 allocation_info_t *allocinfo = get_out_alloc_info(info, o);
 if (allocinfo->original_value == ((void *)0)) {
  allocinfo->original_value = value;
  allocinfo->current_value = value;
 }
 return allocinfo;
}

static node_info_t *try_get_node_info(const ir_node *node)
{
 return (node_info_t*)get_irn_link_(node);
}

static allocation_info_t *try_get_value_info(const ir_node *value)
{
 const ir_node *insn = value;
 unsigned o = 0;
 if (is_Proj_(value)) {
  o = (unsigned)get_Proj_proj_(value);
  insn = get_Proj_pred_(value);
 }
 node_info_t *info = try_get_node_info(insn);
 if (info == ((void *)0))
  return ((void *)0);
 return try_get_out_info(info, o);
}




static block_info_t *get_block_info(ir_node *block)
{
 block_info_t *info = (block_info_t*)get_irn_link_(block);

 ((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 193, __PRETTY_FUNCTION__));
 if (info == ((void *)0)) {
  info = ((block_info_t*)memset(((block_info_t*)__extension__ ({ struct obstack *__h = (((&obst))); __extension__ ({ struct obstack *__o = (__h); long int __len = ((__builtin_offsetof (block_info_t, assignments) + sizeof(*((block_info_t*)0)->assignments) * ((n_regs)))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); })), 0, __builtin_offsetof (block_info_t, assignments) + sizeof(*((block_info_t*)0)->assignments) * (n_regs)));
  set_irn_link_(block, info);
 }

 return info;
}
# 210 "ir/be/beprefalloc.c"
static void mark_as_copy_of(ir_node *copy, ir_node *value)
{
 allocation_info_t *info = get_value_info(value);
 allocation_info_t *copy_info = get_value_info(copy);


 ir_node *original = info->original_value;
 if (original != value) {
  info = get_value_info(original);
 }

 ((info->original_value == original) ? (void) (0) : __assert_fail ("info->original_value == original", "ir/be/beprefalloc.c", 221, __PRETTY_FUNCTION__));
 info->current_value = copy;


 ((copy_info->original_value == copy) ? (void) (0) : __assert_fail ("copy_info->original_value == copy", "ir/be/beprefalloc.c", 225, __PRETTY_FUNCTION__));
 copy_info->original_value = original;


 memcpy(copy_info->prefs, info->prefs, n_regs * sizeof(copy_info->prefs[0]));
}




static void give_penalties_for_limits(const ir_nodeset_t *live_nodes,
                                      float penalty, ir_node *insn, unsigned o,
                                      const unsigned *limited,
                                      allocation_info_t *info)
{

 for (unsigned r = 0; r < n_regs; ++r) {
  if (rbitset_is_set(limited, r))
   continue;
  info->prefs[r] -= penalty;
 }


 penalty *= 0.2f;
 size_t n_allowed = rbitset_popcount(limited, n_regs);
 if (n_allowed > 1) {

  penalty = (penalty * 0.8f) / n_allowed;
 }
 for (_Bool neighbor__once = 1; neighbor__once;) for (ir_nodeset_iterator_t iter; neighbor__once;) for (ir_node *neighbor; neighbor__once; neighbor__once = 0) for (ir_nodeset_iterator_init(&iter, live_nodes); (neighbor = ir_nodeset_iterator_next(&iter));) {

  if (get_irn_mode_(insn) == mode_T) {
   if (is_Proj_(neighbor) && get_Proj_proj_(neighbor) == (long)o
       && get_Proj_pred_(neighbor) == insn)
    continue;
  } else if (neighbor == insn) {
   continue;
  }

  allocation_info_t *neighbor_info = get_value_info(neighbor);
  for (unsigned r = 0; r < n_regs; ++r) {
   if (!rbitset_is_set(limited, r))
    continue;

   neighbor_info->prefs[r] -= penalty;
  }
 }
}

static void give_should_be_same_bonus(const ir_nodeset_t *live_nodes,
                                      ir_node *insn,
                                      const arch_register_req_t *req,
                                      allocation_info_t *info)
{
 if (! (req->type & arch_register_req_type_should_be_same))
  return;

 int arity = get_irn_arity_(insn);
 float factor = 1.0f / rbitset_popcount(&req->other_same, arity);
 for (int i = 0; i < arity; ++i) {
  if (!rbitset_is_set(&req->other_same, i))
   continue;

  ir_node *op = get_irn_n_(insn, i);




  if (ir_nodeset_contains(live_nodes, op))
   continue;

  allocation_info_t *op_info = get_value_info(op);
  for (unsigned r = 0; r < n_regs; ++r) {
   op_info->prefs[r] += info->prefs[r] * factor;
  }
 }
}






static void check_defs(const ir_nodeset_t *live_nodes, float weight,
                       ir_node *insn, unsigned out,
                       const arch_register_req_t *req,
                       allocation_info_t *info)
{
 if ((((req)->type & (arch_register_req_type_limited)) != 0)) {
  const unsigned *limited = req->limited;
  float factor = weight * 1.0f;
  give_penalties_for_limits(live_nodes, factor, insn, out, limited, info);
 }
 give_should_be_same_bonus(live_nodes, insn, req, info);
}





static void analyze_block(ir_node *block, void *data)
{
 float weight = (float)get_block_execfreq(block);
 ir_nodeset_t live_nodes;
 (void) data;

 ir_nodeset_init(&live_nodes);
 be_liveness_end_of_block(lv, cls, block, &live_nodes);

 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 334, __PRETTY_FUNCTION__)), block)); !sched_is_begin(node = sched_prev(node));) {
  if (is_Phi_(node))
   break;

  node_info_t *info = get_node_info(node);

  unsigned n_outs = arch_get_irn_n_outs(node);
  for (unsigned o = 0; o < n_outs; ++o) {
   const arch_register_req_t *req
    = arch_get_irn_register_req_out(node, o);
   if (req->cls != cls)
    continue;
   if (req->type & arch_register_req_type_ignore)
    continue;
   allocation_info_t *allocinfo = get_out_alloc_info(info, o);
   check_defs(&live_nodes, weight, node, o, req, allocinfo);
  }





  int arity = get_irn_arity_(node);
  if (arity >= (int) sizeof(info->last_uses) * 8) {
   panic(
 "ir/be/beprefalloc.c"
# 358 "ir/be/beprefalloc.c"
   ,
 359
# 358 "ir/be/beprefalloc.c"
   , __func__, "Node with more than %d inputs not supported yet", (int) sizeof(info->last_uses) * 8)
                                           ;
  }

  for (int i = 0; i < arity; ++i) {
   const arch_register_req_t *req
    = arch_get_irn_register_req_in(node, i);
   if (req->cls != cls)
    continue;


   ir_node *op = get_irn_n_(node, i);
   if (!ir_nodeset_contains(&live_nodes, op)) {
    rbitset_set(info->last_uses, i);
   }
  }

  be_liveness_transfer(cls, node, &live_nodes);


  float factor = weight * 1.0f;
  do { for (int i_ = 0, n_ = get_irn_arity_(node); i_ < n_; ++i_) { const arch_register_req_t *req = arch_get_irn_register_req_in(node, i_); if (req->cls != cls) continue; ir_node *op = get_irn_n_(node, i_); const arch_register_req_t *op_req = arch_get_irn_register_req(op); if (op_req->type & arch_register_req_type_ignore) continue; if (!(((req)->type & (arch_register_req_type_limited)) != 0)) continue; const unsigned *limited = req->limited; allocation_info_t *info = get_value_info(op); give_penalties_for_limits(&live_nodes, weight * 1.0f, limited, op); } } while (0)







   ;
 }

 ir_nodeset_destroy(&live_nodes);
}

static void congruence_def(ir_nodeset_t *const live_nodes, ir_node const *const node, arch_register_req_t const *const req)
{

 if ((((req)->type & (arch_register_req_type_should_be_same)) != 0)) {
  const ir_node *insn = skip_Proj_const(node);
  int arity = get_irn_arity_(insn);
  unsigned node_idx = get_irn_idx_(node);
  node_idx = uf_find(congruence_classes, node_idx);

  for (int i = 0; i < arity; ++i) {
   if (!rbitset_is_set(&req->other_same, i))
    continue;

   ir_node *op = get_irn_n_(insn, i);
   int op_idx = get_irn_idx_(op);
   op_idx = uf_find(congruence_classes, op_idx);


   _Bool interferes = 0;
   for (_Bool live__once = 1; live__once;) for (ir_nodeset_iterator_t iter; live__once;) for (ir_node *live; live__once; live__once = 0) for (ir_nodeset_iterator_init(&iter, live_nodes); (live = ir_nodeset_iterator_next(&iter));) {
    int lv_idx = get_irn_idx_(live);
    lv_idx = uf_find(congruence_classes, lv_idx);
    if (lv_idx == op_idx) {
     interferes = 1;
     break;
    }
   }

   if (interferes)
    continue;

   uf_union(congruence_classes, node_idx, op_idx);
   _firm_dbg_print (dbg, LEVEL_3, "Merge %+F and %+F congruence classes\n", node, op)
                 ;

   break;
  }
 }
}

static void create_congruence_class(ir_node *block, void *data)
{
 ir_nodeset_t live_nodes;

 (void) data;
 ir_nodeset_init(&live_nodes);
 be_liveness_end_of_block(lv, cls, block, &live_nodes);


 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 442, __PRETTY_FUNCTION__)), block)); !sched_is_begin(node = sched_prev(node));) {
  if (is_Phi_(node))
   break;

  do { if (get_irn_mode_(node) == mode_T) { for (ir_edge_t const *node__edge = get_irn_out_edge_first_kind(node, EDGE_KIND_NORMAL); node__edge; node__edge = get_irn_out_edge_next_(node, node__edge, EDGE_KIND_NORMAL)) { ir_node *const value = get_edge_src_irn_(node__edge); if (!is_Proj_(value)) continue; arch_register_req_t const *const req = arch_get_irn_register_req(value); if (req->cls != cls) continue; if ((((req)->type & (arch_register_req_type_ignore)) != 0)) continue; congruence_def(&live_nodes, value, req); } } else { ir_node *const value = node; arch_register_req_t const *const req = arch_get_irn_register_req(value); if (req->cls != cls) continue; if ((((req)->type & (arch_register_req_type_ignore)) != 0)) continue; congruence_def(&live_nodes, value, req); } } while (0)

   ;
  be_liveness_transfer(cls, node, &live_nodes);
 }


 for (ir_node *phi = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 453, __PRETTY_FUNCTION__)), block)); !sched_is_end(phi = sched_next(phi));) {
  if (!is_Phi_(phi))
   break;

  if (!arch_irn_consider_in_reg_alloc(cls, phi))
   continue;

  int node_idx = get_irn_idx_(phi);
  node_idx = uf_find(congruence_classes, node_idx);

  int arity = get_irn_arity_(phi);
  for (int i = 0; i < arity; ++i) {
   ir_node *op = get_Phi_pred_(phi, i);
   int op_idx = get_irn_idx_(op);
   op_idx = uf_find(congruence_classes, op_idx);


   _Bool interferes = 0;
   for (_Bool live__once = 1; live__once;) for (ir_nodeset_iterator_t iter; live__once;) for (ir_node *live; live__once; live__once = 0) for (ir_nodeset_iterator_init(&iter, &live_nodes); (live = ir_nodeset_iterator_next(&iter));) {
    int lv_idx = get_irn_idx_(live);
    lv_idx = uf_find(congruence_classes, lv_idx);
    if (lv_idx == op_idx) {
     interferes = 1;
     break;
    }
   }

   if (interferes)
    continue;

   for (ir_node *phi = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 483, __PRETTY_FUNCTION__)), block)); !sched_is_end(phi = sched_next(phi));) {
    ir_node *oop;
    int oop_idx;
    if (!is_Phi_(phi))
     break;
    if (!arch_irn_consider_in_reg_alloc(cls, phi))
     continue;
    oop = get_Phi_pred_(phi, i);
    if (oop == op)
     continue;
    oop_idx = get_irn_idx_(oop);
    oop_idx = uf_find(congruence_classes, oop_idx);
    if (oop_idx == op_idx) {
     interferes = 1;
     break;
    }
   }
   if (interferes)
    continue;


   int old_node_idx = node_idx;
   node_idx = uf_union(congruence_classes, node_idx, op_idx);
   _firm_dbg_print (dbg, LEVEL_3, "Merge %+F and %+F congruence classes\n", phi, op)
                ;

   old_node_idx = node_idx == old_node_idx ? op_idx : old_node_idx;
   allocation_info_t *head_info
    = get_value_info(get_idx_irn_(irg, node_idx));
   allocation_info_t *other_info
    = get_value_info(get_idx_irn_(irg, old_node_idx));
   for (unsigned r = 0; r < n_regs; ++r) {
    head_info->prefs[r] += other_info->prefs[r];
   }
  }
 }
 ir_nodeset_destroy(&live_nodes);
}

static void set_congruence_prefs(ir_node *node, void *data)
{
 (void) data;
 unsigned node_idx = get_irn_idx_(node);
 unsigned node_set = uf_find(congruence_classes, node_idx);


 if (node_set == node_idx)
  return;

 if (!arch_irn_consider_in_reg_alloc(cls, node))
  return;

 ir_node *head = get_idx_irn_(irg, node_set);
 allocation_info_t *head_info = get_value_info(head);
 allocation_info_t *info = get_value_info(node);

 memcpy(info->prefs, head_info->prefs, n_regs * sizeof(info->prefs[0]));
}

static void combine_congruence_classes(void)
{
 size_t n = get_irg_last_idx(irg);
 congruence_classes = ((int*)xmalloc(sizeof(int) * (n)));
 uf_init(congruence_classes, n);


 irg_block_walk_graph(irg, create_congruence_class, ((void *)0), ((void *)0));

 irg_walk_graph(irg, set_congruence_prefs, ((void *)0), ((void *)0));
 free(congruence_classes);
}

static void use_reg_value(ir_node *value, const arch_register_t *reg)
{
 arch_set_irn_register(value, reg);
 unsigned r = arch_register_get_index(reg);
 assignments[r] = value;
}

static void use_reg(ir_node *node, unsigned pos, const arch_register_t *reg,
                    ir_node *value)
{
 arch_set_irn_register_out(node, pos, reg);
 unsigned r = reg->index;
 assignments[r] = value;
}

static void free_reg_of_value(ir_node *node)
{
 if (!arch_irn_consider_in_reg_alloc(cls, node))
  return;

 const arch_register_t *reg = arch_get_irn_register(node);
 unsigned r = reg->index;
 ((assignments[r] == node || assignments[r] == ((void *)0)) ? (void) (0) : __assert_fail ("assignments[r] == node || assignments[r] == ((void *)0)", "ir/be/beprefalloc.c", 577, __PRETTY_FUNCTION__));
 assignments[r] = ((void *)0);
}




static int compare_reg_pref(const void *e1, const void *e2)
{
 const reg_pref_t *rp1 = (const reg_pref_t*) e1;
 const reg_pref_t *rp2 = (const reg_pref_t*) e2;
 if (rp1->pref < rp2->pref)
  return 1;
 if (rp1->pref > rp2->pref)
  return -1;
 return 0;
}

static void fill_sort_candidates(reg_pref_t *regprefs,
                                 const allocation_info_t *info)
{
 for (unsigned r = 0; r < n_regs; ++r) {
  float pref = info->prefs[r];
  regprefs[r].num = r;
  regprefs[r].pref = pref;
 }

 qsort(regprefs, n_regs, sizeof(regprefs[0]), compare_reg_pref);
}

static _Bool try_optimistic_split(ir_node *to_split, ir_node *before,
                                 float pref, float pref_delta,
                                 unsigned *forbidden_regs, int recursion)
{
 (void) pref;
 unsigned r = 0;
 allocation_info_t *info = get_value_info(to_split);
 float delta = 0;




 ir_node *original_insn = skip_Proj(info->original_value);
 if (arch_get_irn_flags(original_insn) & arch_irn_flags_dont_spill)
  return 0;

 const arch_register_t *from_reg = arch_get_irn_register(to_split);
 unsigned from_r = from_reg->index;
 ir_node *block = get_nodes_block_(before);
 float split_threshold = (float)get_block_execfreq(block) * 1.0f;

 if (pref_delta < split_threshold*0.5)
  return 0;


 reg_pref_t *prefs = ((reg_pref_t*)__builtin_alloca (sizeof(reg_pref_t) * (n_regs)));
 fill_sort_candidates(prefs, info);
 unsigned i;
 for (i = 0; i < n_regs; ++i) {


  r = prefs[i].num;
  if (!rbitset_is_set(normal_regs, r))
   continue;
  if (rbitset_is_set(forbidden_regs, r))
   continue;
  if (r == from_r)
   continue;


  delta = pref_delta + prefs[i].pref;
  if (delta < split_threshold) {
   _firm_dbg_print (dbg, LEVEL_3, "Not doing optimistical split of %+F (depth %d), win %f too low\n", to_split, recursion, delta)
                                ;
   return 0;
  }


  if (assignments[r] == ((void *)0))
   break;


  if (recursion+1 > 0)
   continue;

  float apref = prefs[i].pref;
  float apref_delta = i+1 < n_regs ? apref - prefs[i+1].pref : 0;
  apref_delta += pref_delta - split_threshold;



  _Bool old_source_state = rbitset_is_set(forbidden_regs, from_r);
  rbitset_set(forbidden_regs, from_r);

  _Bool res = try_optimistic_split(assignments[r], before, apref,
                                apref_delta, forbidden_regs, recursion+1);

  if (old_source_state) {
   rbitset_set(forbidden_regs, from_r);
  } else {
   rbitset_clear(forbidden_regs, from_r);
  }

  if (res)
   break;
 }
 if (i >= n_regs)
  return 0;

 const arch_register_t *reg = arch_register_for_index(cls, r);
 ir_node *copy = be_new_Copy(block, to_split);
 mark_as_copy_of(copy, to_split);

 if (assignments[from_reg->index] == to_split)
  free_reg_of_value(to_split);
 use_reg_value(copy, reg);
 sched_add_before(before, copy);

 _firm_dbg_print (dbg, LEVEL_3, "Optimistic live-range split %+F move %+F(%s) -> %s before %+F (win %f, depth %d)\n", copy, to_split, from_reg->name, reg->name, before, delta, recursion)

                                                                          ;
 return 1;
}

static _Bool is_aligned(unsigned num, unsigned alignment)
{
 unsigned mask = alignment-1;
 ((is_po2(alignment)) ? (void) (0) : __assert_fail ("is_po2(alignment)", "ir/be/beprefalloc.c", 704, __PRETTY_FUNCTION__));
 return (num&mask) == 0;
}

static void add_should_be_same_bonus(ir_node *node,
 const arch_register_req_t *req, allocation_info_t *info)
{
 if (!(((req)->type & (arch_register_req_type_should_be_same)) != 0)) {
  return;

 ir_node *block = get_nodes_block_(node);
 float weight = (float)get_block_execfreq(block);

 int arity = get_irn_arity_(node);
 ((arity <= (int) sizeof(req->other_same) * 8) ? (void) (0) : __assert_fail ("arity <= (int) sizeof(req->other_same) * 8", "ir/be/beprefalloc.c", 718, __PRETTY_FUNCTION__));
 for (int i = 0; i < arity; ++i) {
  if (!rbitset_is_set(&req->other_same, i))
   continue;

  ir_node *in = get_irn_n_(node, i);
  const arch_register_t *reg = arch_get_irn_register(in);
  unsigned reg_index = arch_register_get_index(reg);



  if (assignments[reg_index] == in)
   continue;

  info->prefs[reg_index] += weight * 0.5f;
 }
}

static ir_node *get_out_value(ir_node *node, unsigned out_pos)
{
 if (get_irn_mode_(node) != mode_T)
  return node;

 for (ir_edge_t const *edge = get_irn_out_edge_first_kind(node, EDGE_KIND_NORMAL); edge; edge = get_irn_out_edge_next_(node, edge, EDGE_KIND_NORMAL)) {
  ir_node *proj = get_edge_src_irn_(edge);
  if (!is_Proj_(proj))
   continue;
  if (get_Proj_proj_(proj) == (long)out_pos)
   return proj;
 }
 return ((void *)0);
}

static void assign_registers(ir_node *node, unsigned *forbidden_regs)
{
 node_info_t *node_info = get_node_info(node);

 ((!is_Phi_(node)) ? (void) (0) : __assert_fail ("!is_Phi_(node)", "ir/be/beprefalloc.c", 755, __PRETTY_FUNCTION__));
 unsigned n_outs = arch_get_irn_n_outs(node);
 for (unsigned o = 0; o < n_outs; ++o) {

  const arch_register_req_t *req = arch_get_irn_register_req_out(node, o);
  if (req->cls != cls)
   continue;

  ir_node *value = get_out_value(node, o);
  allocation_info_t *info = get_out_alloc_info(node_info, o);
  if (info->original_value == ((void *)0)) {
   info->current_value = value;
   info->original_value = value;
  }


  const arch_register_t *reg = arch_get_irn_register_out(node, o);
  if (reg != ((void *)0)) {
   _firm_dbg_print (dbg, LEVEL_2, "Preassignment %+F:%u -> %s\n", node, o, reg->name)
                  ;
   use_reg(node, o, reg, value);
   continue;
  }

  ((! (req->type & arch_register_req_type_ignore)) ? (void) (0) : __assert_fail ("! (req->type & arch_register_req_type_ignore)", "ir/be/beprefalloc.c", 779, __PRETTY_FUNCTION__));


  add_should_be_same_bonus(node, req, info);


  _firm_dbg_print (dbg, LEVEL_2, "Candidates for %+F(out %u):", node, o);
  reg_pref_t *reg_prefs = ((reg_pref_t*)__builtin_alloca (sizeof(reg_pref_t) * (n_regs)));
  fill_sort_candidates(reg_prefs, info);
  for (unsigned r = 0; r < n_regs; ++r) {
   unsigned num = reg_prefs[r].num;
   if (!rbitset_is_set(normal_regs, num))
    continue;
   const arch_register_t *reg = arch_register_for_index(cls, num);
   _firm_dbg_print (dbg, LEVEL_2, " %s(%f)", reg->name, reg_prefs[r].pref);
  }
  _firm_dbg_print (dbg, LEVEL_2, "\n");

  const unsigned *allowed_regs = normal_regs;
  if (req->type & arch_register_req_type_limited) {
   allowed_regs = req->limited;
  }

  unsigned final_reg_index = 0;
  unsigned width = req->width;
  unsigned r;
  for (r = 0; r < n_regs; ++r) {
   final_reg_index = reg_prefs[r].num;
   if (!rbitset_is_set(allowed_regs, final_reg_index))
    continue;

   if (width > 1) {
    if (!is_aligned(final_reg_index,width))
     continue;
    _Bool fine = 1;
    for (unsigned r0 = r+1; r0 < r+width; ++r0) {
     if (assignments[r0] != ((void *)0))
      fine = 0;
    }

    if (!fine)
     continue;
   }

   if (assignments[final_reg_index] == ((void *)0))
    break;
   float pref = reg_prefs[r].pref;
   float delta = r+1 < n_regs ? pref - reg_prefs[r+1].pref : 0;
   ir_node *before = skip_Proj(node);
   _Bool res
    = try_optimistic_split(assignments[final_reg_index], before,
                           pref, delta, forbidden_regs, 0);
   if (res)
    break;
  }
  if (r >= n_regs) {


   panic("ir/be/beprefalloc.c", 837, __func__, "No register left for %+F\n", node);
  }

  for (unsigned i = 0; i < width; ++i) {
   const arch_register_t *final_reg
    = arch_register_for_index(cls, final_reg_index+i);
   _firm_dbg_print (dbg, LEVEL_2, "Assign %+F -> %s\n", node, final_reg->name);
   if (i > 0) {
    value = get_out_value(node, o+i);
    allocation_info_t *info = get_out_alloc_info(node_info, o+i);
    if (info->original_value == ((void *)0)) {
     info->current_value = value;
     info->original_value = value;
    }
   }
   use_reg(node, o+i, final_reg, value);
  }
 }
}
# 891 "ir/be/beprefalloc.c"
static void permute_values(ir_nodeset_t *live_nodes, ir_node *before,
                           unsigned *permutation)
{
 unsigned *n_used = ((unsigned*)memset((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)), 0, sizeof(unsigned) * (n_regs)));


 for (unsigned r = 0; r < n_regs; ++r) {
  unsigned old_reg = permutation[r];
  ir_node *value;

  value = assignments[old_reg];
  if (value == ((void *)0)) {


   permutation[r] = r;
   continue;
  }

  ++n_used[old_reg];
 }

 ir_node *block = get_nodes_block_(before);


 for (unsigned r = 0; r < n_regs; ) {
  unsigned old_r = permutation[r];



  if (old_r == r || n_used[r] > 0) {
   ++r;
   continue;
  }


  ir_node *src = assignments[old_r];
  ir_node *copy = be_new_Copy(block, src);
  sched_add_before(before, copy);
  const arch_register_t *reg = arch_register_for_index(cls, r);
  _firm_dbg_print (dbg, LEVEL_2, "%+F (copy %+F -> %s, before %+F)\n", copy, src, reg->name, before)
                                    ;
  mark_as_copy_of(copy, src);
  use_reg_value(copy, reg);

  if (live_nodes != ((void *)0)) {
   ir_nodeset_insert(live_nodes, copy);
  }


  ((arch_get_irn_register(src)->index == old_r) ? (void) (0) : __assert_fail ("arch_get_irn_register(src)->index == old_r", "ir/be/beprefalloc.c", 940, __PRETTY_FUNCTION__));
  permutation[r] = r;

  ((n_used[old_r] > 0) ? (void) (0) : __assert_fail ("n_used[old_r] > 0", "ir/be/beprefalloc.c", 943, __PRETTY_FUNCTION__));
  --n_used[old_r];
  if (n_used[old_r] == 0) {
   if (live_nodes != ((void *)0)) {
    ir_nodeset_remove(live_nodes, src);
   }
   free_reg_of_value(src);
  }


  if (old_r < r && n_used[old_r] == 0) {
   r = old_r;
  } else {
   ++r;
  }
 }
# 968 "ir/be/beprefalloc.c"
 for (unsigned r = 0; r < n_regs; ) {
  unsigned old_r = permutation[r];

  if (old_r == r) {
   ++r;
   continue;
  }


  ((n_used[old_r] == 1) ? (void) (0) : __assert_fail ("n_used[old_r] == 1", "ir/be/beprefalloc.c", 977, __PRETTY_FUNCTION__));


  unsigned r2 = permutation[old_r];

  ir_node *in[2] = { assignments[r2], assignments[old_r] };
  ir_node *perm = be_new_Perm(cls, block, 2, in);
  sched_add_before(before, perm);
  _firm_dbg_print (dbg, LEVEL_2, "Perm %+F (perm %+F,%+F, before %+F)\n", perm, in[0], in[1], before)
                                  ;

  ir_node *proj0 = new_r_Proj(perm, get_irn_mode_(in[0]), 0);
  mark_as_copy_of(proj0, in[0]);
  const arch_register_t *reg0 = arch_register_for_index(cls, old_r);
  use_reg_value(proj0, reg0);

  ir_node *proj1 = new_r_Proj(perm, get_irn_mode_(in[1]), 1);
  mark_as_copy_of(proj1, in[1]);
  const arch_register_t *reg1 = arch_register_for_index(cls, r2);
  use_reg_value(proj1, reg1);


  permutation[old_r] = old_r;

  permutation[r] = r2;


  if (live_nodes != ((void *)0)) {
   ir_nodeset_remove(live_nodes, in[0]);
   ir_nodeset_remove(live_nodes, in[1]);
   ir_nodeset_remove(live_nodes, proj0);
   ir_nodeset_insert(live_nodes, proj1);
  }
 }



 for (unsigned r = 0; r < n_regs; ++r) {
  ((permutation[r] == r) ? (void) (0) : __assert_fail ("permutation[r] == r", "ir/be/beprefalloc.c", 1015, __PRETTY_FUNCTION__));
 }

}







static void free_last_uses(ir_nodeset_t *live_nodes, ir_node *node)
{
 node_info_t *info = get_node_info(node);
 const unsigned *last_uses = info->last_uses;
 int arity = get_irn_arity_(node);

 for (int i = 0; i < arity; ++i) {

  if (!rbitset_is_set(last_uses, i))
   continue;

  ir_node *op = get_irn_n_(node, i);
  free_reg_of_value(op);
  ir_nodeset_remove(live_nodes, op);
 }
}




static void rewire_inputs(ir_node *node)
{
 int arity = get_irn_arity_(node);
 for (int i = 0; i < arity; ++i) {
  ir_node *op = get_irn_n_(node, i);
  allocation_info_t *info = try_get_value_info(op);
  if (info == ((void *)0))
   continue;

  info = get_value_info(info->original_value);
  if (info->current_value != op) {
   set_irn_n(node, i, info->current_value);
  }
 }
}





static void determine_live_through_regs(unsigned *bitset, ir_node *node)
{
 const node_info_t *info = get_node_info(node);
 const unsigned *last_uses = info->last_uses;


 for (unsigned r = 0; r < n_regs; ++r) {
  if (assignments[r] == ((void *)0))
   continue;
  if (!rbitset_is_set(normal_regs, r))
   continue;

  rbitset_set(bitset, r);
 }


 int arity = get_irn_arity_(node);
 for (int i = 0; i < arity; ++i) {
  if (!rbitset_is_set(last_uses, i))
   continue;

  ir_node *op = get_irn_n_(node, i);
  const arch_register_t *reg = arch_get_irn_register(op);
  rbitset_clear(bitset, reg->index);
 }
}

static void solve_lpp(ir_nodeset_t *live_nodes, ir_node *node,
                      unsigned *forbidden_regs, unsigned *live_through_regs)
{
 unsigned *forbidden_edges = rbitset_malloc(n_regs * n_regs);
 int *lpp_vars = ((int*)memset(xmalloc(sizeof(int) * (n_regs*n_regs)), 0, sizeof(int) * (n_regs*n_regs)));

 lpp_t *lpp = lpp_new("prefalloc", lpp_minimize);

 lpp_set_log(lpp, stdout);


 do { for (int i_ = 0, n_ = get_irn_arity_(node); i_ < n_; ++i_) { const arch_register_req_t *req = arch_get_irn_register_req_in(node, i_); if (req->cls != cls) continue; ir_node *op = get_irn_n_(node, i_); const arch_register_req_t *op_req = arch_get_irn_register_req(op); if (op_req->type & arch_register_req_type_ignore) continue; if (!(((req)->type & (arch_register_req_type_limited)) != 0)) continue; const unsigned *limited = req->limited; const arch_register_t *reg = arch_get_irn_register(op); unsigned current_reg = reg->index; for (unsigned r = 0; r < n_regs; ++r) { if (rbitset_is_set(limited, r)) continue; rbitset_set(forbidden_edges, current_reg*n_regs + r); } } } while (0)
# 1117 "ir/be/beprefalloc.c"
  ;


 for (unsigned l = 0; l < n_regs; ++l) {
  if (!rbitset_is_set(normal_regs, l)) {
   char name[15];
   snprintf(name, sizeof(name), "%u_to_%u", l, l);
   lpp_vars[l*n_regs+l] = lpp_add_var(lpp, name, lpp_binary, 1);
   continue;
  }

  for (unsigned r = 0; r < n_regs; ++r) {
   if (!rbitset_is_set(normal_regs, r))
    continue;
   if (rbitset_is_set(forbidden_edges, l*n_regs + r))
    continue;

   if (rbitset_is_set(live_through_regs, l)
       && rbitset_is_set(forbidden_regs, r))
    continue;

   char name[15];
   snprintf(name, sizeof(name), "%u_to_%u", l, r);

   double costs = l==r ? 9 : 8;
   lpp_vars[l*n_regs+r]
    = lpp_add_var(lpp, name, lpp_binary, costs);
   ((lpp_vars[l*n_regs+r] > 0) ? (void) (0) : __assert_fail ("lpp_vars[l*n_regs+r] > 0", "ir/be/beprefalloc.c", 1144, __PRETTY_FUNCTION__));
  }
 }

 for (unsigned l = 0; l < n_regs; ++l) {

  int constraint = -1;
  for (unsigned r = 0; r < n_regs; ++r) {
   int var = lpp_vars[l*n_regs+r];
   if (var == 0)
    continue;
   if (constraint < 0) {
    char name[64];
    snprintf(name, sizeof(name), "%u_to_dest", l);
    constraint = lpp_add_cst(lpp, name, lpp_equal, 1);
   }
   lpp_set_factor_fast(lpp, constraint, var, 1);
  }

  constraint = -1;
  for (unsigned r = 0; r < n_regs; ++r) {
   int var = lpp_vars[r*n_regs+l];
   if (var == 0)
    continue;
   if (constraint < 0) {
    char name[64];
    snprintf(name, sizeof(name), "one_to_%u", l);
    constraint = lpp_add_cst(lpp, name, lpp_less_equal, 1);
   }
   lpp_set_factor_fast(lpp, constraint, var, 1);
  }
 }

 lpp_dump_plain(lpp, fopen("lppdump.txt", "w"));


 lpp_solve(lpp, be_options.ilp_server, be_options.ilp_solver);
 if (!lpp_is_sol_valid(lpp))
  panic("ir/be/beprefalloc.c", 1182, __func__, "ilp solution not valid!");

 unsigned *assignment = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
 for (unsigned l = 0; l < n_regs; ++l) {
  unsigned dest_reg = (unsigned)-1;
  for (unsigned r = 0; r < n_regs; ++r) {
   int var = lpp_vars[l*n_regs+r];
   if (var == 0)
    continue;
   double val = lpp_get_var_sol(lpp, var);
   if (val == 1) {
    ((dest_reg == (unsigned)-1) ? (void) (0) : __assert_fail ("dest_reg == (unsigned)-1", "ir/be/beprefalloc.c", 1193, __PRETTY_FUNCTION__));
    dest_reg = r;
   }
  }
  ((dest_reg != (unsigned)-1) ? (void) (0) : __assert_fail ("dest_reg != (unsigned)-1", "ir/be/beprefalloc.c", 1197, __PRETTY_FUNCTION__));
  assignment[dest_reg] = l;
 }

 fprintf(stderr, "Assignment: ");
 for (unsigned l = 0; l < n_regs; ++l) {
  fprintf(stderr, "%u ", assignment[l]);
 }
 fprintf(stderr, "\n");
 fflush(stdout);
 permute_values(live_nodes, node, assignment);
 lpp_free(lpp);
}

static void enforce_constraints_aliasregs(ir_nodeset_t *live_nodes,
 ir_node *node, unsigned *forbidden_regs, unsigned *live_through_regs,
 unsigned max_width)
{
 ((is_po2(max_width)) ? (void) (0) : __assert_fail ("is_po2(max_width)", "ir/be/beprefalloc.c", 1215, __PRETTY_FUNCTION__));
 (((n_regs % max_width) == 0) ? (void) (0) : __assert_fail ("(n_regs % max_width) == 0", "ir/be/beprefalloc.c", 1216, __PRETTY_FUNCTION__));
 unsigned width_log = ntz(max_width);

 unsigned *assignment = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
 _Bool *assigned_inputs = ((_Bool*)memset((_Bool*)__builtin_alloca (sizeof(_Bool) * (n_regs)), 0, sizeof(_Bool) * (n_regs)));
 for (unsigned r = 0; r < n_regs; ++r) {
  assignment[r] = (unsigned)-1;
 }

 for (unsigned width = max_width; width >= 1; width /= 2, width_log--) {
  unsigned size = n_regs >> width_log;

  hungarian_problem_t *bp
   = hungarian_new(size, size, HUNGARIAN_MATCH_PERFECT);


  for (unsigned l = 0; l < size; ++l) {
   unsigned ls = l << width_log;
   _Bool is_normal = 1;
   for (unsigned l0 = ls; l0 < ls+width; ++l0) {
    if (!rbitset_is_set(normal_regs, l)) {
     is_normal = 0;
     break;
    }
   }

   if (!is_normal) {
    hungarian_add(bp, l, l, n_regs);
    continue;
   }


   if (assigned_inputs[ls]) {
    ((assignment[ls] % width == 0) ? (void) (0) : __assert_fail ("assignment[ls] % width == 0", "ir/be/beprefalloc.c", 1249, __PRETTY_FUNCTION__));
    hungarian_add(bp, assignment[ls] >> width_log, l, n_regs);
    continue;
   }

   for (unsigned r = 0; r < size; ++r) {
    for (unsigned r0 = r<<width_log; r0 < r+width; ++r0) {
     if (!rbitset_is_set(normal_regs, r0))
      goto noadd;

     for (unsigned l0 = l<<width_log; l0 < l+width; ++l0) {
      if (rbitset_is_set(live_through_regs, l0)
          && rbitset_is_set(forbidden_regs, r0))
          goto noadd;
     }
    }

    hungarian_add(bp, r, l, l == r ? n_regs+2 : n_regs+1);
noadd:;
   }
  }


  int arity = get_irn_arity_(node);
  for (int i = 0; i < arity; ++i) {
   const arch_register_req_t *req
    = arch_get_irn_register_req_in(node, i);
   if (req->cls != cls)
    continue;
   if (req->width != width) {
    i += req->width - 1;
    continue;
   }

   const unsigned *limited
    = req->type & arch_register_req_type_limited
    ? req->limited : ((void *)0);
   for (unsigned w = 0; w < width; ++w) {
    const ir_node *op = get_irn_n_(node, i+w);
    const arch_register_t *reg = arch_get_irn_register(op);
    unsigned current_reg = arch_register_get_index(reg);
    assigned_inputs[current_reg] = 1;

    if (limited == ((void *)0))
     continue;

    for (unsigned r = 0; r < n_regs; r += width) {
     if (rbitset_is_set(limited, r))
      continue;
     hungarian_remove(bp, r>>width_log, current_reg>>width_log);
    }
   }
  }

  hungarian_print_cost_matrix(bp, 2);
  hungarian_prepare_cost_matrix(bp, HUNGARIAN_MODE_MAXIMIZE_UTIL);

  unsigned *partial_assignment = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
  int res = hungarian_solve(bp, partial_assignment, ((void *)0), 0);
  ((res == 0) ? (void) (0) : __assert_fail ("res == 0", "ir/be/beprefalloc.c", 1308, __PRETTY_FUNCTION__));


  for (unsigned l = 0; l < size; ++l) {
   unsigned b = l << width_log;
   unsigned a = partial_assignment[l] << width_log;
   for (unsigned r0 = 0; r0 < width; ++r0) {
    assignment[b+r0] = a + r0;
   }
  }

  hungarian_free(bp);
 }
 permute_values(live_nodes, node, assignment);
}







static void enforce_constraints(ir_nodeset_t *live_nodes, ir_node *node,
                                unsigned *forbidden_regs)
{


 unsigned max_width = 1;
 unsigned width_left = 0;
 unsigned next_reg = 0;
 _Bool double_width = 0;
 _Bool good = 1;
 do { for (int i_ = 0, n_ = get_irn_arity_(node); i_ < n_; ++i_) { const arch_register_req_t *req = arch_get_irn_register_req_in(node, i_); if (req->cls != cls) continue; ir_node *op = get_irn_n_(node, i_); const arch_register_req_t *op_req = arch_get_irn_register_req(op); if (op_req->type & arch_register_req_type_ignore) continue; unsigned width = req->width; if (width > max_width) max_width = width; if (!good) { continue; } const arch_register_t *reg = arch_get_irn_register(op); unsigned reg_index = arch_register_get_index(reg); if (width > 1) { ((width_left == 0) ? (void) (0) : __assert_fail ("width_left == 0", "ir/be/beprefalloc.c", 1380, __PRETTY_FUNCTION__)); if (!is_aligned(reg_index, req->width)) { good = 0; continue; } width_left = width-1; next_reg = reg_index+1; } else if (width_left > 0) { if (reg_index != next_reg) { good = 0; continue; } next_reg++; width_left--; } if (!(((req)->type & (arch_register_req_type_limited)) != 0)) continue; const unsigned *limited = req->limited; if (!rbitset_is_set(limited, reg_index)) { good = 0; continue; } } } while (0)
# 1380 "ir/be/beprefalloc.c"
  ;


 unsigned *live_through_regs = ((void *)0);
 unsigned n_outs = arch_get_irn_n_outs(node);
 for (unsigned o = 0; o < n_outs; ++o) {
  const arch_register_req_t *req = arch_get_irn_register_req_out(node, o);
  if (req->cls != cls)
   continue;
  if (req->width > max_width)
   max_width = req->width;
  if (!(((req)->type & (arch_register_req_type_limited)) != 0))
   continue;
  if (live_through_regs == ((void *)0)) {
   live_through_regs = ((unsigned*)memset(__builtin_alloca ((((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))), 0, (((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))));
   determine_live_through_regs(live_through_regs, node);
  }
  rbitset_or(forbidden_regs, req->limited, n_regs);
  if (rbitsets_have_common(req->limited, live_through_regs, n_regs))
   good = 0;
 }

 if (good)
  return;


 if (live_through_regs == ((void *)0)) {
  live_through_regs = ((unsigned*)memset(__builtin_alloca ((((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))), 0, (((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))));
 }

 if (max_width > 1) {




  (void)solve_lpp;
  enforce_constraints_aliasregs(live_nodes, node, forbidden_regs,
                                live_through_regs, max_width);

  return;
 }







 hungarian_problem_t *bp
  = hungarian_new(n_regs, n_regs, HUNGARIAN_MATCH_PERFECT);


 for (unsigned l = 0; l < n_regs; ++l) {
  if (!rbitset_is_set(normal_regs, l)) {
   hungarian_add(bp, l, l, 1);
   continue;
  }

  for (unsigned r = 0; r < n_regs; ++r) {
   if (!rbitset_is_set(normal_regs, r))
    continue;

   if (rbitset_is_set(live_through_regs, l)
     && rbitset_is_set(forbidden_regs, r))
    continue;

   hungarian_add(bp, r, l, l == r ? n_regs+1 : n_regs);
  }
 }

 do { for (int i_ = 0, n_ = get_irn_arity_(node); i_ < n_; ++i_) { const arch_register_req_t *req = arch_get_irn_register_req_in(node, i_); if (req->cls != cls) continue; ir_node *op = get_irn_n_(node, i_); const arch_register_req_t *op_req = arch_get_irn_register_req(op); if (op_req->type & arch_register_req_type_ignore) continue; if (!(((req)->type & (arch_register_req_type_limited)) != 0)) continue; const unsigned *limited = req->limited; const arch_register_t *reg = arch_get_irn_register(op); unsigned current_reg = reg->index; for (unsigned r = 0; r < n_regs; ++r) { if (rbitset_is_set(limited, r)) continue; hungarian_remove(bp, r, current_reg); } } } while (0)
# 1462 "ir/be/beprefalloc.c"
  ;


 hungarian_prepare_cost_matrix(bp, HUNGARIAN_MODE_MAXIMIZE_UTIL);

 unsigned *assignment = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
 int res = hungarian_solve(bp, assignment, ((void *)0), 0);
 (void)res;
 ((res == 0) ? (void) (0) : __assert_fail ("res == 0", "ir/be/beprefalloc.c", 1470, __PRETTY_FUNCTION__));

 hungarian_free(bp);

 permute_values(live_nodes, node, assignment);
}


static _Bool is_copy_of(ir_node *value, ir_node *test_value)
{
 if (value == test_value)
  return 1;

 allocation_info_t *info = get_value_info(value);
 allocation_info_t *test_info = get_value_info(test_value);
 return test_info->original_value == info->original_value;
}






static int find_value_in_block_info(block_info_t *info, ir_node *value)
{
 ir_node * *end_assignments = info->assignments;
 for (unsigned r = 0; r < n_regs; ++r) {
  ir_node *a_value = end_assignments[r];

  if (a_value == ((void *)0))
   continue;
  if (is_copy_of(a_value, value))
   return (int) r;
 }

 return -1;
}





static void add_phi_permutations(ir_node *block, int p)
{
 ir_node *pred = get_Block_cfgpred_block_(block, p);
 block_info_t *pred_info = get_block_info(pred);


 if (!pred_info->processed)
  return;

 unsigned *permutation = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
 for (unsigned r = 0; r < n_regs; ++r) {
  permutation[r] = r;
 }


 _Bool need_permutation = 0;
 ir_node *phi = sched_first(block);
 for ( ; is_Phi_(phi); phi = sched_next(phi)) {
  if (!arch_irn_consider_in_reg_alloc(cls, phi))
   continue;

  ir_node *phi_pred = get_Phi_pred_(phi, p);
  int a = find_value_in_block_info(pred_info, phi_pred);
  ((a >= 0) ? (void) (0) : __assert_fail ("a >= 0", "ir/be/beprefalloc.c", 1535, __PRETTY_FUNCTION__));

  const arch_register_t *reg = arch_get_irn_register(phi);
  int regn = reg->index;

  if (regn == a)
   continue;

  ir_node *op = pred_info->assignments[a];
  const arch_register_t *op_reg = arch_get_irn_register(op);

  if (op_reg->type & arch_register_type_virtual)
   continue;

  permutation[regn] = a;
  need_permutation = 1;
 }

 if (need_permutation) {

  ir_node * *old_assignments = assignments;
  assignments = pred_info->assignments;
  permute_values(((void *)0), be_get_end_of_block_insertion_point(pred),
                 permutation);
  assignments = old_assignments;
 }


 phi = sched_first(block);
 for ( ; is_Phi_(phi); phi = sched_next(phi)) {
  if (!arch_irn_consider_in_reg_alloc(cls, phi))
   continue;




  int a = arch_get_irn_register(phi)->index;
  ir_node *op = pred_info->assignments[a];
  set_Phi_pred_(phi, p, op);
 }
}





static void adapt_phi_prefs(ir_node *phi)
{
 ir_node *block = get_nodes_block_(phi);
 allocation_info_t *info = get_value_info(phi);

 int arity = get_irn_arity_(phi);
 for (int i = 0; i < arity; ++i) {
  ir_node *op = get_irn_n_(phi, i);
  const arch_register_t *reg = arch_get_irn_register(op);

  if (reg == ((void *)0))
   continue;



  ir_node *pred_block = get_Block_cfgpred_block_(block, i);
  block_info_t *pred_block_info = get_block_info(pred_block);
  if (!pred_block_info->processed)
   continue;


  float weight = (float)get_block_execfreq(pred_block);
  info->prefs[reg->index] += weight * 1.0f;
 }
}





static void propagate_phi_register(ir_node *phi, unsigned assigned_r)
{
 ir_node *block = get_nodes_block_(phi);

 int arity = get_irn_arity_(phi);
 for (int i = 0; i < arity; ++i) {
  ir_node *op = get_Phi_pred_(phi, i);
  allocation_info_t *info = get_value_info(op);
  ir_node *pred_block = get_Block_cfgpred_block_(block, i);
  float weight
   = (float)get_block_execfreq(pred_block) * 1.0f;

  if (info->prefs[assigned_r] >= weight)
   continue;


  for (unsigned r = 0; r < n_regs; ++r) {
   if (info->prefs[r] > -weight) {
    info->prefs[r] = -weight;
   }
  }
  info->prefs[assigned_r] = weight;

  if (is_Phi_(op))
   propagate_phi_register(op, assigned_r);
 }
}

static void assign_phi_registers(ir_node *block)
{

 int n_phis = 0;
 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 1643, __PRETTY_FUNCTION__)), block)); !sched_is_end(node = sched_next(node));) {
  if (!is_Phi_(node))
   break;
  if (!arch_irn_consider_in_reg_alloc(cls, node))
   continue;
  ++n_phis;
 }

 if (n_phis == 0)
  return;


 hungarian_problem_t *bp
  = hungarian_new(n_phis, n_regs, HUNGARIAN_MATCH_PERFECT);
 int n = 0;
 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 1658, __PRETTY_FUNCTION__)), block)); !sched_is_end(node = sched_next(node));) {
  if (!is_Phi_(node))
   break;
  if (!arch_irn_consider_in_reg_alloc(cls, node))
   continue;


  adapt_phi_prefs(node);

  allocation_info_t *info = get_value_info(node);
  _firm_dbg_print (dbg, LEVEL_3, "Prefs for %+F: ", node);
  for (unsigned r = 0; r < n_regs; ++r) {
   if (!rbitset_is_set(normal_regs, r))
    continue;

   float costs = info->prefs[r];
   costs = costs < 0 ? -logf(-costs+1) : logf(costs+1);
   costs *= 100;
   costs += 10000;
   hungarian_add(bp, n, r, (int)costs);
   _firm_dbg_print (dbg, LEVEL_3, " %s(%f)", arch_register_for_index(cls, r)->name, info->prefs[r])
                      ;
  }
  _firm_dbg_print (dbg, LEVEL_3, "\n");
  ++n;
 }


 hungarian_prepare_cost_matrix(bp, HUNGARIAN_MODE_MAXIMIZE_UTIL);

 unsigned *assignment = ((unsigned*)__builtin_alloca (sizeof(unsigned) * (n_regs)));
 int res = hungarian_solve(bp, assignment, ((void *)0), 0);
 (void)res;
 ((res == 0) ? (void) (0) : __assert_fail ("res == 0", "ir/be/beprefalloc.c", 1691, __PRETTY_FUNCTION__));


 n = 0;
 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 1695, __PRETTY_FUNCTION__)), block)); !sched_is_end(node = sched_next(node));) {
  if (!is_Phi_(node))
   break;
  if (!arch_irn_consider_in_reg_alloc(cls, node))
   continue;

  unsigned r = assignment[n++];
  ((rbitset_is_set(normal_regs, r)) ? (void) (0) : __assert_fail ("rbitset_is_set(normal_regs, r)", "ir/be/beprefalloc.c", 1702, __PRETTY_FUNCTION__));
  const arch_register_t *reg = arch_register_for_index(cls, r);
  _firm_dbg_print (dbg, LEVEL_2, "Assign %+F -> %s\n", node, reg->name);
  use_reg_value(node, reg);


  propagate_phi_register(node, r);
 }
}





static void allocate_coalesce_block(ir_node *block, void *data)
{
 (void) data;
 _firm_dbg_print (dbg, LEVEL_2, "* Block %+F\n", block);


 block_info_t *block_info = get_block_info(block);
 assignments = block_info->assignments;

 ir_nodeset_t live_nodes;
 ir_nodeset_init(&live_nodes);


 int n_preds = get_Block_n_cfgpreds_(block);
 block_info_t * *pred_block_infos = ((block_info_t* *)__builtin_alloca (sizeof(block_info_t*) * (n_preds)));
 for (int i = 0; i < n_preds; ++i) {
  ir_node *pred = get_Block_cfgpred_block_(block, i);
  block_info_t *pred_info = get_block_info(pred);
  pred_block_infos[i] = pred_info;
 }

 ir_node * *phi_ins = ((ir_node* *)__builtin_alloca (sizeof(ir_node*) * (n_preds)));


 for (_Bool once = 1; once;) for (lv_iterator_t iter = be_lv_iteration_begin((lv), (block)); once; once = 0) for (ir_node *node; (node = be_lv_iteration_next(&iter, (be_lv_state_in))) != ((void *)0);) {
  const arch_register_req_t *req = arch_get_irn_register_req(node);
  if (req->cls != cls)
   continue;

  if ((((req)->type & (arch_register_req_type_ignore)) != 0)) {
   allocation_info_t *info = get_value_info(node);
   info->current_value = node;

   const arch_register_t *reg = arch_get_irn_register(node);
   ((reg != ((void *)0)) ? (void) (0) : __assert_fail ("reg != ((void *)0)", "ir/be/beprefalloc.c", 1750, __PRETTY_FUNCTION__));
   use_reg_value(node, reg);
   continue;
  }




  _Bool need_phi = 0;
  for (int p = 0; p < n_preds; ++p) {
   block_info_t *pred_info = pred_block_infos[p];

   if (!pred_info->processed) {

    phi_ins[p] = node;
    need_phi = 1;
   } else {
    int a = find_value_in_block_info(pred_info, node);


    ((a >= 0) ? (void) (0) : __assert_fail ("a >= 0", "ir/be/beprefalloc.c", 1770, __PRETTY_FUNCTION__));
    phi_ins[p] = pred_info->assignments[a];

    if (p > 0 && phi_ins[p-1] != phi_ins[p]) {
     need_phi = 1;
    }
   }
  }

  if (need_phi) {
   ir_mode *mode = cls->mode;
   const arch_register_req_t *phi_req = cls->class_req;
   ir_node *phi = be_new_Phi(block, n_preds, phi_ins, mode, phi_req);

   _firm_dbg_print (dbg, LEVEL_3, "Create Phi %+F (for %+F) -", phi, node);

   for (int pi = 0; pi < n_preds; ++pi) {
    _firm_dbg_print (dbg, LEVEL_3, " %+F", phi_ins[pi]);
   }
   _firm_dbg_print (dbg, LEVEL_3, "\n");

   mark_as_copy_of(phi, node);
   sched_add_after(block, phi);

   node = phi;
  } else {
   allocation_info_t *info = get_value_info(node);
   info->current_value = phi_ins[0];




   node = phi_ins[0];
  }


  const arch_register_t *reg = arch_get_irn_register(node);
  if (reg != ((void *)0)) {
   use_reg_value(node, reg);
  }


  ir_nodeset_insert(&live_nodes, node);
 }


 unsigned *const forbidden_regs = ((unsigned*)memset(__builtin_alloca ((((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))), 0, (((n_regs+(sizeof(unsigned) * 8)-1)/(sizeof(unsigned) * 8)) * sizeof(unsigned))));


 assign_phi_registers(block);



 for (_Bool node__once = 1; node__once;) for (ir_nodeset_iterator_t iter; node__once;) for (ir_node *node; node__once; node__once = 0) for (ir_nodeset_iterator_init(&iter, &live_nodes); (node = ir_nodeset_iterator_next(&iter));) {
  const arch_register_t *reg = arch_get_irn_register(node);
  ((reg != ((void *)0)) ? (void) (0) : __assert_fail ("reg != ((void *)0)", "ir/be/beprefalloc.c", 1825, __PRETTY_FUNCTION__));
 }



 for (ir_node *node = ((((is_Block_(block)) ? (void) (0) : __assert_fail ("is_Block_(block)", "ir/be/beprefalloc.c", 1830, __PRETTY_FUNCTION__)), block)); !sched_is_end(node = sched_next(node));) {

  if (is_Phi_(node))
   continue;

  rewire_inputs(node);


  rbitset_clear_all(forbidden_regs, n_regs);
  enforce_constraints(&live_nodes, node, forbidden_regs);

  rewire_inputs(node);


  do { for (int i_ = 0, n_ = get_irn_arity_(node); i_ < n_; ++i_) { const arch_register_req_t *in_req = arch_get_irn_register_req_in(node, i_); if (in_req->cls != cls) continue; ir_node *op = get_irn_n_(node, i_); const arch_register_req_t *op_req = arch_get_irn_register_req(op); if (op_req->type & arch_register_req_type_ignore) continue; const arch_register_t *reg = arch_get_irn_register(op); rbitset_set(forbidden_regs, reg->index); } } while (0)


   ;


  free_last_uses(&live_nodes, node);


  assign_registers(node, forbidden_regs);
 }

 ir_nodeset_destroy(&live_nodes);
 assignments = ((void *)0);

 block_info->processed = 1;


 if (n_preds > 1) {
  for (int p = 0; p < n_preds; ++p) {
   add_phi_permutations(block, p);
  }
 }



 if (get_irn_n_edges_kind_(block, EDGE_KIND_BLOCK) == 1) {
  const ir_edge_t *edge
   = get_irn_out_edge_first_kind(block, EDGE_KIND_BLOCK);
  ir_node *succ = get_edge_src_irn_(edge);
  int p = get_edge_src_pos_(edge);
  block_info_t *succ_info = get_block_info(succ);

  if (succ_info->processed) {
   add_phi_permutations(succ, p);
  }
 }
}

typedef struct block_costs_t block_costs_t;
struct block_costs_t {
 float costs;
 int dfs_num;
};

static int cmp_block_costs(const void *d1, const void *d2)
{
 const ir_node * const *block1 = (const ir_node* *)d1;
 const ir_node * const *block2 = (const ir_node* *)d2;
 const block_costs_t *info1 = (const block_costs_t*)get_irn_link_(*block1);
 const block_costs_t *info2 = (const block_costs_t*)get_irn_link_(*block2);
 return (((info2->costs) > (info1->costs)) - ((info2->costs) < (info1->costs)));
}

static void determine_block_order(void)
{
 ir_node * *blocklist = be_get_cfgpostorder(irg);
 size_t n_blocks = (ir_verify_arr((blocklist)), ((ir_arr_descr *)(void *)((char *)((blocklist)) - __builtin_offsetof (ir_arr_descr, elts)))->nelts);
 int dfs_num = 0;
 pdeq *worklist = new_pdeq();
 ir_node * *order = ((ir_node* *)xmalloc(sizeof(ir_node*) * (n_blocks)));
 size_t order_p = 0;


 for (size_t p = 0; p < n_blocks; ++p) {
  ir_node *block = blocklist[p];
  set_irn_link_(block, ((void *)0));
 }




 for (size_t p = n_blocks; p > 0;) {
  block_costs_t *cost_info;
  ir_node *block = blocklist[--p];

  float execfreq = (float)get_block_execfreq(block);
  float costs = execfreq;
  int n_cfgpreds = get_Block_n_cfgpreds_(block);
  for (int p2 = 0; p2 < n_cfgpreds; ++p2) {
   ir_node *pred_block = get_Block_cfgpred_block_(block, p2);
   block_costs_t *pred_costs = (block_costs_t*)get_irn_link_(pred_block);

   if (pred_costs == ((void *)0))
    continue;
   costs += pred_costs->costs;
  }

  cost_info = ((block_costs_t*)memset(((block_costs_t*)__extension__ ({ struct obstack *__h = (((&obst))); __extension__ ({ struct obstack *__o = (__h); long int __len = ((sizeof(block_costs_t) * ((1)))); if (__o->chunk_limit - __o->next_free < __len) _obstack_newchunk (__o, __len); ((__o)->next_free += (__len)); (void) 0; }); __extension__ ({ struct obstack *__o1 = (__h); void *__value = (void *) __o1->object_base; if (__o1->next_free == __value) __o1->maybe_empty_object = 1; __o1->next_free = ((sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (((__o1->next_free) - (sizeof (long int) < sizeof (void *) ? (__o1->object_base) : (char *) 0) + (__o1->alignment_mask)) & ~(__o1->alignment_mask))); if (__o1->next_free - (char *)__o1->chunk > __o1->chunk_limit - (char *)__o1->chunk) __o1->next_free = __o1->chunk_limit; __o1->object_base = __o1->next_free; __value; }); })), 0, sizeof(block_costs_t) * (1)));
  cost_info->costs = costs;
  cost_info->dfs_num = dfs_num++;
  set_irn_link_(block, cost_info);
 }


 qsort(blocklist, n_blocks, sizeof(blocklist[0]), cmp_block_costs);

 ir_reserve_resources(irg, IR_RESOURCE_BLOCK_VISITED);
 inc_irg_block_visited_(irg);

 for (size_t p = 0; p < n_blocks; ++p) {
  ir_node *block = blocklist[p];
  if (Block_block_visited_(block))
   continue;



  do {
   block_costs_t *info = (block_costs_t*)get_irn_link_(block);
   ir_node *best_pred = ((void *)0);
   float best_costs = -1;
   int n_cfgpred = get_Block_n_cfgpreds_(block);

   pdeq_putr(worklist, block);
   mark_Block_block_visited_(block);
   for (int i = 0; i < n_cfgpred; ++i) {
    ir_node *pred_block = get_Block_cfgpred_block_(block, i);
    block_costs_t *pred_info = (block_costs_t*)get_irn_link_(pred_block);


    if (pred_info->dfs_num > info->dfs_num)
     continue;

    if (info->costs > best_costs) {
     best_costs = info->costs;
     best_pred = pred_block;
    }
   }
   block = best_pred;
  } while (block != ((void *)0) && !Block_block_visited_(block));


  while (!pdeq_empty(worklist)) {
   ir_node *pblock = (ir_node*)pdeq_getr(worklist);
   ((order_p < n_blocks) ? (void) (0) : __assert_fail ("order_p < n_blocks", "ir/be/beprefalloc.c", 1978, __PRETTY_FUNCTION__));
   order[order_p++] = pblock;
  }
 }
 ((order_p == n_blocks) ? (void) (0) : __assert_fail ("order_p == n_blocks", "ir/be/beprefalloc.c", 1982, __PRETTY_FUNCTION__));
 del_pdeq(worklist);

 ir_free_resources(irg, IR_RESOURCE_BLOCK_VISITED);

 (ir_del_arr_f((void *)(blocklist)));

 __extension__ ({ struct obstack *__o = (&obst); void *__obj = (((void *)0)); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
 _obstack_begin ((&obst), 0, 0, (void *(*) (long int)) xmalloc, (void (*) (void *)) free);

 block_order = order;
 n_block_order = n_blocks;
}

static void free_block_order(void)
{
 free(block_order);
}




static void be_pref_alloc_cls(void)
{
 be_assure_live_sets(irg);
 lv = be_get_irg_liveness(irg);

 ir_reserve_resources(irg, IR_RESOURCE_IRN_LINK);

 _firm_dbg_print (dbg, LEVEL_2, "=== Allocating registers of %s ===\n", cls->name);

 be_clear_links(irg);

 irg_block_walk_graph(irg, ((void *)0), analyze_block, ((void *)0));
 combine_congruence_classes();

 for (size_t i = 0; i < n_block_order; ++i) {
  ir_node *block = block_order[i];
  allocate_coalesce_block(block, ((void *)0));
 }

 ir_free_resources(irg, IR_RESOURCE_IRN_LINK);
}

static void dump(int mask, ir_graph *irg, const char *suffix)
{
 if (be_options.dump_flags & mask)
  dump_ir_graph(irg, suffix);
}




static void spill(void)
{

 be_timer_push(T_RA_CONSTR);
 be_pre_spill_prepare_constr(irg, cls);
 be_timer_pop(T_RA_CONSTR);

 dump(DUMP_RA, irg, "spillprepare");


 be_timer_push(T_RA_SPILL);
 be_do_spill(irg, cls);
 be_timer_pop(T_RA_SPILL);

 be_timer_push(T_RA_SPILL_APPLY);
 check_for_memory_operands(irg);
 be_timer_pop(T_RA_SPILL_APPLY);

 dump(DUMP_RA, irg, "spill");
}




static void be_pref_alloc(ir_graph *new_irg)
{
 _obstack_begin ((&obst), 0, 0, (void *(*) (long int)) xmalloc, (void (*) (void *)) free);

 irg = new_irg;


 determine_block_order();

 const arch_env_t *arch_env = be_get_irg_arch_env(new_irg);
 int n_cls = arch_env->n_register_classes;
 for (int c = 0; c < n_cls; ++c) {
  cls = &arch_env->register_classes[c];
  if (((cls)->flags) & arch_register_class_flag_manual_ra)
   continue;

  stat_ev_ctx_push_str("regcls", cls->name);

  n_regs = ((cls)->n_regs);
  normal_regs = rbitset_malloc(n_regs);
  be_get_allocatable_regs(irg, cls, normal_regs);

  spill();


  if (be_options.do_verify) {
   be_timer_push(T_VERIFY);
   be_verify_schedule(irg);
   be_verify_register_pressure(irg, cls);
   be_timer_pop(T_VERIFY);
  }

  be_timer_push(T_RA_COLOR);
  be_pref_alloc_cls();
  be_timer_pop(T_RA_COLOR);



  be_invalidate_live_sets(irg);
  free(normal_regs);

  stat_ev_ctx_pop("regcls");
 }

 free_block_order();

 be_timer_push(T_RA_SPILL_APPLY);
 be_abi_fix_stack_nodes(irg);
 be_timer_pop(T_RA_SPILL_APPLY);

 __extension__ ({ struct obstack *__o = (&obst); void *__obj = (((void *)0)); if (__obj > (void *)__o->chunk && __obj < (void *)__o->chunk_limit) __o->next_free = __o->object_base = (char *)__obj; else (obstack_free) (__o, __obj); });
}

void be_init_pref_alloc(void);
void be_init_pref_alloc(void)
{
 static be_ra_t be_ra_pref = { be_pref_alloc };
 be_register_allocator("pref", &be_ra_pref);
 dbg = firm_dbg_register("firm.be.prefalloc");
}
