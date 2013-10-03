int f(float *i, float *e)
{
	int s = 0;
	for (; i != e; ++i) {
		s += (int)*i;
	}
	return s;
}

int main(void)
{
	return 0;
}
