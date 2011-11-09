static int * volatile global;

int main(void)
{
	for (int i = 0; i <= 0; i++)
	{
		for (int i = 0; i <= 0; i++)
		{
			for (int i = 0; i <= 0; i++)
			{
				for (int i = 0; i <= 0; i++)
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
