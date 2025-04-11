#include <stdio.h>

int sumMatrixWithNestedLoops(int rows, int cols, int matrix[rows][cols]);
int sumMatrixWithFlattenedLoop(int rows, int cols, int matrix[rows][cols]);

int main() {
  int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
  };

  int sum1 = sumMatrixWithNestedLoops(3, 4, matrix);
  int sum2 = sumMatrixWithFlattenedLoop(3, 4, matrix);

  printf("Sum using nested loops: %d\n", sum1);
  printf("Sum using flattened loop: %d\n", sum2);

}

int sumMatrixWithNestedLoops(int rows, int cols, int matrix[rows][cols]) {
  int sum = 0;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      sum += matrix[i][j];
    }
  }
  return sum;
}

int sumMatrixWithFlattenedLoop(int rows, int cols, int matrix[rows][cols]) {
  int sum = 0;
  for (int i = 0; i < rows * cols; i++) {
    sum += matrix[i / cols][i % cols];
  }
  return sum;
}