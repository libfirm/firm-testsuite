/* ( is a parenthesized declarator, __attribute__ introduces an inner declarator. */
typedef void(__attribute__(()) *callback)(void);

/* ( is the start of a functon declarator, __attribute__ qualifies the type specifier of the first parameter. */
void f(void(__attribute__(()) int));

int main(void) { return 0; }
