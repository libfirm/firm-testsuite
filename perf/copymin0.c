void fun0(void)
{
	unsigned k, l, m;
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=b" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 2:%2 */" :: "a" (k), "b" (l), "d" (m));
}

void fun1(void)
{
	unsigned k, l, m;
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=b" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 */" :: "a" (k), "d" (m));
}

void fun2(void)
{
	unsigned k, l, m;
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=c" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 2:%2 */" :: "a" (k), "c" (l), "d" (m));
}

void fun3(void)
{
	unsigned k, l, m;
	asm("/* 0:%0 1:%1 2:%2 */" : "=a" (k), "=c" (l), "=d" (m));
	l += k;
	k  = m;
	m  = l;
	asm("/* 0:%0 1:%1 */" :: "a" (k), "d" (m));
}
