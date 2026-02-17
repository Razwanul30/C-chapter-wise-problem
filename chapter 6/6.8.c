#include <stdio.h>

int main() {
    int age, count = 0;
    for (int i = 0; i < 100; i++) {
        printf("Enter age of person %d: ", i + 1);
        scanf("%d", &age);
        if (age < 0) {
            printf("Invalid age. Please enter a non-negative age.\n");
            continue; // Skip to the next iteration
        }
        if (age >= 50 && age <= 60) {
            count++;
        }
    }
    printf("Number of persons in the age group 50-60: %d\n", count);
    return 0;
}
