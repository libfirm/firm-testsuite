/* use i686 archs since some x86 targets prefer add ,1 instead of inc */
/*$ -march=i686 $*/
int x = -1;
int* p = &x;

/*$ check incl _?x $*/
int main(void) {
	x ++;
	return *p;
}
