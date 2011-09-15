struct S0 {
   short f0;
   int   f1;
};

static struct S0  global     = {1, 0x42};
static struct S0 *global_ptr = &global;

int main(void)
{
    short     *global_f0_ptr = &global.f0;
    struct S0  local         = {0, 0x42};

    *global_f0_ptr = 42;
    *global_ptr    = local;

    return global.f0;
}
