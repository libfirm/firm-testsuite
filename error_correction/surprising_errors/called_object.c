#define assert(x)   ((void)0)

int var;

int main(void)
{
	/* Produces "called object '42' (type 'int') is not a function or function pointer" */
	var = 42
	assert(var == 42);
}
