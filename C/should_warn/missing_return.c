static int no_return_1(double *p) {
	double d = *p;
	(void)d;
	++d;
}

static int no_return_2(int a) {
	if (a)
		++a;
	else
		return 1;
}

static int has_return_1(int a) {
	if (a)
		return a;
	else
		return 0;
}

static int has_return_2(int a) {
	if (a)
		++a;
	else
		--a;
	return a;
	++a;
}

static int has_return_3(int a) {
	do {
		return a;
	} while(a);
}

static int no_return_3(int a) {
	switch (a) {
	case 1: return a;
	case 2: return a+1;
	}
}

static int has_return_4(int a) {
	switch (a) {
	case 1: return a;
	case 2: return a+1;
	default: return 0;
	}
}

static int no_return_4(int a) {
	goto end;
	return a;
end:
	++a;
}

static int no_return_5(int a) {
	if (a)
		goto end;
	else {
		++a;
		goto end;
	}
	return a;
end:
	++a;
}

int main() {
	(void)no_return_1;
	(void)no_return_2;
	(void)no_return_3;
	(void)no_return_4;
	(void)no_return_5;
	(void)has_return_1;
	(void)has_return_2;
	(void)has_return_3;
	(void)has_return_4;
	return 0;
}
