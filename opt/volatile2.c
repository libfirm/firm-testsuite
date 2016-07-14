/*$ check global $*/

static volatile struct {
	int a;
} global;

int main(void)
{
	global = global;
	return 0;
}
