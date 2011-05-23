/*$ cflags -march=i386 $*/
/* originally from csmith 2.0.0 with seed 1233931421 */

int (safe_mul_func_int16_t_s_s)(short si1, short si2)
{
	return si1 * si2;
}

long long (safe_unary_minus_func_int64_t_s)(long long si)
{
	return (si==(-9223372036854775807LL -1)) ?  ((si)) : -si;
}

int g_3 = 0x70;
int g_236[9] = {};

long long func_63(int p_64)
{
	int *l_388 = 0;
	int l_397[5] = {};
	for (g_3 = 0; g_3 < 9; g_3 += 1)
	{
		((((((safe_mul_func_int16_t_s_s(p_64, g_3)) <= (safe_unary_minus_func_int64_t_s(g_236[(g_3) % 9]))))) ^ (*l_388)) && l_397[3]);
	}
	return 0;
}

int main (int argc, char* argv[])
{
	return 0;
}
