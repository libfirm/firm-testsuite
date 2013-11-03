typedef struct {int n;} S;

S s;
extern int rand();
extern int putchar(int x);

int main()
{
   int i=rand();
   switch(i){
   case 0 ... 1: (s.n & 0x1f) | putchar(i);
   }
}
