#include <stdio.h>

int main() {
    double value = 345.6789;

    printf("%.2f\n", value); // Two decimal places
    printf("%.5f\n", value); // Five decimal places
    printf("%.0f\n", value); // Zero decimal places

    return 0;
}