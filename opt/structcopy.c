/* Copies structs of various sizes.  If the backend chooses to keep some of
 * the CopyB nodes, it must handle them correctly. */

#define S(n) \
	struct S##n \
	{ \
		int data[1 << n]; \
	}; \
	struct S##n g##n; \
	int f_g##n() \
	{ \
		struct S##n s; \
		int i; \
		for (i = 0; i < (1 << n); ++i) { \
			s.data[i] = i; \
		} \
		g##n = s; \
		return g##n.data[(1 << n) - 1]; \
	} \


#define C(n) \
	ret = f_g##n(); \
	if (ret != ((1 << n) - 1)) \
		return n + 1; \

#define UNFOLD(M) \
	M(0)  \
	M(1)  \
	M(2)  \
	M(3)  \
	M(4)  \
	M(5)  \
	M(6)  \
	M(7)  \
	M(8)  \
	M(9)  \
	M(10) \
	M(11) \
	M(12) \
	M(13) \
	M(14) \
	M(15) \
	M(16) \


UNFOLD(S)

int main()
{
	int ret = 0;
	UNFOLD(C)
	return 0;
}
