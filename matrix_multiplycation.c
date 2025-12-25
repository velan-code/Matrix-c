// Author : Velan
// Date : Dec-25-25 at 7:45pm at DElHI standard time
// Description : Made a Multiplycation of matrix

// Algorithm
/*
 * Get input for Matrix-A
 * Get input for Matrix-B
 * Process Multiplycation of both (A*B)-matrix
 * Display Result
 */

#include <stdio.h>

int main() {

  int a[50][50];
  int b[50][50];
  int multi[50][50];

  int row, colw;
  printf("\nEnter teh number of Row: ");
  scanf("%d", &row);
  printf("\nEnter the number of Colw: ");
  scanf("%d", &colw);

  // Get matrix A value
  printf("Enter the A matrix : ");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < colw; j++) {
      printf("\n\ta[%d][%d] : ", i, j);
      scanf("%d", &a[i][j]);
    }
  }

  // Get matrix B value
  printf("Enter the B matrix : ");
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < colw; j++) {
      printf("\n\tb[%d][%d] : ", i, j);
      scanf("%d", &b[i][j]);
    }
  }

  // Process multiplycation
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < colw; j++) {
      multi[i][j] = a[i][j] * b[j][i];
    }
  }

  // Display Result
  for (int i = 0; i < row; i++) {
    for (int j = 0; j < colw; j++) {
      printf("\n\tmultiplycation[%d][%d] : %d", i, j, multi[i][j]);
    }
  }

  printf("\nSuccessfully Program Executed!");
  return 0;
}
