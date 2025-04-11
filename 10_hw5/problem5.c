#include <stdio.h>

void foo(float *f_ptr);

int main() {
  float i  = 10;
  float x = 3;

  foo(&i);

  return 0;
}

void foo(float *p) {
  printf("%.2f\n", *p);
}