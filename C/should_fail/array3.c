// §6.7.5.2:3  invalid: static must have size expression, not *
void f(int x[static *]);

int main(void) {}
