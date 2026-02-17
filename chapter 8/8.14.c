#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

int main() {
  struct student {
    int roll_number;
    char name[50];
  } students[MAX_STUDENTS];
  int num_students = 0;
  char name[50];
  int roll_number, i;
  printf("Enter student details (Enter '0' for roll number to stop):\n");
  while (1) {
    printf("Roll Number: ");
    scanf("%d", &roll_number);
    if (roll_number == 0) {
      break;
    }
    students[num_students].roll_number = roll_number;
    printf("Name: ");
    scanf(" %[^\n]s", students[num_students].name);
    num_students++;
    if (num_students >= MAX_STUDENTS) {
      printf("Maximum number of students reached.\n");
      break;
    }
  }
  printf(
      "\nEnter a name to find the roll number, or a roll number to find the "
      "name:\n");
  char input[50];
  scanf(" %[^\n]s", input);
  if (sscanf(input, "%d", &roll_number) == 1) {
    for (i = 0; i < num_students; i++) {
      if (students[i].roll_number == roll_number) {
        printf("Name with Roll Number %d: %s\n", roll_number,
               students[i].name);
        return 0;
      }
    }
    printf("No student found with Roll Number %d\n", roll_number);
  } else {
    for (i = 0; i < num_students; i++) {
      if (strcmp(students[i].name, input) == 0) {
        printf("Roll Number of %s: %d\n", input, students[i].roll_number);
        return 0;
      }
    }
    printf("No student found with name %s\n", input);
  }
  return 0;
}
