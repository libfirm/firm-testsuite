/* some linkage type combinations for manual inspection and comparison
 * of generated assembly directives.
 * (these are not all possible linkage types however) */

static void func_static(void) {}
static int var_common_static;
static int var_init_static = 42;

char *escape0 = (char*)&func_static;
char *escape1 = (char*)&var_common_static;
char *escape2 = (char*)&var_init_static;

static void __attribute__((used)) func_used(void) {}

void __attribute__((visibility("default")))         func_default(void) {}
void __attribute__((visibility("protected")))       func_protected(void) {}
void __attribute__((visibility("internal")))        func_internal(void) {}
void __attribute__((visibility("hidden")))          func_hidden(void) {}
void __attribute__((visibility("default"), weak))   func_default_weak(void) {}
void __attribute__((visibility("protected"), weak)) func_protected_weak(void) {}
void __attribute__((visibility("internal"), weak))  func_internal_weak(void) {}
void __attribute__((visibility("hidden"), weak))    func_hidden_weak(void) {}

int __attribute__((visibility("default")))         var_common_default;
int __attribute__((visibility("protected")))       var_common_protected;
int __attribute__((visibility("internal")))        var_common_internal;
int __attribute__((visibility("hidden")))          var_common_hidden;
int __attribute__((visibility("default"), weak))   var_common_default_weak;
int __attribute__((visibility("protected"), weak)) var_common_protected_weak;
int __attribute__((visibility("internal"), weak))  var_common_internal_weak;
int __attribute__((visibility("hidden"), weak))    var_common_hidden_weak;

int __attribute__((visibility("default")))         var_init_default = 1;
int __attribute__((visibility("protected")))       var_init_protected = 1;
int __attribute__((visibility("internal")))        var_init_internal = 1;
int __attribute__((visibility("hidden")))          var_init_hidden = 1;
int __attribute__((visibility("default"), weak))   var_init_default_weak = 1;
int __attribute__((visibility("protected"), weak)) var_init_protected_weak = 1;
int __attribute__((visibility("internal"), weak))  var_init_internal_weak = 1;
int __attribute__((visibility("hidden"), weak))    var_init_hidden_weak = 1;
