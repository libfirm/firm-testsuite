
union tree_node;
typedef union tree_node *tree;

struct tree_list
{
	tree purpose;
	tree value;
};

union tree_node
{
	tree chain;
	tree values;
	struct tree_list list;
 };

enum tree_index
{
	TI_LONG_DOUBLE_TYPE,
	TI_VOID_TYPE,
	TI_MAX
};

tree global_trees[TI_MAX];

static int deserves_ellipsis(tree fntype)
{
	tree formal_type;

	formal_type = ((fntype)->values);
	while (formal_type && ((formal_type)->list.value) != global_trees[TI_VOID_TYPE])
		formal_type = ((formal_type)->chain);

	return (!formal_type && ((fntype)->values));
}

int main(void)
{
	tree fndecl;
	deserves_ellipsis(fndecl);

	return 0;
}
