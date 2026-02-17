#include <stdio.h>
#include <math.h>

int main() {
    printf("Table for Y = EXP(-X)\n");
    printf("x\t0.1\t0.2\t0.3\t0.9\n");

    for (double x = 0.0; x <= 9.0; x += 1.0) {
        printf("%.1lf\t", x);
        for (double i = 0.1; i <= 0.3; i += 0.1) {
            printf("%.3lf\t", exp(-x - i));
        }
        printf("%.3lf\n", exp(-x - 0.9));
    }

    return 0;
}