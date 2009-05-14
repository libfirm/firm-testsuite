/** common scheme in glibc headers, should not produce a warning */
# define __REDIRECT(name, proto, alias) name proto __asm__ (#alias)
extern int bla(void);
extern int __REDIRECT(bla, (void), bla_new);

int main(void)
{
	return 0;
}
