#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// matrix_eq(A, B) returns true exactly when the 5 x 5 matrices
// A and B are equal

bool matrix_eq(const int A[5][5], const int B[5][5]) {
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      if (A[i][j] != B[i][j]) {
        return false;
      }
    }
  }
  return true;
}

int main() {
  int A[5][5] = {{100, 200, 300, 400, 500},
                 {5, 5, 5, 5, 5},
                 {1, 2, 3, 4, 5},
                 {10, 9, 8, 7, 6},
                 {3, 1, 4, 1, 5}};

  int B[5][5] = {{100, 200, 300, 400, 500},
                 {5, 5, 5, 5, 5},
                 {1, 2, 3, 4, 5},
                 {10, 9, 8, 7, 6},
                 {3, 1, 4, 1, 5}};
  assert(matrix_eq(A, B));
}
