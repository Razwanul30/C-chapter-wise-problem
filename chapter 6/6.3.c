#include <stdio.h>

int main() {
    int number = 12345;
    int sum = 0;
    
    while (number > 0) {
        sum += number % 10;
        number /= 10;
    }
    
    printf("Sum of digits of 12345: %d\n", sum);
    return 0;
}