/* types failing to get identified because of alignment changes */

union tree_node;
typedef union tree_node *tree;
tree make_tree();

union tree_node {
	int a;
	float b;
};
union tree_node *make_tree(union tree_node* bla);
