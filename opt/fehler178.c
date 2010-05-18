int global = 42;

int main()
{
	int res;
	int tmp;

	if (global) {
		tmp = -1;
	}
	else {
		tmp = 1;
	}

	if (tmp < 0) {
		res = 0;
	} else {
		res = 1;
	}

	return res;
}
