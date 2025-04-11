#include <stdio.h>

int main() {
  // Problem 1
  int x = 0;
  int y = 10;

  if (y > 0) {
    x = 1;
  }

  // Problem 2
  double pay = 13.5;
  int score = 42;

  if (score > 90) {
    pay *= 1.03;
  } else {
    pay *= 1.01;
  }

  // Problem 3
  int c = 0;
  c += 3;

  // Problem 4
  int k = 0;
  k += 1;
  k = k + 1;
  k++;
  ++k;

  // Problem 5
  double n1 = 23.23;
  printf("%.2f", n1);

  // Problem 6
  int i = 1;
  while (i < 10) {
    if (i % 2 == 0) {
      printf("%d\n", i++);
    }
  }

  return 0;
}
