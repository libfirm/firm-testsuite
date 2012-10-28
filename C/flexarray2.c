struct s {
  int foo;
  int a[];
};

struct s s1 = { 666 };

int main() {
  return s1.foo - 666;
}
