/* originally from csmith 2.0.0 with seed 4114952579 */

static short
(safe_add_func_int16_t_s_s)(short si1, short si2 )
{
  return (si1 + si2);
}

static char
(safe_div_func_int8_t_s_s)(char si1, char si2 )
{
  return

    ((si2 == 0) || ((si1 == (-128)) && (si2 == (-1)))) ?
    ((si1)) :

    (si1 / si2);
}


int func_29(unsigned p_30, int * p_31)
{
	int l_66 = 0;
	{
		for (p_30 = (-23); (p_30 > 15); p_30 = safe_add_func_int16_t_s_s(p_30, 1))
		{
			for (l_66 = 5; l_66 < 9; l_66 += 1)
			{
			}
		}
	}
	(*p_31) = (((safe_div_func_int8_t_s_s(0, p_30))));
	return 0;
}

int main (int argc, char* argv[])
{
    return 0;
}
