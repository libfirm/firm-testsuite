
unsigned char board[((19 + 2) * (19 + 1) + 1)];

static void accumulate_influence(int pos, int inv_attenuation)
{
	static int queue[(19 + 1) * (19 + 1)];

	int queue_start = 0;
	int queue_end = 1;

	while (queue_start < queue_end)
	{
		queue_start++;
		if ((board[queue[queue_start]] != 3))
			if (((queue[queue_start] % (19 + 1) - 1) - pos))
			{
				int contribution = inv_attenuation;
				if (queue_start != 1)
				{
					contribution = ((contribution) / (1 << 12));
				}
				if (contribution <= ((int) ((0.02) * (1 << 12)) + 0.5));
			}
	}
}

int main(void)
{
	int ii = 0;
	int inv_diagonal_damping = 0;

	accumulate_influence(ii, inv_diagonal_damping);

	return 0;
}
