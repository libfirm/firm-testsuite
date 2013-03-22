/*
cparser (0.9.14) using libFirm (1.21), x86(32), cygwin

assertion "(block_dominates(def_bl, use_bl)) && "the definition of a value used violates the dominance property"" failed: file "../../ir/ir/irverify.c", line 1676, function: check_dominance_for_node
*/
int i;
struct S
   {
   int s;
   };
struct S   G = { 4711 };
struct S * g = &G;

struct S f1(void)
{
   return G;
}

void f2(void)
{
   for (i=0; i < 2; i++)
      *g = f1();
}

int main()
{
   f2();

   return 0;
}
