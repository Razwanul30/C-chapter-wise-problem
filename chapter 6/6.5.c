#include <stdio.h>

int main() {
    int n = 12345;
    int reversed = 0;

    for (; n > 0; n /= 10) {
        reversed = reversed * 10 + n % 10;
    }

    printf("Reverse of 12345 (for loop): %d\n", reversed);
    return 0;
}