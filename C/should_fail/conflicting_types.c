#include <stdio.h>

/* extracted from preprocessed SPEC 2000 gzip unpack.c.
 * gcc 4.4.4 reports "error: conflicting types" for the following declarations */

typedef unsigned long size_t;

__extension__ typedef struct { int __val[2]; } __fsid_t;

typedef struct
{
   int __count;
   union
   {
      unsigned int __wch;
      char __wchb[4];
   } __value;
} __mbstate_t;


typedef struct
{
   __off_t __pos;
   __mbstate_t __state;
} _G_fpos_t;

typedef struct
{
   __off64_t __pos;
   __mbstate_t __state;
} _G_fpos64_t;

/* dummy main */

int main(void) {
   return 0;
}
