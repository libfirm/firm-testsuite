typedef struct {
	  struct s3 *f1;
} s1;

struct {
	  s1 f1[1];
} s2;

struct s3 {
	  s1 f1[1];
};

int main(void)
{
	return 0;
}
