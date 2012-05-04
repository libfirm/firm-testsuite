extern __inline__ unsigned int ntohl(unsigned int);
__inline__ unsigned int ntohl2(unsigned int);
static __inline__ unsigned int ntohl3(unsigned int);

extern __inline__ unsigned int xntohl(unsigned int a) { return 1; }
__inline__ unsigned int xntohl2(unsigned int a) { return 2; }
static __inline__ unsigned int xntohl3(unsigned int a) { return 3; }

// only xntohl should be globally visible
// all others should get removed by the garbage collection optimisation

int main(void)
{
	return 0;
}
