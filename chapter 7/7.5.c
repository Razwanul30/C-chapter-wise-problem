#include <stdio.h>

int main() {
    int marks[100][3], total_marks[100] = {0};
    int highest_marks[3] = {0}, highest_roll[3], overall_highest_marks = 0;
    int overall_highest_roll, i, j;

    printf("Enter the marks of 100 students in 3 subjects:\n");
    for (i = 0; i < 100; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &marks[i][j]);
            total_marks[i] += marks[i][j];
        }
    }

    for (j = 0; j < 3; j++) {
        highest_marks[j] = marks[0][j];
        highest_roll[j] = 1;
        for (i = 1; i < 100; i++) {
            if (marks[i][j] > highest_marks[j]) {
                highest_marks[j] = marks[i][j];
                highest_roll[j] = i + 1;
            }
        }
    }

    overall_highest_marks = total_marks[0];
    overall_highest_roll = 1;
    for (i = 1; i < 100; i++) {
        if (total_marks[i] > overall_highest_marks) {
            overall_highest_marks = total_marks[i];
            overall_highest_roll = i + 1;
        }
    }

    printf("Total marks obtained by each student:\n");
    for (i = 0; i < 100; i++) {
        printf("Student %d: %d\n", i + 1, total_marks[i]);
    }

    printf("\nHighest marks in each subject:\n");
    for (j = 0; j < 3; j++) {
        printf("Subject %d: %d (Roll No: %d)\n", j + 1, highest_marks[j], highest_roll[j]);
    }

    printf("\nStudent with highest total marks: Roll No: %d (Marks: %d)\n", overall_highest_roll, overall_highest_marks);

    return 0;
}