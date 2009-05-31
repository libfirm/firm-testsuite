/* §6.7.5.3:15  empty parentheses (which are not part of a function definition)
 * are incompatible with prior ... */
void f(char*, ...);
void f();

int main(void) { return 0; }
