#include <stdio.h>
#include <math.h>

int main() {
    float x1 = 2, y1 = 3, x2 = 6, y2 = 7; 
    float distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between points = %.2f\n", distance);
    return 0;
}
