#include <stdio.h>

#define ROWS 3
#define COLS 4

// Function Prototype
void getMatrix(int rows, int cols, int matrix[ROWS][COLS]);

int main() {
  int matrix[ROWS][COLS];
  int rowSum[ROWS] = {0};

  getMatrix(ROWS, COLS, matrix);

  return 0;
}

// Function to input matrix values
void getMatrix(int rows, int cols, int matrix[ROWS][COLS]) {
  printf("Enter %d integers:\n", ROWS * COLS);
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      scanf("%d", &matrix[i][j]);
    }
  }
}
