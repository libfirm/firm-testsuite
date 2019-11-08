struct s_short_int {
    unsigned short a;
    unsigned int b;
};

struct s_char_char_arr {
    unsigned char len;
    unsigned char arr[3];
};

struct s_int_int {
    unsigned int a;
    unsigned int b;
};

struct s_short_short {
    unsigned short a;
    unsigned short b;
};

struct s_char_char_short {
    unsigned char a;
    unsigned char b;
    unsigned short c;
};

struct s_short_arr {
    unsigned short arr[2];
};

struct s_int {
    unsigned int a;
};

struct s_long_arr {
    unsigned long arr[2];
};

struct s_longlong {
    unsigned long long a;
};

struct s_longlong_int {
    unsigned long long a;
    unsigned int b;
};

int check (int attr, ...);

int check_long_arr(struct s_long_arr);
