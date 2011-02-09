int foo(int x) {
	int cnt = 0;
	return cnt <= 0 ? 0 : (cnt+1);
}

int main(void)
{
	return foo(0);
}
