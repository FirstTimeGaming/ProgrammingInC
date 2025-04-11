#include <stdio.h>

int main() {

  unsigned int value1 = 200000;
  unsigned int value2;

  // a
  unsigned int *uPtr;

  // b
  uPtr = &value1;

  // c
  printf("%d", *uPtr);

  // d
  value2 = *uPtr;

  // e
  printf("\n%p", &value1);

  // f
  printf("\n%p", uPtr);


  return 0;
}
