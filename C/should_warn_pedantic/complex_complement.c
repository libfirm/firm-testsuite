/* ISO C99 does not allowed complement */
_Complex double d;

int main(void)
{
	return __imag__ ~d;
}
