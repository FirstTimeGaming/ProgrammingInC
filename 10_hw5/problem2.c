#include <stdio.h>

int main() {

  int *ptr;
  int x;
  ptr = &x;
  *ptr = 0;
  printf("\n*ptr = %d", *ptr);
  *ptr += 5;
  printf("\n*ptr = %d", *ptr);
  (*ptr)++;
  printf("\n*ptr = %d", *ptr);
  return 0;

}


