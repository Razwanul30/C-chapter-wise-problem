#include <stdio.h>

int main() {
    float u, a, t, distance;
    char choice;

    do {
        printf("Enter initial velocity (u) in m/s: ");
        scanf("%f", &u);

        printf("Enter acceleration (a) in m/s^2: ");
        scanf("%f", &a);

        printf("Enter time interval (t) in seconds: ");
        scanf("%f", &t);

        distance = u * t + (0.5 * a * t * t);

        printf("Distance travelled: %.2f meters\n", distance);

        printf("Do you want to calculate for different values of u and a? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover newline character
    } while (choice == 'y' || choice == 'Y');
return 0;
}
