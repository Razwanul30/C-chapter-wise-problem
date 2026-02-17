#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;  
    double sinx = x, term_sin = x;
    int sign_sin = -1, n_sin = 3;

    while (fabs(term_sin) > 0.00001) {
        term_sin *= (x * x) / (n_sin * (n_sin - 1));
        sinx += sign_sin * term_sin;
        sign_sin *= -1;
        n_sin += 2;
    }

    printf("sin(x) = %lf\n", sinx);
    return 0;
}