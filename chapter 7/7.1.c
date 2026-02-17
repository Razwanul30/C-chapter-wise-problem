#include <stdio.h>

int main() {
    int n, i;
    double x[100], y[100], sum_x = 0, sum_y = 0, sum_xy = 0, sum_x2 = 0, m, c;

    printf("Enter the number of points: ");
    scanf("%d", &n);

    printf("Enter the x and y coordinates of the points:\n");
    for (i = 0; i < n; i++) {
        scanf("%lf %lf", &x[i], &y[i]);
        sum_x += x[i];
        sum_y += y[i];
        sum_xy += x[i] * y[i];
        sum_x2 += x[i] * x[i];
    }

    m = (n * sum_xy - sum_x * sum_y) / (n * sum_x2 - sum_x * sum_x);
    c = (sum_y - m * sum_x) / n;

    printf("Equation of the straight line: y = %.2lfx + %.2lf\n", m, c);
    return 0;
}