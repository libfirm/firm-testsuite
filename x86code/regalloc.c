/* originally from csmith 2.0.0 with seed 1404113537 */
/*$ cflags -march=i386 $*/

int (safe_div_func_int8_t_s_s)(int si1, char si2)
{
	return (si1 == (-128)) && (si2 == (-1)) ?  (si1) : (si1 / si2);
}


int (safe_mod_func_uint64_t_u_u)(int ui1, int ui2)
{
	return (ui2 == 0) ?  1 : (ui2);
}

int x;

int func_96(int p_99)
{
	for (int j = 0; j < 10; j++);
	return 0;
}

void func_42(int p_45)
{
	func_96(safe_div_func_int8_t_s_s(p_45, safe_mod_func_uint64_t_u_u(1, x)));
}

int main (int argc, char* argv[])
{
    return 0;
}
