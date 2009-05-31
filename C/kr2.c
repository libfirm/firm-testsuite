void f(char* fmt, ...);
void f(fmt) // This is valid, because it is a function definition
	char* fmt;
{
	__builtin_va_list ap;
	__builtin_va_start(ap, fmt);
}

int main(void) { return 0; }
