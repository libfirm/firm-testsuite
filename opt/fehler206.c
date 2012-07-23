static int * volatile global;

int main(void)
{
	int a,b,c,d;
	for (a = 0; a <= 0; a++)
	{
		for (b = 0; b <= 0; b++)
		{
			for (c = 0; c <= 0; c++)
			{
				for (d = 0; d <= 0; d++)
				{
					unsigned counter = 0;
					global = 0;
					for (; counter <= 0; counter++);
					++counter || global;
				}
			}
		}
	}

	return 0;
}
