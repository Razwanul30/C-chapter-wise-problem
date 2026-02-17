#include <stdio.h>
#include <math.h>

int main() {
    float l, r, c, frequency;

    printf("Enter inductance (L): ");
    scanf("%f", &l);

    printf("Enter resistance (R): ");
    scanf("%f", &r);

    printf("Capacitance (C) \t Frequency\n");

    for (c = 0.01; c <= 0.1; c += 0.01) {
        frequency = sqrt(1.0 / (l * c) - (r * r) / (4 * c * c));
        printf("%.2f \t\t %.2f\n", c, frequency);
    }

    return 0;
}
