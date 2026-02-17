#include <stdio.h>

int main() {
    double sum = 0.0, term_sum = 1.0;
    int n_sum = 1;

    while (term_sum > 0.00001) {
        sum += term_sum;
        n_sum++;
        term_sum = 1.0 / n_sum;
    }

    printf("SUM = %lf\n", sum);
    return 0;
}