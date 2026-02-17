#include <stdio.h>
#include <math.h>

int main() {
    float num;

    printf("Enter a real number: ");
    scanf("%f", &num);

    printf("Smallest integer not less than the number: %.0f\tThe given number: %f\tLargest integer not greater than the number: %.0f\n", ceil(num), num, floor(num));

    return 0;
}
