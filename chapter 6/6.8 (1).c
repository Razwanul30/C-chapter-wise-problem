#include <stdio.h>

int main() {
    int age, count = 0;

    for (int i = 0; i < 100; i++) {
        scanf("%d", &age);
        if (age >= 50 && age <= 60) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}