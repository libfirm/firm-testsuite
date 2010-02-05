int x = -1;
int* p = &x;

int main(void) {
	x ++;
	return *p;
}
