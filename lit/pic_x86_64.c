// RUN: {cc} -integrated-cpp -fno-PIC -target x86_64-unknown-linux-gnu -S -o- {input} | FileCheck {input} --check-prefix CHECK --check-prefix LINUX-NOPIC
// RUN: {cc} -integrated-cpp -fPIC -target x86_64-unknown-linux-gnu -S -o- {input} | FileCheck {input} --check-prefix CHECK --check-prefix LINUX-PIC
// RUN: {cc} -integrated-cpp -fPIC -target x86_64-apple-darwin -S -o- {input} | FileCheck {input} --check-prefix CHECK --check-prefix DARWIN

int common;
int local = 42;
extern int extvar;

extern int rand(void);

void __attribute__((noinline)) helper0(void)
{
	rand();
}

static void __attribute__((noinline)) helper1(void)
{
	rand();
}

// CHECK-LABEL: calls:
void calls(void)
{
	// LINUX-NOPIC: call helper0
	// LINUX-PIC: call helper0@PLT
	// DARWIN: call _helper0
	helper0();
	// LINUX-NOPIC: call helper1
	// LINUX-PIC: call helper1
	// DARWIN: call _helper1
	helper1();
	// LINUX-NOPIC: call rand
	// LINUX-PIC: call rand@PLT
	// DARWIN: call _rand
	rand();

	// LINUX-NOPIC: movl $13, common
	// LINUX-PIC: movq common@GOTPCREL(%rip), %rax
	// LINUX-PIC: movl $13, (%rax)
	// DARWIN: movq _common@GOTPCREL(%rip), %rax
	// DARWIN: movl $13, (%rax)
	common = 13;
	// LINUX-NOPIC: movl $13, local
	// LINUX-PIC: movq local@GOTPCREL(%rip), %rax
	// LINUX-PIC: movl $13, (%rax)
	// DARWIN: movl $13, _local(%rip)
	local = 13;
	// LINUX-NOPIC: movl $13, extvar
	// LINUX-PIC: movq extvar@GOTPCREL(%rip), %rax
	// LINUX-PIC: movl $13, (%rax)
	// DARWIN: movq _extvar@GOTPCREL(%rip), %rax
	// DARWIN: movl $13, (%rax)
	extvar = 13;
	// CHECK: ret
}

// CHECK-LABEL: getdconst:
double getdconst(void)
{
	// LINUX-NOPIC: movsd .LC.{{\d+}}, %xmm0
	// LINUX-PIC: movsd .LC.{{\d+}}(%rip), %xmm0
	// DARWIN: movsd LC.{{\d+}}(%rip), %xmm0
	// CHECK: ret
	return 42.42;
}

// CHECK-LABEL: switchtable:
void switchtable(unsigned val)
{
	// LINUX-NOPIC: jmp *.LTBL.{{\d+}}(,%rdi,8)
	// LINUX-PIC: leaq .LTBL.{{\d+}}(%rip), %rcx
	// LINUX-PIC: movslq (%rcx,%rdi,4), %rax
	// LINUX-PIC: addq %rcx, %rax
	// LINUX-PIC: jmp *%rax
	// DARWIN: leaq LTBL.{{\d+}}(%rip), %rcx
	// DARWIN: movslq (%rcx,%rdi,4), %rax
	// DARWIN: addq %rcx, %rax
	// DARWIN: jmp *%rax
	switch (val) {
	case 0: helper0(); break;
	case 7: helper1(); break;
	case 11: helper0();
	case 13: helper1(); break;
	case 23: rand(); break;
	case 34: helper1();
	}
}
