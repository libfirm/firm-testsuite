/* test that some C99 and MS keywords are not defined in C89 mode... */
int _Bool = 45;
float _int32 = 13;

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901
#error C99 preprocessor defines are set
#endif
#ifdef __cplusplus
#error C++ preprocessor defines are set
#endif

int bool, catch, class, const_cast, delete, dynamic_cast, explicit, export,
	false, friend, mutable, namespace, new, operator, private, protected,
	public, reinterpret_cast, static_cast, template, this, throw, true, try,
	typeid, typename, using, virtual, wchar_t, bitand, compl, not, xor, bitor,
	not_eq, and, or, and_eq, xor_eq, or_eq;

int main(void)
{
	return 0;
}
