static inline unsigned short sub(unsigned short ui1, unsigned short ui2 )
{
	return ui1 - ui2;
}

int  g_33 = 0x1A8F1EDDL;
int *g_39 = &g_33;


void func_29(int *p_30)
{
	int g_16;

	for (g_16 = 0; g_16 != 2; g_16++)
	{
		for (g_33 = 0; g_33 != -29; g_33 = sub(g_33, 3))
		{
			g_39 = p_30;
			if (g_33)
				*p_30 = 1;
		}

		for (g_33 = 0; g_33 < 3; g_33 += 1)
		{
		}
	}
}



int main (int argc, char* argv[])
{
	return 0;
}
