#define Y Z
#define Z z

#define F(x) defined x

#if F(Y)
BAD
#endif

#if F((Y))
BAD
#endif

#define G defined Y
#if !G
BAD
#endif
