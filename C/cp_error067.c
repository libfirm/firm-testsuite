struct S0 {
   unsigned f0;
};

struct S1 {
   unsigned f0;
   const unsigned : 0;
   struct S0 f1;
};

struct S1 global[1][1] = {{{0x42, {42}}}};

int main(void)
{
    return 0;
}
