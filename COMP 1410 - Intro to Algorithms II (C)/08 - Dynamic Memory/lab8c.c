#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

struct student {
  int id;        // student ID
  char name[20]; // first name of student
};

// find_id(id, arr, n, found_name) searches for a student with given id in arr;
//   returns true if such a student is found and found_name is updated to
//   hold the student's name; otherwise returns false
// requires: arr has length n
//           students in arr have unique ids
//           found_name points to enough memory to hold a name
bool find_id(int id, struct student arr[], int n, char *found_name) {
  for (int i = 0; i < n; i++) {
    if (arr[i].id == id) {
      strcpy(found_name, arr[i].name);
      return true;
    }
  }
  return false;
}

int main() {
  int id = 1;
  int n = 4;
  char name[20];
  char *found_name = name;

  struct student arr[4] = {
      {1, "Bob"},
      {2, "Alice"},
      {3, "Ethan"},
      {4, "James"},
  };

  assert(find_id(id, arr, n, found_name) == true);
  int id2 = 2;
  assert(find_id(id2, arr, n, found_name) == true);
  int id3 = 0;
  assert(find_id(id3, arr, n, found_name) == false);
}
