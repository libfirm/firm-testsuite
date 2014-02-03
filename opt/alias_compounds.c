#include "alias_tools.h"

typedef struct A {
	int a;
	int b;
} A;

typedef struct B {
	A sub_a;
	int c;
} B;

typedef struct C {
	A sub_a1;
	A sub_a2;
} C;

typedef struct J { int a; int b; } J;
typedef struct K { int a; int b; } K;
typedef struct L { int a; int b; } L;

typedef union KL {
	int a;
	K mem_k;
	L mem_l;
} KL;

typedef union U {
	int a;
	int b;
} U;

typedef struct X {
	int a : 2;
	int b : 2;
} X;

A *a_ptr;
A *a_ptr1;
B *b_ptr;
J *j_ptr;
K *k_ptr;
L *l_ptr;
KL *kl_ptr;

U *u_ptr;
U *u_ptr1;

X *x_ptr;
X *x_ptr1;

C *c_ptr;
C *c_ptr1;

char *ptr;

int main(int param0, char **param1)
{
	int i = 0;
	NOT(&a_ptr->a, &a_ptr1->b);
	//MAY(&x_ptr->a, &x_ptr1->b);
	MAY(&a_ptr->a, &a_ptr1->a);
	MAY(&u_ptr->a, &u_ptr1->b);

	NOT(&a_ptr->a, &b_ptr->c);
	NOT(&a_ptr->a, &b_ptr->sub_a.b);
	MAY(&a_ptr->a, &b_ptr->sub_a.a);

	NOT(&c_ptr->sub_a1.a, &c_ptr1->sub_a2.a);

	NOT(&j_ptr->a, &k_ptr->a);
	NOT(&j_ptr->b, &l_ptr->b);
	MAY(&k_ptr->a, &l_ptr->a);
	MAY(&kl_ptr->a, &k_ptr->a);
	MAY(&kl_ptr->a, &l_ptr->a);
	NOT(&kl_ptr->a, &j_ptr->a);
	NOT(&kl_ptr->a, &k_ptr->b);
	NOT(&k_ptr->a, &l_ptr->b);

	return 0;
}
