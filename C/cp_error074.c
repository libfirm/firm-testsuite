/*
cparser (0.9.14) using libFirm (1.21), x86(32), cygwin

assertion "initializer->kind == IR_INITIALIZER_COMPOUND" failed: file "../../ir/tr/entity.c", line 680, function: get_initializer_compound_n_entries
*/

int * f(void)
{
   int i[1][1]= {};
   return *i;  /* yes, I'm gone soon - aren't we all? */
}

int main ()
{
   f();

   return 0;
}
