#define F(x) #x

/* when preprocessing with -E the output should not contain a trigraph, since
 * this changes the meaning of the preprocessed program (although we haven't
 * found a compiler which does this right) */
F("?\
?=")
