#include <assert.h>
#include <stdbool.h>
#include <stdio.h>

void char_caesar(char *x, int shift) {
  // lowercase letter sent here
  if ((97 <= *x) && (*x <= 122)) {
    *x = *x + shift;
    if (*x > 122) {
      *x = *x - 26;
    }
  }
  // uppercase letters sent here
  else if ((65 <= *x) && (*x <= 90)) {
    *x = *x + shift;
    if (*x > 90) {
      *x = *x - 26;
    }
  }
  return;
}

int main(void) {
  char x;
  int shift;

  // Prompts for a character
  printf("Please type in a character.\n");
  scanf("%c", &x);

  // Prompts for shift value
  printf("Please type in the amount you want to shift by.\n");
  scanf("%d", &shift);
  // Values have been taken and sent to caesar
  char_caesar(&x, shift);
  printf("The new character is %c associated with the shift value %d.", x,
         shift);
}
