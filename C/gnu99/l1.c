int printf(const char *str, ...);

struct x {};
struct x a[] = { {}, {} };

int size = sizeof(a);
int align = __alignof__(a);

int main() {
	printf("Size: %u Alignment: %d\n", (unsigned) sizeof(a),
			(int) __alignof__(a));
}
