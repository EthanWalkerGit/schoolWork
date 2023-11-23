// change_name(s, new_name) renames the student s to have the name given by
// new_name
// requires: s points to a valid student that can be modified
// new_name points to a valid string of length at most 19
#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct student {
  int id;        // student id
  char name[20]; // first name of student
};

void change_name(struct student *s, char *new_name) {
  strcpy(new_name, s->name);
}

int find_name(char *name, struct student arr[], int n, int ids[]) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (!strcmp(arr[i].name, name)) {
      ids[cnt] = arr[i].id;
      cnt++;
    }
  }
  return cnt;
}

int main() {
  // struct student s1 = {33, "Alex"};
  // change_name(&s1, "Adam");

  // printf("%s\n", s1.name);

  struct student arr[4] = {
      {44, "Adam"}, {54, "Alex"}, {34, "Sarah"}, {11, "Adam"}};
  int ids[10];
}
