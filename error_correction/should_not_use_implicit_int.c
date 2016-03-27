long foo;

/* produces:
 * "warning: type specifier missing; assuming 'int'"
 * "error: type name must not have an identifier"
 * "error: offsetof called on scalar type 'int'" */
long bar = __builtin_offsetof(foo, x);
