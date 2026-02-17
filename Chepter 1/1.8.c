#include <stdio.h>

int main() {
    float a1 = 250, b1 = 85, c1 = 25;
    float a2 = 300, b2 = 70, c2 = 70;

    printf("For a = 250, b = 85, c = 25\n");
    printf("x = %.2f\n", a1 / (b1 - c1));

    if (b2 == c2) {
        printf("For a = 300, b = 70, c = 70\n");
        printf("Division by zero is undefined!\n");
    } else {
        printf("x = %.2f\n", a2 / (b2 - c2));
    }

    return 0;
}
