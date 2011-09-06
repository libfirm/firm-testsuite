/* sparc backend failed for a combination of many parameters with a non-empty
 * stackframe in omit-frame-pointer mode.
 * testcase extracted from 181.mcf */
typedef long flow_t;
typedef long cost_t;
typedef struct node_t {
	long number;
	char *ident;
} node_t;
typedef struct arc_t {
	node_t *tail, *head;
} arc_t;

int g0;
int *ptr;

void __attribute__((noinline)) update_tree(long cycle_ori,
				 long new_orientation,
				 flow_t delta,
				 flow_t new_flow,
				 node_t *iplus,
				 node_t *jplus,
				 node_t *iminus,
				 node_t *jminus,
				 node_t *w,
				 arc_t *bea,
				 cost_t sigma,
				 flow_t feas_tol
				)
{
	int local;
	ptr = &local;
	if (bea->tail == jplus) {
		g0 = 42;
	}
}

int main(void)
{
	node_t node = { 42, 0 };
	arc_t arc = { &node, &node };
	update_tree(0, 0, 0, 0, &node, &node, &node, &node, &node, &arc, 0, 0);
	printf("%d\n", g0);
	return 0;
}
