int x = 2;

int __attribute__((noinline)) f() {
   return x+1;
}

int main(void) {
   printf("%d\n", x + f());
   /* The load of x must happen before the call, the add afterwards.
    * If Loads do not have a memory out, then the dependency call->load is not seen.
    */
   return 0;
}
