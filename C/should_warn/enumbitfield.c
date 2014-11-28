enum e0 {
	a0, a1, a2, a3, a4
};

struct baz {
	__extension__ enum e0 m0 : 2;
	__extension__ enum e1 { b0 = -2, b1 = 2 } m1 : 1;
	__extension__ enum e2 { c0 = -2 } m2 : 1;
	__extension__ enum e3 { d0 = -1, d1 = 0 } m3 : 1; /*fine*/
	__extension__ enum e4 { e0 = 1 } m4 : 1; /*fine*/
	__extension__ enum e5 { f0 = 2 } m5 : 1;
	__extension__ enum e6 { g0 = 31 } m6 : 5; /*fine*/
	__extension__ enum e7 { h0 = 31 } m7 : 4;
	__extension__ enum e0 m8 : 3; /*fine*/
};

int main(void)
{
	return 0;
}
