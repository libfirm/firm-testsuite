struct S0 {
  int f0 : 16;
  int f1 : 16;
} a = {0, 42};

struct S0 fn1() {
  return a;
}

void fn2() {
  fn1();
  a.f0 ^= 0;
}

int main() {
  fn2();
  return a.f1 ^ 42;
}
