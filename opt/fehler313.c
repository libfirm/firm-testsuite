struct s {
  void (*f)(void);
};

void fn1(void)
{
  ((struct s*)({
    void *a = 0;
    0;
  }))->f();
}

int main(void)
{
	return 0;
}
