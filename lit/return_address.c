// RUN: {cc} -integrated-cpp -target i686-unknown-linux-gnu -O3 -m32 -fomit-frame-pointer -S -o- {input} | FileCheck {input} --check-prefix CHECK --check-prefix IA32-OMITFP
// RUN: {cc} -integrated-cpp -target i686-unknown-linux-gnu -O3 -m32 -fno-omit-frame-pointer -S -o- {input} | FileCheck {input} --check-prefix CHECK --check-prefix IA32-NOOMITFP

// CHECK-LABEL: retaddr:
void *retaddr(void)
{
	// IA32-NOOMITFP: pushl %ebp
	// IA32-NOOMITFP: movl %esp, %ebp
	// IA32-NOOMITFP: movl 4(%ebp), %eax
	// IA32-NOOMITFP: popl %ebp
	// IA32-NOOMITFP: ret
	// IA32-OMITFP: movl 12(%esp), %eax
	// IA32_OMITFP: ret
	return __builtin_return_address(0);
}
