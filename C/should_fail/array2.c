// §6.7.5.2:4  invalid: * must not be used in a function definition
void f(int x[*]) {}

int main(void) { return 0; }
