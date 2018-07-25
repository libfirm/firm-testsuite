static int g;

static int* __attribute__((noinline)) f(void) { return &g; }

int main(void)
{
  int* p = f();
  int v;
  /* "=m" is modeled as input register for the address.  This register must not
   * be the same as the register used for the output "=r".  GCC uses different
   * registers. */
  asm("movl $42, %1; movl $42, %0" : "=m" (*p), "=r" (v));
  return v - g;
}
