#define x    global_x
#define foo(x, y)    x foo y

#define bad(x,y, \
	\
x,  \
y,  \
y,x)

foo((blub,) bar)
