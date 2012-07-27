int main ()
{
  long double x, y;

  x = 0x1.fffffffffffff8p1022L;
  x *= 2;
  y = 0x1.fffffffffffff8p1023L;
  return memcmp (&x, &y, sizeof (x)) != 0;
}
