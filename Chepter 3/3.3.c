#include <stdio.h>
#include <math.h>

int main() {
    float num;
    int integralPart, twoRightmostDigits;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    integralPart = (int)num; // Type casting to get the integral part
    twoRightmostDigits = integralPart % 100; // Modulo by 100 to get the last two digits

    printf("Two rightmost digits of the integral part: %02d\n", twoRightmostDigits); // %02d ensures leading zero if needed


}
