#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <inttypes.h>

/* darwin defined PRIx8/PRIx16 as 'hx'/'hhx' while glibc simply uses 'x',
 * let's equalize them with the following hack */
#ifdef __APPLE__
#undef PRIx8
#define PRIx8 "x"
#undef PRIx16
#define PRIx16 "x"
#endif

static int64_t lls[] = {
  123ULL, -1LL, -14LL, 14, 1ULL << 63, 0
};

int
main(int argc, char** argv)
{
  int8_t        C, c1;
  uint8_t       uc1;

  int16_t       S, s1;
  uint16_t      us1;

  int32_t       i1, i;
  uint32_t      ui1;

  int64_t       L, l1;
  uint64_t      ul1;

  float         F;
  double        D;

  /* input values */
  C = (char)  (argc >= 2)? atoi(argv[1]) : 0x64;           /* 100 = 'd' */
  S = (int16_t) (argc >= 3)? atoi(argv[2]) : -769;           /* 0xfcff = -769 */
  L = (int64_t)  (argc >= 4)? atoi(argv[3]) : 0xa3a3a3a3a3a3; /*179923220407203*/

  /* Test integer to integer conversions */
  uc1 = (uint8_t) C;                 /* 100 = 'd' */
  us1 = (uint16_t) C;                /* 100 = 'd' */
  ui1 = (uint32_t) C;                /* 100 = 'd' */
  ul1 = (uint64_t) C;                /* 100 = 'd' */

  s1  = (int16_t) C;                 /* 100 = 'd' */
  i1  = (int32_t) C;                 /* 100 = 'd' */
  l1  = (int64_t) C;                 /* 100 = 'd' */

  printf("\n");
  printf("INT8             C = '%c' (%"PRId8")\t\t(0x%"PRIx8")\n", C, C, C);
  printf("int8 to int16   s1 = %"PRId16"\t\t(0x%"PRIx16")\n", s1, s1);
  printf("int8 to int32   i1 = %"PRId32"\t\t(0x%"PRIx32")\n", i1, i1);
  printf("int8 to int64   l1 = %"PRId64"\t\t(0x%"PRIx64")\n", l1, l1);
  printf("\n");
  printf("int8 to uint8  uc1 = %"PRIu8 "\t\t(0x%"PRIx8 ")\n", uc1, uc1);
  printf("int8 to uint16 us1 = %"PRIu16"\t\t(0x%"PRIx16")\n", us1, us1);
  printf("int8 to uint32 ui1 = %"PRIu32"\t\t(0x%"PRIx32")\n", ui1, ui1);
  printf("int8 to uint64 ul1 = %"PRIu64"\t\t(0x%"PRIx64")\n", ul1, ul1);

  uc1 = (uint8_t) S;                 /* 0xff = 255 */
  us1 = (uint16_t) S;                /* 0xfcff = 64767 */
  ui1 = (uint32_t) S;                /* 0xfffffcff = 4294966527 */
  ul1 = (uint64_t) S;                /* */

  c1  = (int8_t) S;                  /* 0xff = -1 */
  i1  = (int16_t) S;                 /* 0xfffffcff = -769 */
  l1  = (int64_t) S;                 /* */

  printf("\n\n");
  printf("INT16             S = %"PRId16"\t\t(0x%"PRIx16")\n", S, S);
  printf("int16 to int8    c1 = %"PRId8 "\t\t(0x%"PRIx8 ")\n", c1, c1);
  printf("int16 to int32   i1 = %"PRId32"\t\t(0x%"PRIx32")\n", i1, i1);
  printf("int16 to int64   l1 = %"PRId64"\t\t(0x%"PRIx64")\n", l1, l1);
  printf("\n");
  printf("int16 to uint8  uc1 = %"PRIu8 "\t\t(0x%"PRIx8 ")\n", uc1, uc1);
  printf("int16 to uint16 us1 = %"PRIu16"\t\t(0x%"PRIx16")\n", us1, us1);
  printf("int16 to uint32 ui1 = %"PRIu32"\t\t(0x%"PRIx32")\n", ui1, ui1);
  printf("int16 to uint64 ul1 = %"PRIu64"\t\t(0x%"PRIx64")\n", ul1, ul1);

  uc1 = (uint8_t)  L;                /* */
  c1  = (int8_t)   L;                /* */
  s1  = (int16_t)  L;                /* */
  us1 = (uint16_t) L;                /* */
  i1  = (int32_t)  L;                /* */
  ui1 = (uint16_t) L;                /* */
  ul1 = (uint64_t) L;                /* */

  printf("\n\n");
  printf("UINT64             L = %"PRIu64"\n", L);
  printf("uint64 to int8    c1 = %"PRId8 "\t\t(0x%"PRIx8 ")\n", c1, c1);
  printf("uint64 to int16   s1 = %"PRId16"\t\t(0x%"PRIx16")\n", s1, s1);
  printf("uint64 to int32   i1 = %"PRId32"\t\t(0x%"PRIx32")\n", i1, i1);
  printf("\n");
  printf("uint64 to uint8  uc1 = %"PRIu8 "\t\t(0x%"PRIx8 ")\n", uc1, uc1);
  printf("uint64 to uint16 us1 = %"PRIu16"\t\t(0x%"PRIx16")\n", us1, us1);
  printf("uint64 to uint32 ui1 = %"PRIu32"\t\t(0x%"PRIx32")\n", ui1, ui1);
  printf("uint64 to uint64 ul1 = %"PRIu64"\t\t(0x%"PRIx64")\n", ul1, ul1);

  /* Test floating-point to integer conversions */
  F = (float)  (argc >= 4)? atof(argv[3]) : 1.0;
  D =          (argc >= 5)? atof(argv[4]) : 2.0;

  uc1 = (uint8_t) F;
  us1 = (uint16_t) F;
  ui1 = (uint16_t) F;
  ul1 = (uint64_t) F;

  c1  = (int8_t) F;
  s1  = (int16_t) F;
  i1  = (int32_t) F;
  l1  = (int64_t) F;

  printf("\n\n");
  printf("FLOAT             F = %f\n", F);
  printf("float to int8    c1 = %"PRId8 "\t\t(0x%"PRIx8 ")\n", c1, c1);
  printf("float to int16   s1 = %"PRId16"\t\t(0x%"PRIx16")\n", s1, s1);
  printf("float to int32   i1 = %"PRId32"\t\t(0x%"PRIx32")\n", i1, i1);
  printf("float to int64   l1 = %"PRId64"\t\t(0x%"PRIx64")\n", l1, l1);
  printf("\n");
  printf("float to uint8  uc1 = %"PRIu8 "\t\t(0x%"PRIx8 ")\n", uc1, uc1);
  printf("float to uint16 us1 = %"PRIu16"\t\t(0x%"PRIx16")\n", us1, us1);
  printf("float to uint32 ui1 = %"PRIu32"\t\t(0x%"PRIx32")\n", ui1, ui1);
  printf("float to uint64 ul1 = %"PRIu64"\t\t(0x%"PRIx64")\n", ul1, ul1);

  uc1 = (uint8_t) D;
  us1 = (uint16_t) D;
  ui1 = (uint16_t) D;
  ul1 = (uint64_t) D;

  c1  = (int8_t) D;
  s1  = (int16_t) D;
  i1  = (int32_t) D;
  l1  = (int64_t) D;

  printf("\n\n");
  printf("DOUBLE             D = %f\n", D);
  printf("double to int8    c1 = %"PRId8 "\t\t(0x%"PRIx8 ")\n", c1, c1);
  printf("double to int16   s1 = %"PRId16"\t\t(0x%"PRIx16")\n", s1, s1);
  printf("double to int32   i1 = %"PRId32"\t\t(0x%"PRIx32")\n", i1, i1);
  printf("double to int64   l1 = %"PRId64"\t\t(0x%"PRIx64")\n", l1, l1);
  printf("\n");
  printf("double to uint8  uc1 = %"PRIu8 "\t\t(0x%"PRIx8 ")\n", uc1, uc1);
  printf("double to uint16 us1 = %"PRIu16"\t\t(0x%"PRIx16")\n", us1, us1);
  printf("double to uint32 ui1 = %"PRIu32"\t\t(0x%"PRIx32")\n", ui1, ui1);
  printf("double to uint64 ul1 = %"PRIu64"\t\t(0x%"PRIx64")\n", ul1, ul1);

  for (i = 0; lls[i]; ++i) {
    printf("double <- int64 %" PRId64 " = %f\n", lls[i], (double)lls[i]);
    printf("double <- uint64 %" PRIu64 " = %f\n",
           (uint64_t)lls[i], (double)(uint64_t)lls[i]);
  }

  return 0;
}
