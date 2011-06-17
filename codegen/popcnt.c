/* as found in 186.crafty */

typedef unsigned long long BITBOARD;

/* the cool thing to do here would be to perform 2 32bit popcount instructions
 * (if the PCU supports them) and add the results */
int PopCnt(register BITBOARD a)
{
	register int c=0;

	while(a) {
		c++;
		a &= a - 1;
	}
	return(c);
}
