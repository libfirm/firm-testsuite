#define foo(x)    x

foo(
#if !defined(foo) && !defined(bar)

#endif
)
