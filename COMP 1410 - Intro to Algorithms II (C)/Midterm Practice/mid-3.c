#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// even_odd_sum(A, n, even , odd) updates *even to be the even -sum
// of A and *odd to be the odd-sum of A
// requires: A is of length n
// even and odd point to memory that can be modified
void even_odd_sum(int a[], int n, int *even, int *odd) {
  for (int i = 0; i < n; i++) {
    if (a[i] % 2 == 1) {
      *odd += a[i];
    } else {
      *even += a[i];
    }
  }
  printf("%d ", *odd);
  printf("%d", *even);
}
int main() {
  int a[5] = {0, 0, 0, 0, 0};
  int n = 5;
  int even = 0;
  int odd = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  even_odd_sum(a, n, &even, &odd);
}