#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}