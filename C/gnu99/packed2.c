struct __attribute__((packed)) {
	int f;
} a, b = { 256 };

int main(void)
{
	a = b;
	return a.f != b.f;
}
