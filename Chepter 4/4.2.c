#include <stdio.h>

int main() {
    float x, y;
    printf("Enter values for x and y: ");
    scanf("%f %f", &x, &y);

    printf("x + y = %.2f, x - y = %.2f, (x+y)(x-y) = %.2f\n", x + y, x - y, (x + y) * (x - y));

    return 0;
}