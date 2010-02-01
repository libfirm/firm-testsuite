/* cparser crashed when misusing some function attributes on non-functions */
int __attribute__((pure)) glob;
int __attribute__((const)) glob2;
int __attribute__((used)) glob3;

int main(void)
{
	return glob + glob2 + glob3;
}
