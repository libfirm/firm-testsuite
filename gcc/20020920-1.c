struct B
{
  int x;
  int y;
};

struct A
{
  int z;
  struct B b;
};

struct A
f ()
{
  struct B b = { 0, 1 };
  struct A a = { 2, b };
  return a;
}

int
main (void)
{
  struct A a = f ();
  if (a.z != 2)
    return 1;
  if (a.b.x != 0)
    return 2;
  if (a.b.y != 1)
    return 3;
  return 0;
}
