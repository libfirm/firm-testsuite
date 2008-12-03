unsigned l = 16;

int main(int argc, char **argv)
{
	unsigned len = l;

	if (1)
		return 0;

	while (len >= 8) {
		len -= 8;
	}
	if (len) do {
	} while (--len);

	return 0;
}
