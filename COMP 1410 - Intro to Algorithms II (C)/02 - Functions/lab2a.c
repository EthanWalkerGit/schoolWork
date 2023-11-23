// first_digit(n) returns the first decimal digit of n
// requires: 0 <= n < 10^9
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int first_digit(int n) {
  if (n >= 10)
    n = n / 10;

  if (n < 10)
    return;

  first_digit(n);
}

int main(void) {
  int n;

  printf("Please type in a number that is between 0 and 10000.\n");
  scanf("%d", &n);

  if ((0 <= n) && (n < pow(10, 9))) {
    first_digit(n);
    printf("The first digit is %d", first_digit(n));
  } else {
    printf("That is not a valid number.\n");
  }
  return 0;
}