#include <stdio.h>
#include <math.h>

int main() {
    printf("Angle\tSin(Angle)\n");
    for (int angle = 0; angle <= 180; angle += 15) {
        double radian = angle * M_PI / 180.0;
        printf("%d\t%lf\n", angle, sin(radian));
    }
    return 0;
}