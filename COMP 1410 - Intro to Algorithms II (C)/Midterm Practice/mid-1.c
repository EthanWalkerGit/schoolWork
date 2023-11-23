#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int count_ones(int n) {
  int num = n % 10;
  if (n == 0) {
    return 0;
  }
  if (num == 1) {
    n = n - num;
    return 1 + count_ones(n / 10);
  } else {
    n = n - num;
    return count_ones(n / 10);
  }
}

int main() {
  int n;
  scanf("%d", &n);
  int total = count_ones(n);
  printf("%d", total);
}
