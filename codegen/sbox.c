unsigned B0, B1, B2, B3;

void SBoxE1()
{
	unsigned T0 = B0, T1 = B1, T2 = B2, T3 = B3, T4;
	T3 ^= T0; T4  = T1; T1 &= T3; T4 ^= T2; T1 ^= T0; T0 |= T3; T0 ^= T4;
	T4 ^= T3; T3 ^= T2; T2 |= T1; T2 ^= T4; T4 = ~T4; T4 |= T1; T1 ^= T3;
	T1 ^= T4; T3 |= T0; T1 ^= T3; T4 ^= T3;
	B0 = T1; B1 = T4; B2 = T2; B3 = T0;
}
