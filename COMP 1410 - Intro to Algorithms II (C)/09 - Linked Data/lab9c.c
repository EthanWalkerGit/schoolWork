#include <assert.h>
#include <malloc.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

// new_name; allocates memory to hold new_name (caller must free)
// change_name(s, new_name) renames the student s to have the name given by
// returns true when the name was successfully changed
// requires: s points to a valid student and new_name points to a valid string

struct student {
  int id;
  char *name;
};

bool new_name(struct student *s, char *new_name) {
  s->name = malloc(strlen(new_name) + 1);
  if (s->name == NULL) {
    free(s); 
    return false;
  }
  return true;
}

bool change_name(struct student *s, char *new_name) {
  strcpy(s->name, new_name);
  return true;
}

int main() {
  struct student *s = malloc(sizeof(struct student));

  new_name(s, "Alice");

  assert(new_name(s, "Alice") == true);
  change_name(s, "Bob");
  printf("%s", s->name);
}