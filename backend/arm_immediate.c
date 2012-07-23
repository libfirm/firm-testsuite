/* exercise arm immediate encodings */
unsigned imm[20];
unsigned not_imm[20];

extern int printf(const char *str, ...);

int main(void)
{
	int r;
	int n = 0;
	int i = 0;

	/* the following values can be encoded as an immediate */
	imm[i++] += 0xFF;
	imm[i++] += 0x104;
	imm[i++] += 0xFF0;
	imm[i++] += 0xFF00;
	imm[i++] += 0xFF000;
	imm[i++] += 0xFF000000;
	imm[i++] += 0xF0000003;
	imm[i++] += 0xF000000F;
	imm[i++] += 0x30000002;


	/* the following values can't */
	not_imm[n++] += 0x101;
	not_imm[n++] += 0x102;
	not_imm[n++] += 0xFF1;
	not_imm[n++] += 0xFF04;
	not_imm[n++] += 0xFF003;
	not_imm[n++] += 0xFFFFFFFF;
	not_imm[n++] += 0xF000001F;
	not_imm[n++] += 0xFFFFFF00;
	not_imm[n++] += 0xFFFF00FF;
	not_imm[n++] += 0xFF00FFFF;
	not_imm[n++] += 0x00FFFFFF;

	for (r = 0; r < i; ++r) {
		printf("%X\n", imm[r]);
	}
	for (r = 0; r < n; ++r) {
		printf("%X\n", not_imm[r]);
	}
	return 0;
}
