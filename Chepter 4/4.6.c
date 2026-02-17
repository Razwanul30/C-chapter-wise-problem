#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("%d %d %d\n", a, b, c); // (a) Three printf statements
    printf("%d %d %d\n", a, b, c); // (b) One printf with format specifiers
    printf("%d %d %d\n", a, b, c); // (c) One printf without specifiers

    return 0;
}