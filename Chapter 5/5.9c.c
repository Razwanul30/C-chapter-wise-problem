#include <stdio.h>

int main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    y = (x < 0) ? 1 : ((x == 0) ? 0 : -1);

    printf("The value of y is: %d\n", y);

    return 0;
}