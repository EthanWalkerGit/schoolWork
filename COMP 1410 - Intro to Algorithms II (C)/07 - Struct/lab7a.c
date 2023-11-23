#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

// swap_to_front(str, c) swaps the initial character in the string str with the
// character pointed to by c
// requires: str is a valid string that can be modified , length(str) >= 1
// c points to a character in str
void swap_to_front(char str[], char *c) {
  char temp = str[0];
  str[0] = *c;
  *c = temp;
}

int main() {
  char str[] = "ethics";
  char *c = &str[1];

  swap_to_front(str, c);

  for (int i = 0; i < 6; i++) {
    printf("str[%d] = %c\n", i, str[i]);
  }
}