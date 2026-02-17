#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

int main() {
  struct student {
    int roll_number;
    char name[50];
    int marks_obtained;
  } students[MAX_STUDENTS], temp;
  int num_students = 0, i, j;
  printf("Enter student details (Enter '0' for roll number to stop):\n");
  while (1) {
    printf("Roll Number: ");
    scanf("%d", &students[num_students].roll_number);
    if (students[num_students].roll_number == 0) {
      break;
    }
    printf("Name: ");
    scanf(" %[^\n]s", students[num_students].name);
    printf("Marks Obtained: ");
    scanf("%d", &students[num_students].marks_obtained);
    num_students++;
    if (num_students >= MAX_STUDENTS) {
      printf("Maximum number of students reached.\n");
      break;
    }
  }
  for (i = 0; i < num_students - 1; i++) {
    for (j = 0; j < num_students - i - 1; j++) {
      if (strcmp(students[j].name, students[j + 1].name) > 0) {
        temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
  printf("\nAlphabetical List of Students:\n");
  printf("Roll No.\tName\tMarks Obtained\n");
  for (i = 0; i < num_students; i++) {
    printf("%d\t\t%s\t\t%d\n", students[i].roll_number, students[i].name,
           students[i].marks_obtained);
  }
  for (i = 0; i < num_students - 1; i++) {
    for (j = 0; j < num_students - i - 1; j++) {
      if (students[j].roll_number > students[j + 1].roll_number) {
        temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
  printf("\nList Sorted on Roll Numbers:\n");
  printf("Roll No.\tName\tMarks Obtained\n");
  for (i = 0; i < num_students; i++) {
    printf("%d\t\t%s\t\t%d\n", students[i].roll_number, students[i].name,
           students[i].marks_obtained);
  }
  for (i = 0; i < num_students - 1; i++) {
    for (j = 0; j < num_students - i - 1; j++) {
      if (students[j].marks_obtained < students[j + 1].marks_obtained) {
        temp = students[j];
        students[j] = students[j + 1];
        students[j + 1] = temp;
      }
    }
  }
  printf("\nList Sorted on Marks (Rank-wise):\n");
  printf("Roll No.\tName\tMarks Obtained\n");
  for (i = 0; i < num_students; i++) {
    printf("%d\t\t%s\t\t%d\n", students[i].roll_number, students[i].name,
           students[i].marks_obtained);
  }
  return 0;
}
