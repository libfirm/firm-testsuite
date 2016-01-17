#define CONCAT(prefix, name) prefix ## name
#define M(x) CONCAT(pre, x)
int main(void)
{
	int preprex = 23;
	M(M(x = 0));
	return preprex;
}
