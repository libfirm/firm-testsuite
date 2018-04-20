#define A(x,y) x##y
#define B(x,y) x##y
#define STR(x) STR_(x)
#define STR_(x) #x
(B(A(a,b**),))
