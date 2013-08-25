void foo(void)
{
label:
	goto label;
label:
	return;
}

int main(void)
{
	return 0;
}
