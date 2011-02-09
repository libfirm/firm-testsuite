int foo(int x) {
	int cnt = 0;
	return cnt <= 0 ? 0 : (cnt+1);
}

int foo2(int x) {
	int cnt = 0;
	return cnt > 0 ? (cnt+1) : 0;
}

int main(void)
{
	return foo(0) + foo2(0);
}
