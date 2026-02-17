#include <stdio.h>
#include <math.h>

int main() {
    int p = 1000;
    double r = 0.05;
    int n = 10;
    double v = p * pow(1 + r, n);
    
    printf("Investment Value (P=1000, r=0.05, n=10): %.2f\n", v);
    return 0;
}