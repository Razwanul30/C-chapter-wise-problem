#include <stdio.h>

int main() {
    float x, y;
    printf("Enter two numbers: ");
    scanf("%f %f", &x, &y);

    printf("Sum = %.2f\n", x + y);
    printf("Difference = %.2f\n", x - y);
    printf("Product = %.2f\n", x * y);

    if (y != 0)
        printf("Division = %.2f\n", x / y);
    else
        printf("Division by zero is not allowed!\n");

    return 0;
}
