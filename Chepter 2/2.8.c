#include <stdio.h>

int main() {
    float num1, num2;
    int sum_int;
    
    printf("Enter two floating point numbers: ");
    scanf("%f %f", &num1, &num2);
    
    sum_int = (int)(num1 + num2); // Explicit type casting
    
    printf("num1 = %f\n", num1);
    printf("num2 = %f\n", num2);
    printf("sum_int = %d\n", sum_int);
    
    return 0;
}