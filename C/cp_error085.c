typedef unsigned int uint32_t;
typedef struct problem *problem_t;
/* cparser failed on :0 bitfield member with typedef basetype */
struct problem {
	uint32_t one:1, two:1,:0;
	uint32_t b;
} p;

int main(void)
{
	return p.b;
}
