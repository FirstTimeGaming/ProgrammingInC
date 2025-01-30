#include <stdio.h>

int main(void) {

  // printf("Welcome to \"COP2271\"\nAssignment 2");
  // printf("\nLet's CODE\\Program!\n");

  // printf("Welcome to \"COP2271\"\nAssignment 2\nLet's CODE\\Program!\n");

  // int sum = 7 + 3 * 6 / 2 - 5 % 2;
  // printf("%d", sum);

  int favNumber = 0;
  int birthYear = 0;
  int product;
  printf("Enter your favorite number: ");
  scanf("%d", &favNumber);
  printf("Enter your birth year: ");
  scanf("%d", &birthYear);
  product = favNumber * birthYear;
  printf("Product of the two numbers entered is: %d", product);

  return 0;


}