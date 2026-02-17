#include <stdio.h>
#include <math.h>

int main() {
    float degree, radian;

    printf("Degree\tSin\tCos\n");

    for (degree = 0; degree <= 180; degree += 15) {
        radian = degree * M_PI / 180; // Convert degrees to radians
        printf("%.0f\t%.4f\t%.4f\n", degree, sin(radian), cos(radian));
    }

    return 0;
}
