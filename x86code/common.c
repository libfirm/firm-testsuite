extern int commonvar;
int commonvar;
int commonvar2;
int not_commonvar = 42;
static int not_common2;
extern int not_common3;

/*$ check .comm _?commonvar $*/
int main(void)
{
	not_common2 = 10;
	not_commonvar = 10;
	commonvar = 1;
	commonvar2 = 2;
	return 0;
}
