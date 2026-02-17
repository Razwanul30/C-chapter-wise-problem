#include <stdio.h>
#include <math.h>
int main () {
    float num;
    int integralPart,rightmostDigit;
    printf("Enter a floating-point number: ");
    scanf("%f",&num);
    integralPart = (int)num;   //Type casting to get the integral part
    rightmostDigit = integralPart % 10; //  Modulo by 10 to get the last digit
    printf("Rightmost digit of the integral part: %d\n",rightmostDigit);

    return 0;
}
