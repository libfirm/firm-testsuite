unsigned __attribute__((visibility("default"))) glob = 13;
unsigned __attribute__((visibility("hidden"))) hiddenglob = 13;
extern unsigned extglob;
extern void extfunc(void);
void func(void) {
}
static void intfunc(void) {
}
struct S {
	int a, b;
};

const unsigned cnst = 42;
extern const unsigned extcnst;

void       *const constaddr_glob        = &glob;
void       *const constaddr_hiddenglob  = &hiddenglob;
void       *const constaddr_extglob     = &extglob;
void       *const constaddr_func        = &func;
void       *const constaddr_extfunc     = &extfunc;
void       *const constaddr_intfunc     = &intfunc;
const void *const constaddr_cnst        = &cnst;
const void *const constaddr_extcnst     = &extcnst;
char       *const constaddr_string      = "Hello";
struct S   *const constaddr_compoundlit = & ((struct S) { 13, 42 });
