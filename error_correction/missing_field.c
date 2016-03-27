/* missing field c is reported over and over */

typedef struct STR {
	int a;
	int b;
} STR;

int main(void)
{
	STR s0, s1, s2;
	s0.c = s1.c + s2.c;
	s0.c *= s1.c;
	s0.c /= s2.c;
}
