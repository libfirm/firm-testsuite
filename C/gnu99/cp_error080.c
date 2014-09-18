/* cparser had a bug where typedef before enum declaration failed to
 * recognize the enum as a complete type */
typedef enum blup blup;
enum blup { a, b, c };
static volatile blup var = a;

int main(void)
{
	if (var == a)
		var = c;
	return 0;
}
