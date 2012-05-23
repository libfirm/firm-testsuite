#define swap(x,y)   y x
swap(x,y)
swap(y,x)
swap(first,second)
swap(second,first)
#define x changed_x
swap(y,x)

#define noswap(a,b)    a b
noswap(a,b)
noswap(first,second)

#define foo(a,b)   bar(b,a)
#define bar(a,b)   foo(b,a)
foo(42, 13)
bar(3, 4)
bar(x,x)
