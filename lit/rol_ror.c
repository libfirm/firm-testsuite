// RUN: {cc} -target i686-linux-gnu -integrated-cpp -O3 -S -o - {input} | FileCheck {input}

/* Test wether firm generates destination address mode for rol/ror constructs */

unsigned g = 0;
unsigned h = 0;
unsigned i = 0;
unsigned j = 0;
unsigned k = 0;
unsigned l = 0;

// CHECK-LABEL: main:
int main(void)
{
	// CHECK: roll g
	g = (g<<1) | (g>>31);
	// CHECK: roll $5, h
	h = (h<<5) | (h>>27);
	// CHECK: roll $31, i
	i = (i>>1) | (i<<31);
	// CHECK: roll $27, j
	j = (j>>5) | (j<<27);
	// CHECK: rorl {{.*}}, k
	k = (k>>l) | (k<<-l);
	return 0;
}
