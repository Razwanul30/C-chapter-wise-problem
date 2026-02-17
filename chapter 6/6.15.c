#include <stdio.h>
#include <math.h>

int main() {
    double c, d, p;
    printf("Enter original cost, depreciation rate, and scrap value: ");
    scanf("%lf %lf %lf", &c, &d, &p);

    int n = 0;
    while (c * pow(1 - d, n) > p) {
        n++;
    }

    printf("Useful life: %d years\n", n);
    return 0;
}