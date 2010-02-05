#include <stdio.h>
#include <stdlib.h>

#include "rand.h"

typedef int elem_t;

void merge(elem_t *, int, int, int);

/* sort the (sub)array v from start to end */

void merge_sort (elem_t *v, int start, int end)
{
	int middle;   /* the middle of the subarray */

	/* no elements to sort */
	if (start == end) return;

	/* one element; already sorted! */
	if (start == end - 1) return;

	/* find the middle of the array, splitting it into two subarrays */
	middle = (start + end) / 2;

	/* sort the subarray from start..middle */
	merge_sort (v, start, middle);

	/* sort the subarray from middle..end */
	merge_sort (v, middle, end);

	/* merge the two sorted halves */
	merge (v, start, middle, end);
}

/* merge the subarray v[start..middle] with v[middle..end], placing the
 * result back into v.
 */
void merge (int *v, int start, int middle, int end)
{
	int v1_n, v2_n, v1_index, v2_index, i;

	elem_t *v1 = malloc((middle - start) * sizeof(*v1));
	elem_t *v2 = malloc((end - middle) * sizeof(*v2));

	/* number of elements in first subarray */
	v1_n = middle - start;

	/* number of elements in second subarray */
	v2_n = end - middle;

	/* fill v1 and v2 with the elements of the first and second
	 * subarrays, respectively
	 */
	for (i=0; i<v1_n; i++) v1[i] = v[start + i];
	for (i=0; i<v2_n; i++) v2[i] = v[middle + i];

	/* v1_index and v2_index will index into v1 and v2, respectively... */
	v1_index = 0;
	v2_index = 0;

	/* ... as we pick elements from one or the other to place back
	 * into v
	 */
	for (i=0; (v1_index < v1_n) && (v2_index < v2_n); i++) {

		/* current v1 element less than current v2 element? */
		if (v1[v1_index] <= v2[v2_index])

			/* if so, this element belong as next in v */
			v[start + i] = v1[v1_index++];
		else
			/* otherwise, the element from v2 belongs there */
			v[start + i] = v2[v2_index++];
	}
	/* clean up; either v1 or v2 may have stuff left in it */

	for (; v1_index < v1_n; i++) v[start + i] = v1[v1_index++];
	for (; v2_index < v2_n; i++) v[start + i] = v2[v2_index++];

	free(v1);
	free(v2);
}

static int verify(int *array, int count)
{
	int i;
	int last = array[0];
	for(i = 1; i < count; ++i) {
		int v = array[i];
		if(v < last)
			return 0;
		last = v;
	}

	return 1;
}

int main(int argc, char **argv)
{
	elem_t *array;
	int count, seed;
	int i;

	printf("MergeSort.c\n");

	count = argc > 1 ? atoi(argv[1]) : 10000;
	seed  = argc > 2 ? atoi(argv[2]) : 123456;
	my_srand(seed);

	array = malloc(count * sizeof(array[0]));
	for (i = 0; i < count; ++i)
		array[i] = my_rand();

	printf("Sorting %d random numbers (seed %d)\n", count, seed);

	// Sortieren
	merge_sort(array, 0, count);

	if (verify(array, count)) {
		printf("Verify succeeded.\n");
	} else {
		printf("Verify FAILED!!!!\n");
		return 1;
	}

	return 0;
}
