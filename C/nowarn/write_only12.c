static unsigned gstat[100];

int main(void)
{
	unsigned int *stat = gstat;
	stat[0]++;
	return 0;
}
