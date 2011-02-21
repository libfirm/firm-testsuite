/* found in git 1.7.4.1 read-cache.c */

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

struct cache_entry {
 int ce_mode;
 int ce_flags;
};

int __attribute__((noinline)) create_ce_flags(size_t len) {
 return 0;
}

int __attribute__((noinline)) create_ce_mode() {
 return 0;
}

struct cache_entry *make_cache_entry(int mode, const char *path) {
 int len = strlen(path);
 struct cache_entry *ce = (struct cache_entry *) calloc(1, 1);

 ce->ce_flags = create_ce_flags(len);
 ce->ce_mode = create_ce_mode();

 return ce;
}

int main(void) {
   make_cache_entry(0, "");
   return 0;
}
