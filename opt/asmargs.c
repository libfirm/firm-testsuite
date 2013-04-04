/*$ check foo%%%0 $*/
/*$ check bar%end $*/

int main(void)
{
	/* hightlights the difference between asm with and without arguments */
	asm("/* foo%%%0 */");
	asm("/* bar%%end */":);
	return 0;
}
