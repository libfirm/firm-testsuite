/*$ --ms $*/
struct x {
	__declspec(property(foo=bar)) int a;
	__declspec(property(=bar)) int b;
};
