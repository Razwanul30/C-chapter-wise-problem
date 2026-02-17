#include <stdio.h>

int main() {
    int m = 5;
    long long result = 1;

    for (int i = 1; i <= m; i++) {
        result *= i;
    }
    
    printf("Factorial of 5: %lld\n", result);
    return 0;
}