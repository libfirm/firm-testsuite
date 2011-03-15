extern int printf(const char *str, ...);

static void dumpMem(void* ptr, unsigned size)
{
    unsigned i;
    unsigned char* p = ptr;
    printf("\n");
    for(i = 0; i < size; ++i) {
        printf("%02x", (unsigned) p[i]);
        if((i % 4) == 3) {
            printf("\n");
        }
    }
    printf("\n");
}
