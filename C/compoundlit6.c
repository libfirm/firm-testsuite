static const int *forty_two_p = &((const int){42});

int main(void)
{
	return *forty_two_p - 42;
}
