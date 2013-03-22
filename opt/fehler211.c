/*
cparser (0.9.14) using libFirm (1.21), x86(32), cygwin

assertion "(ir_nodeset_contains(&env->reachable_blocks, block)) && "Block is not reachable by blockwalker (endless loop with no kept block?)"" failed: file "../../ir/ir/irverify.c", line 1797, function: check_block_cfg
*/
int g1,g2;
static const int g3 = 3;

int f(void)
{
START:
  for (g1 = 0; g1 > 2; g1++ )   /* never was a truth this side of jordan */
     {
     for (g2 = 0; g2 < 4; g2++)
        return 2;
     }

  if (g3)
    goto START;                 /* forever fun */

return 1;
}

int main(int argc, char **argv)
{
	if (argc > 1)
		f();

	return 0;
}
