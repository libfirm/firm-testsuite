typedef struct {
  int f1;
  int f2[];
} s1;

int main(void)
{
	s1 a = {({ 0; })};
	return 0;
}
