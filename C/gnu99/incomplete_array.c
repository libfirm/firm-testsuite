/* gcc apparently accepts that and creates an array of size 1... */
char incompleteArray[];
char incompleteArray[128];

char incompleteArray2[];

int main(void) {
	incompleteArray2[0] = 42;
	incompleteArray[80] = 42;

	return incompleteArray2[0] - incompleteArray[80];
}
