#include <stdio.h>

int main() {
    int sum = 0, count = 0;

    for (int i = 0; i <= 100; i++) {
        if (i % 6 == 0 && i % 4 != 0) {
            sum += i;
            count++;
        }
    }

    printf("The sum of all integers between 0 and 100 that are divisible by 6 but not divisible by 4 is: %d\n", sum);
    printf("The number of such values is: %d\n", count);

    return 0;
}