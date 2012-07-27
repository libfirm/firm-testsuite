/* Test call to static variable.  */

typedef struct
{
  long long a[10];
} A;

void bar (A *x)
{
}

typedef int (*B)(int);

int g = 0;

int main()
{
  static A a;
  bar (&a);
  if (g)
    (*(B)&a) (1);
  return 0;
}
