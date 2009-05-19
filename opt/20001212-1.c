typedef struct
{
  long double l;
} ld;

ld a (ld x, ld y)
{
  ld b;
  b.l = x.l + y.l;
  //return b;
}

int main(void)
{
	return 0;
}
