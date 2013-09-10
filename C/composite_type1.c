char (*f(void))[10];
char (*f(void))[];

char (*g(void))[];
char (*g(void))[10];

int main(void)
{
	return sizeof(*f()) - sizeof(*g());
}
