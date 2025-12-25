// Author : Velan
// Date : Dec-25-25 at 6:14pm at DElHI standard time
// Description : Made a Addition of matrix

// Algorithm
/*
 * Get input for Matrix-A
 * Get input for Matrix-B
 * Process Addtion of both (A+B)-matrix
 * Display Result
 */

#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[2][2];
  int b[2][2];
  int sum[2][2];

  int i, j; // Allocate memory for looping

  // Get input for (A matrix)
  printf("\nEnter A matrix value : ");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  // Get input for (B matrix)
  printf("\nEnter B matrix value : ");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Sum of (A + B) matrix
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  // Display Result (Multi matrix)
  printf("\nResult ::");
  for (i = 0; i < 2; i++) {
    printf("\n");
    for (j = 0; j < 2; j++) {
      printf("%d,\t", sum[i][j]);
    }
  }

  printf("\nSuccessfully Program Executed!");
  return 0;
}
