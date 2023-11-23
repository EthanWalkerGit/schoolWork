#include <assert.h>
#include <stdio.h>

void print_xbox(float n) {
  int x = n;
  int p = n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      if ((i == 1) || (i == x)) {
        printf("*");
      } else {
        if ((j != 1) && (j != x)) {
          if ((i == round(n / 2)) && (j == round(n / 2)) && (p % 2)) {
            printf("X");
            continue;
          } else if (j == i) {
            printf("\\");
          } else if (((n - 1) - j) == (i - 2)) {
            printf("/");
          } else {
            printf(" ");
          }
        } else {
          printf("*");
        }
      }
    }
    printf("\n");
  }
}

int main() { print_xbox(11); }