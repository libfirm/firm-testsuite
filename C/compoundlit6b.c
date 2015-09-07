static int *const forty_two_p = &((int){13});

int main(void)
{
	*forty_two_p = 42;
	return *forty_two_p - 42;
}
