#include <stdarg.h>
#include <stdio.h>
#include "struct_vaargs.h"

int check (int attr, ...)
{
    struct s_short_int va_short_int;
    struct s_char_char_arr va_char_char_arr;
    struct s_int_int va_int_int;
    struct s_short_short va_short_short;
    struct s_char_char_short va_char_char_short;
    struct s_short_arr va_short_arr;
    struct s_int va_int;
    struct s_long_arr va_long_arr;
    struct s_longlong va_longlong;
    struct s_longlong_int va_longlong_int;

    va_list va;

    va_start (va, attr);

    printf("  1: %d\n", attr);
    if (attr != 3)
        return 1;

    va_char_char_arr = va_arg (va, struct s_char_char_arr);
    printf("  2: len=%d, a=%d, b=%d, c=%d\n", va_char_char_arr.len, va_char_char_arr.arr[0], va_char_char_arr.arr[1], va_char_char_arr.arr[2]);
    if (va_char_char_arr.len != 3 || va_char_char_arr.arr[2] != 16) {
        return 2;
    }

    attr = va_arg (va, int);
    printf("  3: %d\n", attr);
    if (attr != 42) {
        return 3;
    }

    va_short_int = va_arg (va, struct s_short_int);
    printf("  4: a=%X, b=%X\n", va_short_int.a, va_short_int.b);
    if (va_short_int.a != 0xFF || va_short_int.b != 0x11) {
        return 4;
    }

	va_int_int = va_arg (va, struct s_int_int);
    printf("  5: a=%X, b=%X\n", va_int_int.a, va_int_int.b);
    if (va_int_int.a != 0xFFFF || va_int_int.b != 0x3333) {
        return 5;
    }

	va_short_short = va_arg (va, struct s_short_short);
    printf("  6: a=%X, b=%X\n", va_short_short.a, va_short_short.b);
    if (va_short_short.a != 0xAA || va_short_short.b != 0x77) {
        return 6;
    }

	va_char_char_short = va_arg (va, struct s_char_char_short);
    printf("  7: a=%X, b=%X, c=%X\n", va_char_char_short.a, va_char_char_short.b, va_char_char_short.c);
    if (va_char_char_short.a != 0xF || va_char_char_short.b != 0x7 || va_char_char_short.c != 0x55) {
        return 7;
    }

	va_short_arr = va_arg (va, struct s_short_arr);
    printf("  8: a=%X, b=%X\n", va_short_arr.arr[0], va_short_arr.arr[1]);
    if (va_short_arr.arr[0] != 0x67 || va_short_arr.arr[1] != 0x89) {
        return 8;
    }

	va_int = va_arg (va, struct s_int);
    printf("  9: a=%X\n", va_int.a);
    if (va_int.a != 0xCAFE) {
        return 9;
    }

	va_long_arr = va_arg (va, struct s_long_arr);
    printf(" 10: a=%lX, b=%lX\n", va_long_arr.arr[0], va_long_arr.arr[1]);
    if (va_long_arr.arr[0] != 0xBAAD || va_long_arr.arr[1] != 0xF00D) {
        return 10;
    }

	va_longlong_int = va_arg (va, struct s_longlong_int);
    printf(" 11: a=%llX, b=%X\n", va_longlong_int.a, va_longlong_int.b);
    if (va_longlong_int.a != 0xC0DEBA5E || va_longlong_int.b != 0xBAD) {
        return 11;
    }

	va_longlong = va_arg (va, struct s_longlong);
    printf(" 12: a=%llX\n", va_longlong.a);
    if (va_longlong.a != 0xCAFEBABE) {
        return 12;
    }

    va_end (va);
    return 0;
}

int check_long_arr(struct s_long_arr a) {
    printf("100: a=%lX, b=%lX\n", a.arr[0], a.arr[1]);
    if (a.arr[0] != 0xBAAD || a.arr[1] != 0xF00D)
        return 100;
    return 0;
}

int main ()
{
    struct s_char_char_arr a;
    struct s_short_int b;
    struct s_int_int c;
    struct s_short_short d;
    struct s_char_char_short e;
    struct s_short_arr f;
    struct s_int g;
    struct s_long_arr h;
    struct s_longlong_int i;
    struct s_longlong j;

    a.len = 3;
    a.arr[0] = 4;
    a.arr[1] = 8;
    a.arr[2] = 16;

    b.a = 0xFF;
    b.b = 0x11;

    c.a = 0xFFFF;
    c.b = 0x3333;

    d.a = 0xAA;
    d.b = 0x77;

    e.a = 0xF;
    e.b = 0x7;
    e.c = 0x55;

    f.arr[0] = 0x67;
    f.arr[1] = 0x89;

    g.a = 0xCAFE;

    h.arr[0] = 0xBAAD;
    h.arr[1] = 0xF00D;

    i.a = 0xC0DEBA5E;
    i.b = 0xBAD;

    j.a = 0xCAFEBABE;

    int res = check(3, a, 42, b, c, d, e, f, g, h, i, j);
    return res + check_long_arr(h);
}
