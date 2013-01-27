#define stderrprintf(format, args...)  fprintf(stderr, format , ## args)
stderrprintf("Hello");
stderrprintf("Blup: %d\n", 42);
stderrprintf("Bla: %d %s %u\n", 13, "test", 87u);

#define s2(format, ...)  fprintf(stderr, format , ## __VA_ARGS__)
s2("Hello");
s2("Blup: %d\n", 42);
s2("Bla: %d %s %u\n", 13, "test", 87u);
