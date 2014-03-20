/*$ -Wno-redundant-decls $*/
/* see if types are compatible by repeatedly redeclaring a function with
 * compatible parameter types */

extern unsigned i0;
extern enum EU { a0, b0, c0 } i0;

extern int i1;
extern enum ES { a1, b1, c1=-1 } i1;

extern int arr0[];
extern int arr0[10];

extern int arr1[5];
extern enum ES arr1[5];

extern int (*f0)();
extern int (*f0)(int a, int b);

extern int (*f1)(int a);
extern int (*f1)(const enum ES a);
