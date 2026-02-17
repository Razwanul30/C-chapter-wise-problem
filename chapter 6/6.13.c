#include <stdio.h>
#include <math.h>

int main() {
    double e = 1.0, term = 1.0, prev_e = 0.0;
    int n = 1;

    while (fabs(e - prev_e) > 0.00001) {
        prev_e = e;
        term /= n;
        e += term;
        n++;
    }

    printf("e = %lf\n", e);
    return 0;
}