#ifdef _MSC_VER
#define NO_INLINE __declspec(noinline)
#else
#define NO_INLINE __attribute__((noinline))
#endif

int x = 2;

int NO_INLINE f() {
   return x+1;
}

int main(void) {
   printf("%d\n", x + f());
   /* The load of x must happen before the call, the add afterwards.
    * If Loads do not have a memory out, then the dependency call->load is not seen.
    */
   return 0;
}
