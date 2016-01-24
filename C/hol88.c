/* reduced from HOL88's mk-hol-lcf.c */
/* ir/tv/tv.c:1105: tarval_shr_unsigned: Assertion `mode_is_int_(mode)' failed. */

int a;
void fn1() {
  ({
    long b = (long)&a - (0x8000000000000000 + (4611686018427387904 >> 1));
    long v = b + (4611686018427387904 >> 1);
    v ? v : 0;
  });
}

int main(void) { return 0; }
