struct S0 {
   int f0 : 31;
};

int main(void)
{
    struct S0 local;

    return 0 <= (local.f0 = 0x7FFFFFFF);
}
