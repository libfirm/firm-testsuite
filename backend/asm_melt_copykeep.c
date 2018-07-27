int a;

int main(void)
{
  int b;
  int c = 0;
  if (a) {
    asm volatile("" : "=&r"(b) : "r"(c));
  }
  asm("" : "=&r"(a), "=&r"(b) : "r"(c));
  return 0;
}
