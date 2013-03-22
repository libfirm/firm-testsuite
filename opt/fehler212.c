/*
cparser (0.9.14) using libFirm (1.21), x86(32), cygwin

assertion "*used < n_blocks" failed: file "../../ir/ana/irdom.c", line 441, function: init_tmp_dom_info
*/

int g1, g2;

int f(void)
{
/* ***** variant: comment these 3 lines out --> cparser won't stop  */
   int *l1[2];
   for (g1=0; g1<2; g1++)
      l1[g1] = &g2;
/* ***** */

START:
   for (g1=4; g1 != -4; g1=g1 - 4)
   {
      int *l2[2] = {(void *) 0, &g2};

      if (g1)                   /* always */
         goto START;

      for (g2=0; g2 <= 1; g2++)
         return 1;
    }
}

int main(int argc, char **argv)
{
	if (argc > 1) {
	   int k;
	   k=f();        /* let's have a cup of tea - or two, three, ... */
	}

   return 0;
}
