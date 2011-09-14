typedef enum
{
  ZERO = 0,
  ONE  = (0x1 << ZERO),
}
flags;

static int f(flags flags)
{
  return flags & ONE;
}

int main(void)
{
	return f(ZERO);
}
