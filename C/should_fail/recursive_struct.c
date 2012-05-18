typedef struct myStruct myStruct;
struct myStruct {
	int a;
	myStruct s;
};

typedef union myUnion myUnion;
union myUnion {
	int a;
	myUnion s;
};

int main(void)
{
	myStruct s;
	myUnion u;
	return 0;
}
