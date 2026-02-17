#include <stdio.h>

int main() {
    int num, temp, divisor = 1;

    printf("Enter an integer number: ");
    scanf("%d", &num);

    temp = num;

    // Determine the divisor to extract digits
    while (temp > 0) {
        temp /= 10;
        divisor *= 10;
    }
    divisor /= 10; // Adjust divisor to start from the leftmost digit

    // Display the pattern
    while (divisor > 0) {
        printf("%d\n", num / divisor); // Print the digits from left
        num %= divisor; // Remove the leftmost digit
        divisor /= 10; // Adjust divisor for the next digit
    }

    return 0;
}
