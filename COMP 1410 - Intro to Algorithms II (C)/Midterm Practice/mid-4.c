#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// column_maxs(A, n, maxs) updates the array maxs to contain the
// maximums of the columns of the n x 5 matrix A
// requires: 1 <= n
// maxs points to an array of size 5
void column_maxs(int a[][5], int n, int maxs[]) {
  for (int i = 0; i < n; i++) {
    if (a[0][i] > a[1][i]) {
      maxs[i] = a[0][i];
      printf("%d", maxs[i]);
    } else {
      maxs[i] = a[1][i];
      printf("%d", maxs[i]);
    }
  }
}

int main() {
  int a[2][5] = {{1, 2, 3, 4, 5}, {6, 7, 8, 9, 4}};
  int n = 5;
  int maxs[5] = {0, 0, 0, 0, 0};
  column_maxs(a, n, maxs);
}