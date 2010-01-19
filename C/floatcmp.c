/*$ -std=c99 $*/

#include <stdio.h>
#include <math.h>

#define test(type, name, op)                    \
static void test_##type##_##name(type a, type b) {       \
  if (a op b)                                   \
    printf("%f " #op " %f = true\n", a, b);    \
  else                                          \
    printf("%f " #op " %f = false\n", a, b);   \
}

#define testu(type, op)                    \
static void test_##type##_##op(type a, type b) {       \
  if (op(a,b))                                   \
    printf(#op "(%f, %f) = true\n", a, b);    \
  else                                          \
    printf(#op "(%f, %f) = false\n", a, b);   \
}

#define testnu(type, op)                    \
static void test_##type##_not##op(type a, type b) {       \
  if (!op(a,b))                                 \
    printf("!" #op "(%f, %f) = true\n", a, b);  \
  else                                          \
    printf("!" #op "(%f, %f) = false\n", a, b); \
}

#define test_t(type, name, op) \
static int test_t_##type##_##name(type a, type b) { \
  return (a op b); \
}

#define test_f(type, name, op) \
static int test_f_##type##_##name(type a, type b) { \
  return !(a op b); \
}

#define test_tu(type, op) \
static int test_t_##type##_##op(type a, type b) { \
  return op(a,b); \
}

#define test_fu(type, op) \
static int test_f_##type##_##op(type a, type b) { \
  return !op(a, b); \
}

test(float, l,  <)
test(float, le, <=)
test(float, eq, ==)
test(float, ge, >=)
test(float, g,  >)
test(float, lg, !=)
test_t(float, l,  <)
test_t(float, le, <=)
test_t(float, eq, ==)
test_t(float, ge, >=)
test_t(float, g,  >)
test_t(float, lg, !=)
test_f(float, l,  <)
test_f(float, le, <=)
test_f(float, eq, ==)
test_f(float, ge, >=)
test_f(float, g,  >)
test_f(float, lg, !=)

testu(float, isgreater)
testu(float, isgreaterequal)
testu(float, isless)
testu(float, islessequal)
testu(float, islessgreater)
testu(float, isunordered)

testnu(float, isgreater)
testnu(float, isgreaterequal)
testnu(float, isless)
testnu(float, islessequal)
testnu(float, islessgreater)
testnu(float, isunordered)

test_tu(float, isgreater)
test_tu(float, isgreaterequal)
test_tu(float, isless)
test_tu(float, islessequal)
test_tu(float, islessgreater)
test_tu(float, isunordered)

test_fu(float, isgreater)
test_fu(float, isgreaterequal)
test_fu(float, isless)
test_fu(float, islessequal)
test_fu(float, islessgreater)
test_fu(float, isunordered)

/*-------------------------- */
test(double, l,  <)
test(double, le, <=)
test(double, eq, ==)
test(double, ge, >=)
test(double, g,  >)
test(double, lg, !=)

testu(double, isgreater)
testu(double, isgreaterequal)
testu(double, isless)
testu(double, islessequal)
testu(double, islessgreater)
testu(double, isunordered)

testnu(double, isgreater)
testnu(double, isgreaterequal)
testnu(double, isless)
testnu(double, islessequal)
testnu(double, islessgreater)
testnu(double, isunordered)

#undef test
#undef test_t
#undef test_f

double dA = 3.0, dB = 4.0, dNan = NAN;
float fA = 3.0, fB = 4.0, fNan = NAN;

