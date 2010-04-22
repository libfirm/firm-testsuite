// §6.7.5.2:1  static may only be in outermost derivation
void f(int (*x)[static 1]);

int main(void) {}
