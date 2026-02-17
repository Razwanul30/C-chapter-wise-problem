#include <stdio.h>

int main() {
    int num, digit1, digit2, digit3, digit4, sum;

    printf("Enter a four-digit integer: ");
    scanf("%d", &num);

    // Extract individual digits
    digit1 = num / 1000;
    digit2 = (num % 1000) / 100;
    digit3 = (num % 100) / 10;
    digit4 = num % 10;

    // Calculate the sum
    sum = digit1 + digit2 + digit3 + digit4;

    printf("Sum of the digits: %d\n", sum);

    return 0;
}
