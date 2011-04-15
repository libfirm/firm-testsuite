typedef int int32_t;
typedef long long int int64_t;

struct S0 {
   int32_t f1;
};

int32_t g_2 = 0x825E7A66L;
struct S0 g_630 = {1L};

struct S0 func_45(int64_t p_46)
{
    int32_t *l_612 = &g_2;
    (*l_612) ^= p_46;
    return g_630;
}

int main (int argc, char* argv[])
{
    return 0;
}
