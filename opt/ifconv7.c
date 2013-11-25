typedef struct {
	int uc[1];
} varray_data;

typedef struct {
	int elements_used;
	varray_data data;
} *varray_type;

fn1(data_area, value)
	varray_type *data_area;
	int value;
{
	int a, b;
	do {
		a = 1;
		b = value && value == 0 || value & 1;
		if (b)
			a = 0;
		if (*data_area)
			*data_area = 0;
		(*data_area)->data.uc[(*data_area)->elements_used++] = a;
	} while (b);
}

int main(void)
{
	return 0;
}
