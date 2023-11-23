// double_digits(n) returns the number consisting of the decimal digits of n
// doubled , so 123 becomes 112233
// requires: 0 <= n < 10ˆ4
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

int double_digit(int n) {
  if (n < 10) {
    return n * 11;
    // input is doubled if one number
  } else {
    int num = n % 10;
    // reducing by 1 decimal
    int total = double_digit(n / 10);
    // number after said reduction and recursion
    return (total * 100) + (num * 11);
    // shifting and adding doubled digit
  }
}

int main(void) {
  int n;

  printf("Please type in a number that is between 0 and 10000.\n");
  scanf("%d", &n);

  if ((0 <= n) && (n < pow(10, 4))) {
    double_digit(n); // rf
    printf("The number doubled is %d", double_digit(n));
  }

  else {
    printf("That is not a valid number.\n");
  }
  return 0;
}