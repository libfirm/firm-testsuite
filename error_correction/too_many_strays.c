/* reports various stray constants and commans,
 * 1 would be enough... */

typedef struct {
	int a, b, c, d, e, f, g, h;
} blup = {
	// typo is here: ; instead of ,
	1, 2, 3; 4, 5, 6, 7, 8
};

int main(void)
{

}
