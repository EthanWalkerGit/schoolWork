// sort_matrix(A, n) sorts the rows of the 5 x 5 matrix A by the entries in
// the initial column
// requires: A points to a 5 x 5 matrix that can be modified
void matrix_swap(int A[5][5], const int i, const int j) {
  int B[5] = {0, 0, 0, 0, 0};
  for (int k = 0; k < 5; k++) {
    B[k] = A[i][k];
    A[i][k] = A[j][k];
    A[j][k] = B[k];
  }
}

void sort_matrix(int A[5][5]) {
  int lowest_row = A[0][0];
  int highest_row = 0;
  for (int i = 0; i < 5; i++) {
    if (A[i][0] < lowest_row) {
      lowest_row = A[i][0];
      matrix_swap(A, 0, i);
    }
    if (A[i][0] > highest_row) {
      highest_row = A[i][0];
      matrix_swap(A, 4, i);
    }
  }
}

void show(int A[5][5]) {
  for (int i = 0; i < 5; i++) {
    printf("\n");
    for (int j = 0; j < 5; j++) {
      printf("%d", A[i][j]);
    }
  }
  printf("\n");
}

int main() {
  int A[5][5] = {{100, 200, 300, 400, 500},
                 {5, 5, 5, 5, 5},
                 {1, 2, 3, 4, 5},
                 {10, 9, 8, 7, 6},
                 {3, 1, 4, 1, 5}};

  sort_matrix(A);
  show(A);
}