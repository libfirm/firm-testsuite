const char* doit(int flag)
{
  return 1 + (flag ? "\0wrong\n" : "\0right\n");
}
int main()
{
  const char *result = doit(0);
  printf("%s", result);
  return 0;
}
