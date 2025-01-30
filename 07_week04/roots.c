#include <stdio.h>
#include <math.h>


// The problem computes the roots of a quadratic equation

// Function prototypes
void printPrompt(char ch);
int getCoefficient(void);
int getDiscriminant(int a, int b, int c);
void printRoots(int a, int b, int c);


int main() {
  printPrompt('a');
  int a = getCoefficient();
  printPrompt('b');
  int b = getCoefficient();
  printPrompt('c');
  int c = getCoefficient();
  printRoots(a, b, c);

  return 0;

}

void printPrompt(char ch) {
  printf("Enter the coefficient %c:", ch);
}

int getCoefficient(void) {
  int coefficient;
  scanf("%d", &coefficient);
  return coefficient;
}

int getDiscriminant(int a, int b, int c) {
  return b * b - 4 * a * c;
}

void printRoots(int a, int b, int c) {
  int discriminant = getDiscriminant(a, b, c);
  if (discriminant > 0) {
    double root1 = (double)(-b + sqrt(discriminant)) / (2 * a);
    double root2 = (double)(-b - sqrt(discriminant)) / (2 * a);
    printf("The roots are real and are %f and %f\n", root1, root2);
  } else if (discriminant == 0) {
    double root = (double)(-b) / (2 * a);
    printf("The singular root is real and is %f\n", root);
  } else {
    printf("The roots are complex\n");
  }
}
