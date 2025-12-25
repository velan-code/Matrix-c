#include <stdio.h>

int main(int argc, char *argv[]) {
  int a[2][2];
  int b[2][2];
  int sum[2][2];

  int i, j; // Allocate memory for looping

  printf("\nEnter A matrix value : ");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &a[i][j]);
    }
  }

  printf("\nEnter B matrix value : ");
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      scanf("%d", &b[i][j]);
    }
  }

  // Sum of a + b matrix
  for (i = 0; i < 2; i++) {
    for (j = 0; j < 2; j++) {
      sum[i][j] = a[i][j] + b[i][j];
    }
  }

  printf("\nResult ::");
  for (i = 0; i < 2; i++) {
    printf("\n");
    for (j = 0; j < 2; j++) {
      printf("%d,\t", sum[i][j]);
    }
  }

  printf("Successfully Program Executed!");

  return 0;
}
