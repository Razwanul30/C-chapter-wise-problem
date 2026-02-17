#include <stdio.h>
#include <math.h>

int main() {
    double x;
    char T;

    printf("Enter the angle in radians: ");
    scanf("%lf", &x);

    printf("Enter the type of trigonometric function (s for sin, c for cos, t for tan): ");
    scanf(" %c", &T);

    switch (T) {
        case 's':
        case 'S':
            printf("sin(x) = %lf\n", sin(x));
            break;
        case 'c':
        case 'C':
            printf("cos(x) = %lf\n", cos(x));
            break;
        case 't':
        case 'T':
            printf("tan(x) = %lf\n", tan(x));
            break;
        default:
            printf("Invalid input.\n");
    }

    return 0;
}
