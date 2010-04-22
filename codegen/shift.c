/* Expression gets not fully folded into one multiplication:
 * imull $0x1010100, %ecx, %edx
 * leal (%edx,%ecx), %eax
 * i.e. x * 0x1010100 + x
 */
unsigned f(unsigned x) { return (x << 24) + (x << 16) + (x << 8) + x; }

/* Bad decomposition (-march=i486/pentium/pentium-mmx):
 *   ((x + (x << 8) + (x << 16)) << 8) + x
 * good: y = (x << 8) + x; return (y << 16) + y;
 */
unsigned g(unsigned x) { return x * 0x01010101; }
