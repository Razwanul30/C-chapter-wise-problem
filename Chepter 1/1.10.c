#include <stdio.h>
#include <math.h>

int main() {
    float a = 5, b = 12, c = 13;
    float s = (a + b + c) / 2.0;
    float area = sqrt(s * (s - a) * (s - b) * (s - c));

    printf("Area of triangle = %.2f\n", area);
    return 0;
}
