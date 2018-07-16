unsigned fac(unsigned n)
{
	unsigned v = 1;
	while (n != 0) {
		/*   _        _
		 *  / \      / \
		 * |  Phi  Phi  |
		 * |   ^  ^ ^   |
		 * |   | /  |   |
		 * |   *   -1   |
		 * |   ^    ^   |
		 *  \_/      \_/
		 *
		 * Only scheduling decision: * or -1 first?
		 * Two separate arguments: (leading to the same decision)
		 * - * can be placed early:
		 *   Its left operand dies, so it does not increase register pressure.
		 *   Also affinity of left Phi can always be fulfilled, because * is the
		 *   only user of the Phi.
		 * - -1 should be placed late:
		 *   Affinity of right Phi can only be fulfilled if its result and operand
		 *   do not interfere.  This is only possible if -1 is the last user of the
		 *   Phi. */
		v *= n--;
	}
	return v;
}
