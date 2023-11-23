#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// first_positive(A, n) returns the first positive integer in the array A
// or 0 if no positive integer is in A
// requires: A is of length n >= 1 and A does not contain 0
// all negative entries in A appear before all positive entries

void row_swap(int A[5], const int i, const int j) {
  int B[1] = {A[i]};
  A[j] = A[i];
  A[i] = B[0];
}

void sort_row(int A[5]) {
  int lowest_num = A[0];
  int highest_num = 0;
  for (int i = 0; i < 5; i++) {
    if (A[i] < lowest_num) {
      lowest_num = A[i];
      row_swap(A, i, 0);
    }
    if (A[i] > highest_num) {
      highest_num = A[i];
      row_swap(A, i, 4);
    }
  }
}

int first_positive(const int A[], const int n) {
  int low = 0;
  int high = n - 1;

  sort_row(A);

  while (low <= high) {
    int mid = (low + high) / 2;
    if (A[mid] >= 1) {
      return A[mid];
    } else if (A[mid] < 1) {
      low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return 0;
}

int main() {
  int a[5] = {-9, -2, -9, 8, 1};
  int n = 5;

  int first = first_positive(a, n);
  printf("%d", first);

}