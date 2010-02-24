#include <stdio.h>

#define DEC \
	     '0': \
	case '1': \
	case '2': \
	case '3': \
	case '4': \
	case '5': \
	case '6': \
	case '7': \
	case '8': \
	case '9'

#define HEX \
	     '0': \
	case '1': \
	case '2': \
	case '3': \
	case '4': \
	case '5': \
	case '6': \
	case '7': \
	case '8': \
	case '9': \
	case 'A': \
	case 'B': \
	case 'C': \
	case 'D': \
	case 'E': \
	case 'F': \
	case 'a': \
	case 'b': \
	case 'c': \
	case 'd': \
	case 'e': \
	case 'f'

#define OCT \
	     '0': \
	case '1': \
	case '2': \
	case '3': \
	case '4': \
	case '5': \
	case '6': \
	case '7'

#define SGN \
	     '+': \
	case '-'

#define E__ \
	     'E': \
	case 'e'

#define P__ \
	     'P': \
	case 'p'

#define X__ \
	     'X': \
	case 'x'

#define DOT '.'

typedef enum NumKind
{
	NUM_NONE,
	NUM_DEC,
	NUM_DEC_FLOAT,
	NUM_HEX,
	NUM_HEX_FLOAT,
	NUM_OCT
} NumKind;

static char const* const num_kind_name[] =
{
	[NUM_NONE]      = "NUM_NONE",
	[NUM_DEC]       = "NUM_DEC",
	[NUM_DEC_FLOAT] = "NUM_DEC_FLOAT",
	[NUM_HEX]       = "NUM_HEX",
	[NUM_HEX_FLOAT] = "NUM_HEX_FLOAT",
	[NUM_OCT]       = "NUM_OCT"
};

int main(int argc, char* argv[])
{
	if (argc != 2)
		return 1;

	char const* const start = argv[1];
	char const*       i     = start;
	NumKind           k;

	switch (*i++)
	{
		case DOT: goto s_dot;
		case '0': goto s_0;
		case '1':
		case '2':
		case '3':
		case '4':
		case '5':
		case '6':
		case '7':
		case '8':
		case '9': goto s_decimal;
		default:  goto error_rest;
	}

s_0: // 0
	switch (*i++)
	{
		case DOT: goto s_fractional_dot;
		case OCT: goto s_octal;
		case '8':
		case '9': goto s_fractional;
		case E__: goto s_exponent_part;
		case X__: goto s_0x;
		default:  k = NUM_OCT; goto rest;
	}

s_0x: // 0x
	switch (*i++)
	{
		case DOT: goto s_0x_dot;
		case HEX: goto s_hexadecimal;
		default:  goto error_rest;
	}

s_0x_dot: // 0x.
	switch (*i++)
	{
		case HEX: goto s_hex_dot;
		default:  goto error_rest;
	}

s_bin_exponent: // ...[Pp][+-]?[0-9]+
	switch (*i++)
	{
		case DEC: goto s_exponent;
		default:  k = NUM_HEX_FLOAT; goto rest;
	}

s_bin_exponent_part: // ...[Pp]
	switch (*i++)
	{
		case SGN: goto s_bin_exponent_sign;
		case DEC: goto s_bin_exponent;
		default:  goto error_rest;
	}

s_bin_exponent_sign: // ...[Pp][+-]
	switch (*i++)
	{
		case DEC: goto s_bin_exponent;
		default:  goto error_rest;
	}

s_decimal: // [1-9][0-9]*
	switch (*i++)
	{
		case DOT: goto s_fractional_dot;
		case DEC: goto s_decimal;
		case E__: goto s_exponent_part;
		default:  k = NUM_DEC; goto rest;
	}

s_dot: // .
	switch (*i++)
	{
		case DEC: goto s_fractional_dot;
		default:  goto error_rest;
	}

s_exponent: // ...[Ee][+-]?[0-9]+
	switch (*i++)
	{
		case DEC: goto s_exponent;
		default:  k = NUM_DEC_FLOAT; goto rest;
	}

s_exponent_part: // ...[Ee]
	switch (*i++)
	{
		case SGN: goto s_exponent_sign;
		case DEC: goto s_exponent;
		default:  goto error_rest;
	}

s_exponent_sign: // ...[Ee][+-]
	switch (*i++)
	{
		case DEC: goto s_exponent;
		default:  goto error_rest;
	}

s_fractional: // 0[0-7]*[89][0-9]*
	switch (*i++)
	{
		case DOT: goto s_fractional_dot;
		case DEC: goto s_fractional;
		case E__: goto s_exponent_part;
		default:  goto error_rest;
	}

s_fractional_dot: // [0-9]+.[0-9]* .[0-9]+
	switch (*i++)
	{
		case DEC: goto s_fractional_dot;
		case E__: goto s_exponent_part;
		default:  k = NUM_DEC_FLOAT; goto rest;
	}

s_hex_dot: // 0x[0-9A-Fa-f]+.[0-9A-Fa-f]*  0x.[0-9A-Fa-f]+
	switch (*i++)
	{
		case HEX: goto s_hex_dot;
		case P__: goto s_bin_exponent_part;
		default:  goto error_rest;
	}

s_hexadecimal: // 0[Xx][0-9A-Fa-f]+
	switch (*i++)
	{
		case DOT: goto s_hex_dot;
		case HEX: goto s_hexadecimal;
		case P__: goto s_bin_exponent_part;
		default:  k = NUM_HEX; goto rest;
	}

s_octal: // 0[0-7]+
	switch (*i++)
	{
		case DOT: goto s_fractional_dot;
		case OCT: goto s_octal;
		case '8':
		case '9': goto s_fractional;
		case E__: goto s_exponent_part;
		default:  k = NUM_OCT; goto rest;
	}

error_rest:
	--i;
	printf("error: \"%.*s\" \"%s\"\n", (int)(i - start), start, i);
	return 1;

rest:
	--i;
	printf("%s, \"%.*s\" \"%s\"\n", num_kind_name[k], (int)(i - start), start, i);
	return 0;
}
