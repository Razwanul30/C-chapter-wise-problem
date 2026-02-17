#include <stdio.h>

int main() {
    int n = 12345;
    int reversed = 0;
    
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    printf("Reverse of 12345 (while loop): %d\n", reversed);
    return 0;
}