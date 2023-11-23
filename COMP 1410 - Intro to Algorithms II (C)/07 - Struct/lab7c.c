// select_min(str) returns a pointer to the character of minimal ASCII value
// in the string str (and the first if there are duplicates)
// requires: str is a valid string , length(str) >= 1
char *select_min(char str[]) {
  char *min_char_ptr = &str[0];
  char min_char = str[0];

  for (int i = 1; str[i] != '\0'; i++) {
    if (str[i] < min_char) {
      min_char = str[i];
      min_char_ptr = &str[i];
    }
  }
  return min_char_ptr;
}

int main() {
  char str[] = "zzzdef";
  char *min = select_min(str);
  printf("%c", *min);
}