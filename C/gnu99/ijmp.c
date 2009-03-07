void f(int x)
{
	static void *l[] = { &&bla, &&blo, &&bli };
	goto *l[x];
	bla:;
	blo:;
	bli:;
	goto bla;
}

int main(int argc, char *argv[]) {
	return 0;
}
