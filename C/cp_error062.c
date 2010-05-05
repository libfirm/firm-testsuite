#define NULL ((void*)0)

#define APR_OFFSET(p_type,field) \
	((((char *) (&(((p_type)NULL)->field))) - ((char *) NULL)))

typedef struct {
	char *ap_auth_type;
} core_dir_config;

const int foo = APR_OFFSET(core_dir_config*,ap_auth_type);

int main(void)
{
	return 0;
}