int main() {
#define test(type, name, a, b) test_##type##_##name(a,b)
#define test_t(type, name, a, b) printf("%s %d\n", "test_t_" #type "_" #name, test_t_##type##_##name(a,b))
#define test_f(type, name, a, b) printf("%s %d\n", "test_f_" #type "_" #name, test_f_##type##_##name(a,b))

  test(float, l,  fA, fA);
  test(float, le, fA, fA);
  test(float, eq, fA, fA);
  test(float, ge, fA, fA);
  test(float, g,  fA, fA);
  test(float, lg, fA, fA);
  test(float, l,  fA, fB);
  test(float, le, fA, fB);
  test(float, eq, fA, fB);
  test(float, ge, fA, fB);
  test(float, g,  fA, fB);
  test(float, lg, fA, fB);
  test(float, l,  fA, fNan);
  test(float, le, fA, fNan);
  test(float, eq, fA, fNan);
  test(float, ge, fA, fNan);
  test(float, g,  fA, fNan);
  test(float, lg, fA, fNan);
  test(float, lg, fNan, fNan);

  test(float, isgreater, fA, fB);
  test(float, isgreaterequal, fA, fB);
  test(float, isless, fA, fB);
  test(float, islessequal, fA, fB);
  test(float, islessgreater, fA, fB);
  test(float, isunordered, fA, fB);
  test(float, isgreater, fA, fNan);
  test(float, isgreaterequal, fA, fNan);
  test(float, isless, fA, fNan);
  test(float, islessequal, fA, fNan);
  test(float, islessgreater, fA, fNan);
  test(float, isunordered, fA, fNan);
  test(float, islessgreater, fA, fB);
  test(float, islessgreater, fNan, fNan);

  test(float, notisgreater, fA, fNan);
  test(float, notisgreaterequal, fA, fNan);
  test(float, notisless, fA, fNan);
  test(float, notislessequal, fA, fNan);
  test(float, notislessgreater, fA, fNan);
  test(float, notisunordered, fA, fNan);

  test_t(float, l,  fA, fA);
  test_t(float, le, fA, fA);
  test_t(float, eq, fA, fA);
  test_t(float, ge, fA, fA);
  test_t(float, g,  fA, fA);
  test_t(float, lg, fA, fA);
  test_t(float, l,  fA, fB);
  test_t(float, le, fA, fB);
  test_t(float, eq, fA, fB);
  test_t(float, ge, fA, fB);
  test_t(float, g,  fA, fB);
  test_t(float, lg, fA, fB);
  test_t(float, l,  fA, fNan);
  test_t(float, le, fA, fNan);
  test_t(float, eq, fA, fNan);
  test_t(float, ge, fA, fNan);
  test_t(float, g,  fA, fNan);
  test_t(float, lg, fA, fNan);
  test_t(float, isgreater, fA, fB);
  test_t(float, isgreaterequal, fA, fB);
  test_t(float, isless, fA, fB);
  test_t(float, islessequal, fA, fB);
  test_t(float, islessgreater, fA, fB);
  test_t(float, isunordered, fA, fB);
  test_t(float, isgreater, fA, fA);
  test_t(float, isgreaterequal, fA, fA);
  test_t(float, isless, fA, fA);
  test_t(float, islessequal, fA, fA);
  test_t(float, islessgreater, fA, fA);
  test_t(float, isunordered, fA, fA);
  test_t(float, isgreater, fA, fNan);
  test_t(float, isgreaterequal, fA, fNan);
  test_t(float, isless, fA, fNan);
  test_t(float, islessequal, fA, fNan);
  test_t(float, islessgreater, fA, fNan);
  test_t(float, isunordered, fA, fNan);

  test_f(float, l,  fA, fA);
  test_f(float, le, fA, fA);
  test_f(float, eq, fA, fA);
  test_f(float, ge, fA, fA);
  test_f(float, g,  fA, fA);
  test_f(float, lg, fA, fA);
  test_f(float, l,  fA, fB);
  test_f(float, le, fA, fB);
  test_f(float, eq, fA, fB);
  test_f(float, ge, fA, fB);
  test_f(float, g,  fA, fB);
  test_f(float, lg, fA, fB);
  test_f(float, l,  fA, fNan);
  test_f(float, le, fA, fNan);
  test_f(float, eq, fA, fNan);
  test_f(float, ge, fA, fNan);
  test_f(float, g,  fA, fNan);
  test_f(float, lg, fA, fNan);
  test_f(float, isgreater, fA, fB);
  test_f(float, isgreaterequal, fA, fB);
  test_f(float, isless, fA, fB);
  test_f(float, islessequal, fA, fB);
  test_f(float, islessgreater, fA, fB);
  test_f(float, isunordered, fA, fB);
  test_f(float, isgreater, fA, fA);
  test_f(float, isgreaterequal, fA, fA);
  test_f(float, isless, fA, fA);
  test_f(float, islessequal, fA, fA);
  test_f(float, islessgreater, fA, fA);
  test_f(float, isunordered, fA, fA);
  test_f(float, isgreater, fA, fNan);
  test_f(float, isgreaterequal, fA, fNan);
  test_f(float, isless, fA, fNan);
  test_f(float, islessequal, fA, fNan);
  test_f(float, islessgreater, fA, fNan);
  test_f(float, isunordered, fA, fNan);

  test(double, l,  dA, dA);
  test(double, le, dA, dA);
  test(double, eq, dA, dA);
  test(double, ge, dA, dA);
  test(double, g,  dA, dA);
  test(double, lg, dA, dA);
  test(double, l,  dA, dB);
  test(double, le, dA, dB);
  test(double, eq, dA, dB);
  test(double, ge, dA, dB);
  test(double, g,  dA, dB);
  test(double, lg, dA, dB);
  test(double, l,  dA, dNan);
  test(double, le, dA, dNan);
  test(double, eq, dA, dNan);
  test(double, ge, dA, dNan);
  test(double, g,  dA, dNan);
  test(double, lg, dA, dNan);
  test(double, lg, dNan, dNan);

  test(double, isgreater, dA, dB);
  test(double, isgreaterequal, dA, dB);
  test(double, isless, dA, dB);
  test(double, islessequal, dA, dB);
  test(double, islessgreater, dA, dB);
  test(double, isunordered, dA, dB);
  test(double, isgreater, dA, dNan);
  test(double, isgreaterequal, dA, dNan);
  test(double, isless, dA, dNan);
  test(double, islessequal, dA, dNan);
  test(double, islessgreater, dA, dNan);
  test(double, isunordered, dA, dNan);
  test(double, islessgreater, dA, dB);
  test(double, islessgreater, dNan, dNan);

  test(double, notisgreater, dA, dNan);
  test(double, notisgreaterequal, dA, dNan);
  test(double, notisless, dA, dNan);
  test(double, notislessequal, dA, dNan);
  test(double, notislessgreater, dA, dNan);
  test(double, notisunordered, dA, dNan);
}
