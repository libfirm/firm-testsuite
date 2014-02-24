#define BEGIN .text
#define SET0(reg)  xorl reg, reg
#define funcname main

	BEGIN
	.p2align 4,,15
	.globl funcname
	.type	funcname, @function
funcname:
	.p2align 4,,10
	pushl %ebp
	movl %esp, %ebp
	SET0(%eax)
	movl %ebp, %esp
	popl %ebp
	ret
	.size	funcname, .-funcname
