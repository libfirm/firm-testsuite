/* originally from csmith 2.0.0 with seed 1211447411 */

char (safe_rshift_func_uint8_t_u_u)(char left, unsigned int right )
{
  return
    (((unsigned int)right) >= 32) ?
    ((left)) :
    (left >> ((unsigned int)right));
}

struct S1 {
   short f2;
};

struct S1 g_617 = {6};

int x;

int func_30()
{
	for (x = 0; x < 10; x++)
	{
		for (g_617.f2 = 4; g_617.f2 < 6; g_617.f2 += 1)
		{
			for (x = 0; x < 10; x++)
			{
				return 0;
			}
		}
	}
	for (x = 0; x < 10; x++)
	{
		x && safe_rshift_func_uint8_t_u_u(1, 1);
	}
	return 0;
}

int main (int argc, char* argv[])
{
    return 0;
}
