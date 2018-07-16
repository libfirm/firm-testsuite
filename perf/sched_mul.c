unsigned long long mul(unsigned a, int b)
{
	/* On ia32:
	 *  a    b
	 * ^ ^  ^ ^
	 * |  \/  |
	 * |  /\ Cltd
	 * | |  | ^
	 * | |  | |
	 * Mul  And
	 * ^ ^   ^
	 * L H   |
	 * |  \ /
	 * |  Sub
	 * |   |
	 *  \ /
	 *  Ret
	 *
	 * Scheduling decision: Mul or And first?
	 * - Observation: Whether And uses Cltd or b does not change overall pressure
	 * - Pressure is 2 (a, b) initially
	 * - And first: pressure 3; then Mul is last use of a and b; stays at 3
	 * - Mul first: pressure 4; then And is last use of a and b; drops to 3
	 */
	return (unsigned long long)a * b;
}
