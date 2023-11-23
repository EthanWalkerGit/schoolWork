// str_sort(str) sorts the characters in a string in ascending order
// requires: str points to a valid string that can be modified
void swap_to_front(char str[], char *c) {
  char temp = str[0];
  str[0] = *c;
  *c = temp;
}

char *select_min(char str[]) {
  char min = str[0];
  while (*str != '\0') {
    if (*str < min) {
      min = *str;
    }
    str++;
  }
  swap_to_front(str, &min);
}

void str_sort(char str[]) {
  char min = str[0];
  select_min(str);
  while (*str != '\0') {
    if (*str < min) {
      printf("%c", *str);
      swap_to_front(str, &min);
    }
    str++;
  }
};

int main() {
  char str[] = "zzzdef";
  str_sort(str);
}