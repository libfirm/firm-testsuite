int var = 13;
int __attribute__((alias("var"))) foo;

int main(void) { return 0; }
