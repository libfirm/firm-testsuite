#define newline foo
/* old cparser had a stupid bug where T_NEWLINE token had a 'newline' symbol set
 * which was expanded in the following */
#if 1
BLUP
#endif
