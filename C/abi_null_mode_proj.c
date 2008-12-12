typedef struct X {
 int x;
} X;

static inline X f(const X a, const X b)
{
 return a;
}

static inline X g(const X a, const X b)
{
 return a;
}

void h(X a)
{
 f(a, a);
 g(a, a);
}
