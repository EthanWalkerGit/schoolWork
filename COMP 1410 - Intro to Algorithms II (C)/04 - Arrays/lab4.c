// array_equals(a, b, n) returns true exactly when arrays a and b have
// the exact same elements in the same order
// requires: the arrays a and b have the same length n
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

bool array_equals(const int a[], const int b[], const int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] != b[i]) {
      return 0;
    }
  }
  return 1;
}
int main(void) {
  int a[3] = {1, 2, 3};
  int b[3] = {1, 2, 5};
  int n = 3;
  int value = array_equals(a, b, n);
  printf("%d", value);
}