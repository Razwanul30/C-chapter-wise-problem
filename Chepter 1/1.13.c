#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main() {
    float x1 = 2, y1 = 2, x2 = 5, y2 = 6; 
    float diameter = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float radius = diameter / 2.0;
    float area = PI * pow(radius, 2);

    printf("Area of Circle = %.2f\n", area);
    return 0;
}
