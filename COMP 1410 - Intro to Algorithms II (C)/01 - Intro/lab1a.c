#include <assert.h>
#include <stdio.h>

int print_triangle(int n) {
  int x = n;
  // Prints the base of the triangle
  while (n >= 1) {
    if (n == 1) {
      while (x >= 1) {
        printf("*");
        --x;
      }
    } else {
      printf("*\n");
      if (n > 2) {
        printf("*");
        // if current iteration is less than initial value but greater than 2
        if (n < x) {
          int i = x;
          while (i > n) {
            printf(" ");
            i--;
          }
        }
      }
    }
    n--;
  }
}

int main() { print_triangle(10); }