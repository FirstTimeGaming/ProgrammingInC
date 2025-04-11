#include <stdio.h>
#include <stdlib.h>

int random(int min, int max);

int main() {
  for (int i = 0; i < 10; i++) {
    printf("\n%d", random(0,10));
  }

  printf("\n");

  for (int i = 0; i < 20; i++) {
    printf("\n%d", random(-3,18));
  }

  printf("\n");


  for (int i = 0; i < 50; i++) {
    printf("\n%d", random(-127,128));
  }

}

int random(int min, int max) {
  return rand() % (max - min + 1) + min;
}