#define afterx(x) x_##x
#define xafterx(x) afterx(x)
#define str(x)    #x
#define strx(x)   str(x)
#define TABLESIZE 1024
#define BUFSIZE   TABLESIZE
afterx(BUFSIZE)
xafterx(BUFSIZE)
str(BUFSIZE)
strx(BUFSIZE)
