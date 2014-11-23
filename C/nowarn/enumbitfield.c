typedef enum {
	A, B, C
} myenum;

static struct {
	myenum f : 4;
} g;

static int is_b(myenum val)
{
	return g.f == val;
}

int main(void)
{
	g.f = C;
	return is_b(A);
}
