#define hook_replace(old, nw)
#define IS_HOOKED(h) xxx_ ## h
#define CASE_ON(hook)  IS_HOOKED(hook)
CASE_ON(hook_replace)
