/*$ -Wno-redundant-decls -Wno-strict-prototypes $*/
extern void f(void(*)(),       void(*)(int));
extern void f(void(*)(double), void(*)());

extern void g(double a);
extern void h(int a);
struct S { int a, b, c; };
extern void oops(struct S s);

int main(void)
{
	f(oops, h);
}
