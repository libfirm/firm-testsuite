static int global0 = 0;
static int global1 = 1;

void f(void) {
	int local0 = 0;
	int local1 = 1;
	int local_array0[1];

	for (int i = 0; i < 1; i++)
		continue;
	for (int i = 0; i < 1; i++)
		local_array0[0] = 0;

label:
	global0 = ((global1 == 0) == local0);

	if (local1)
	{
		for (int i = 0; i < 1; i++)
			;

		if (local1)
			goto label;
	}
	else if (local1)
		goto label;
}

int main(void)
{
	return 0;
}
