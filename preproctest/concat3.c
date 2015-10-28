#define CONCAT(x,y) x ## y
#define INT(a) int a
#define TEST(t, a) t INT(a)

TEST(long, CONCAT(, ))
