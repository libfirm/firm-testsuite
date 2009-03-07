int __declspec(deprecated("dont use me")) func(void)
{
	return 42;
}
typedef int __declspec(deprecated("old deprecated type")) depr_type;
depr_type __declspec(deprecated) k = 42;

int main(void) {
	return func() - k;
}
