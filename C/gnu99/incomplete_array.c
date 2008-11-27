/* gcc apparently accepts that and creates an array of size 1... */
char incompleteArray[];

int main(void) {
	incompleteArray[0] = 0;

	return incompleteArray[0];
}
