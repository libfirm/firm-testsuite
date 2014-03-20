int main(void)
{
	int arr[] = { 0, 1, 1, 3 };
	int idx   = 0;
	int a     = 1;
	return arr[idx] + arr[a++] - arr[a++];
}
