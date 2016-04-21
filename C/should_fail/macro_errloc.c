#define M(x) x
/* error message should point at the '23', not at the 'M'. */
int M(23);
