#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main() {
    float x = 4, y = 5; 
    float radius = sqrt(pow(x, 2) + pow(y, 2));

    float perimeter = 2 * PI * radius;
    float area = PI * pow(radius, 2);

    printf("Perimeter of Circle = %.2f\n", perimeter);
    printf("Area of Circle = %.2f\n", area);

    return 0;
}
