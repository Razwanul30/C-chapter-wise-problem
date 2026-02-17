#include <stdio.h>

int main() {
    float num1, num2, num3, sum, average, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2, &num3);

    sum = num1 + num2 + num3;
    average = sum / 3;

    largest = (num1 > num2) ? ( (num1 > num3) ? num1 : num3) : ( (num2 > num3) ? num2 : num3);
    smallest = (num1 < num2) ? ( (num1 < num3) ? num1 : num3) : ( (num2 < num3) ? num2 : num3);

    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);
    printf("Largest: %.2f\n", largest);
    printf("Smallest: %.2f\n", smallest);

return 0;
}
