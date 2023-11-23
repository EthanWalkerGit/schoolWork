#include <stdio.h>

// swap_to_back(str, c) swaps the last character in the string str with the
// character pointed to by c
// requires: str is a valid string that can be modified , length(str) >= 1
// c points to a character in str
void swap_to_back(char str[], char *c) {
  while (*str != '\0') {
    str++;
  }
  str--;
};

int main() {
  char str[] = "ethics";
  char *c = &str[3];
}