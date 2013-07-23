int main(int argc, char **argv)
{
	int *foo = (int[argc]) { 1, 2, 3};
	return foo[0] + foo[1] - foo[2];
}
