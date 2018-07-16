/* fun0() and fun1() are identical except for extra use of 'l' at the end.  Due
 * to chance fun0(), the variant with the extra use, is better.  This effect is
 * gone when forcing different registers, see fun2() and fun3(), which are
 * identical. */

void fun0(void)
{
	unsigned k, l, m;
	/*
	 * #APP                              // be_Asm T[253:10] copymin0.c:4:2
	 *   // 0:%eax 1:%ebx 2:%edx
	 * #NO_APP
	 *   addl %eax, %ebx                  // ia32_Add Iu[294:47] copymin0.c:5:4
	 *   movl %edx, %eax                  // be_Copy Iu[290:43]
	 *   movl %ebx, %edx                  // be_Copy Iu[268:23]
	 * #APP                              // be_Asm T[258:15] copymin0.c:8:2
	 *   // 0:%eax 1:%ebx 2:%edx
	 * #NO_APP
	 */
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=b" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 2:%2 */" :: "a" (k), "b" (l), "d" (m));
}

void fun1(void)
{
	unsigned k, l, m;
	/*
	 * #APP                              // be_Asm T[306:10] copymin0.c:14:2
	 *   // 0:%eax 1:%ebx 2:%edx
	 * #NO_APP
	 *   addl %ebx, %eax                 // ia32_Add Iu[346:47] copymin0.c:15:4
	 *   movl %ecx, %ebx                 // be_Copy Iu[340:41]
	 *   movl %eax, %ecx                 // be_Copy Iu[341:42]
	 *   movl %edx, %eax                 // be_Copy Iu[342:43]
	 *   movl %ecx, %edx                 // be_Copy Iu[343:44]
	 * #APP                              // be_Asm T[311:15] copymin0.c:18:2
	 *   // 0:%eax 1:%edx
	 * #NO_APP
	 */
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=b" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 */" :: "a" (k), "d" (m));
}

void fun2(void)
{
	unsigned k, l, m;
	/*
	 * #APP                              // be_Asm T[358:10] copymin0.c:53:2
	 *   // 0:%eax 1:%ecx 2:%edx
	 * #NO_APP
	 *   addl %eax, %ecx                 // ia32_Add Iu[397:45] copymin0.c:54:4
	 *   movl %edx, %eax                 // be_Copy Iu[394:42]
	 *   movl %ecx, %edx                 // be_Copy Iu[373:23]
	 * #APP                              // be_Asm T[363:15] copymin0.c:57:2
	 *   // 0:%eax 1:%ecx 2:%edx
	 * #NO_APP
	 */
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=c" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 2:%2 */" :: "a" (k), "c" (l), "d" (m));
}

void fun3(void)
{
	unsigned k, l, m;
	/*
	 * #APP                              // be_Asm T[409:10] copymin0.c:63:2
	 *   // 0:%eax 1:%ecx 2:%edx
	 * #NO_APP
	 *   addl %eax, %ecx                 // ia32_Add Iu[446:44] copymin0.c:64:4
	 *   movl %edx, %eax                 // be_Copy Iu[442:40]
	 *   movl %ecx, %edx                 // be_Copy Iu[443:41]
	 * #APP                              // be_Asm T[414:15] copymin0.c:67:2
	 *   // 0:%eax 1:%edx
	 * #NO_APP
	 */
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=c" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 */" :: "a" (k), "d" (m));
}
