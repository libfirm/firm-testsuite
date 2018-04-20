#define A(x,y) x##y
#define B(x,y) x##y
#define STR(x) STR_(x)
#define STR_(x) #x
STR(B(A(a,b**),))
