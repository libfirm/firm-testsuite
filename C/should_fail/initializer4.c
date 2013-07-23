int main(int argc, char **argv)
{
	int strange[argc] = { 1, 2, 3};
	return strange[0] + strange[1] - strange[2];
}
