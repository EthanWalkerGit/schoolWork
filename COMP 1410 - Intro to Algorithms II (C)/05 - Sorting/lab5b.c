#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// matrix_swap(A, i, j) swaps the ith and jth row of matrix A
// requires: 0 <= i < 5 and 0 <= j < 5
// A points to a 5 x 5 matrix that can be modified
void matrix_swap(int A[5][5], const int i, const int j) {
  int B[5] = {0, 0, 0, 0, 0};
  for (int k = 0; k < 5; k++) {
    B[k] = A[i][k];
    A[i][k] = A[j][k];
    A[j][k] = B[k];
  }
}

int main() {
  int i = 1;
  int j = 3;
  int A[5][5] = {{100, 200, 300, 400, 500},
                 {5, 5, 5, 5, 5},
                 {1, 2, 3, 4, 5},
                 {10, 9, 8, 7, 6},
                 {3, 1, 4, 1, 5}};

  matrix_swap(A, i, j);
}