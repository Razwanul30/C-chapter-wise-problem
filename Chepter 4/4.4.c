#include <stdio.h>
#include <math.h>

int main() {
    float values[4];
    int rounded[4];

    printf("Enter four floating-point values (0.0 to 20.0): ");
    for (int i = 0; i < 4; i++) {
        scanf("%f", &values[i]);
        rounded[i] = round(values[i]);
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < rounded[i]; j++) {
            printf("* ");
        }
        printf(" %.2f\n", values[i]);
    }

    return 0;
}