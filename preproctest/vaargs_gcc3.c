#define M(x, ...) x,##__VA_ARGS__

M(x,)
M(x)
