#include <stdio.h>

int main() {

  // Problem 1
  for (int i = 1; i <= 6; i+=8) {
    printf("%d\n", i);
  }

  printf("\n");

  // Problem 2
  for (int i = 1; i <= 125; i*=2) {
    printf("%d\n", i);
  }

  printf("\n");

  // Problem 3
  // int x = 24;
  // do {
  //   x -= 4;
  //   printf("%d\n", i);
  // } while (x > 0);

  return 0;
}