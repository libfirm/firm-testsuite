/* Adapted from http://blog.robertelder.org/switch-statements-statement-expressions/ */
int main(void)
{
	int i = 0;
	switch (i) {
		i = ({case 0:; 1;});
	}
	return 0;
}
