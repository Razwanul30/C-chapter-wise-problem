#include <stdio.h>
#include <math.h>

int main() {
    double x = 1.0;  
    double cosx = 1.0, term_cos = 1.0;
    int sign_cos = -1, n_cos = 2;

    while (fabs(term_cos) > 0.00001) {
        term_cos *= (x * x) / (n_cos * (n_cos - 1));
        cosx += sign_cos * term_cos;
        sign_cos *= -1;
        n_cos += 2;
    }

    printf("cos(x) = %lf\n", cosx);
    return 0;
}