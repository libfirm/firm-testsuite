/*$ check roll\s+_?g $*/
/*$ check roll\s+\$0x5, _?h $*/
/*$ check roll\s+\$0x1F, _?i $*/
/*$ check roll\s+\$0x1B, _?j $*/
/*$ check rorl\s+%.*, _?k $*/

/* Test wether firm generates destination address mode for rol/ror constructs */
/* TODO: let's hope the regexs don't break because of different integer
 * representations or using equivalent ror instead of rol for the known size
 * rol/rors */

unsigned g = 0;
unsigned h = 0;
unsigned i = 0;
unsigned j = 0;
unsigned k = 0;
unsigned l = 0;

int main(void)
{
	g = (g<<1) | (g>>31);
	h = (h<<5) | (h>>27);
	i = (i>>1) | (i<<31);
	j = (j>>5) | (j<<27);
	k = (k>>l) | (k<<-l);
	return 0;
}
