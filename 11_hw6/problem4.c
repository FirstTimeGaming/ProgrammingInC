#include <stdio.h>

void print2DArray(int rows, int cols, int arr[rows][cols]);

int main() {
  int t[2][5] = {
    {1, 2, 3, 4, 5},
    {6, 7, 8, 9, 10}
  };

  printf("Row 2, Col 1 = %d\n", t[1][0]);
  printf("Row 2, Col 2 = %d\n", t[1][1]);
  printf("Row 2, Col 3 = %d\n", t[1][2]);
  printf("Row 2, Col 4 = %d\n", t[1][3]);
  printf("Row 2, Col 5 = %d\n", t[1][4]);

  printf("\n");

  printf("Row 1, Col 3 = %d\n", t[0][2]);
  printf("Row 1, Col 3 = %d\n", t[1][2]);

  t[0][1] = 0;

  print2DArray(2, 5, t);

  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      t[i][j] = 0;
    }
  }

  printf("\n");

  print2DArray(2, 5, t);

  printf("\n");

  printf("Enter %d integers:\n", 2 * 5);
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      scanf("%d", &t[i][j]);
    }
  }

  print2DArray(2, 5, t);
  printf("\n");

  int smallest = t[0][0];
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 5; j++) {
      if (t[i][j] < smallest) {
        smallest = t[i][j];
      }
    }
  }

  printf("%d", smallest);



}

void print2DArray(int rows, int cols, int arr[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      printf("%d ", arr[i][j]);
    }
    printf("\n");  // Newline after each row
  }
}

void setAllZero(int rows, int cols, int arr[rows][cols]) {
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      arr[i][j] = 0;
    }
  }
}