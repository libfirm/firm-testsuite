struct s
{
    int value;
    const char *string;
};

int main (void)
{
  int i;
  for (i = 0; i < 4; i++)
  {
      struct s *t = & (struct s) { 3, "hey there" };
      if (t->value != 3)
          return 1;
      t->value = 4;
      if (t->value != 4)
          return 2;
  }
  return 0;
}
