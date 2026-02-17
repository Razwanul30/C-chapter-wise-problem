#include <stdio.h>
#include <math.h>

int main() {
    double x;
    char T;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the type of trigonometric function (s for sin, c for cos, t for tan): ");
    scanf(" %c", &T);

    if (T == 's' || T == 'S') {
        printf("sin(x) = %lf\n", sin(x));
    } else if (T == 'c' || T == 'C') {
        printf("cos(x) = %lf\n", cos(x));
    } else if (T == 't' || T == 'T') {
        printf("tan(x) = %lf\n", tan(x));
    } else {
        printf("Invalid input.\n");
    }

    return 0;
}
