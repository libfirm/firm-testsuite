#define concat(x, y) x ## y
#define foo1(x,y)  concat(x,y)
#define foo2(y)  foo1(concat(_, _), y)
foo2(foo)
