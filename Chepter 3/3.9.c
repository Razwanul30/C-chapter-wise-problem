#include <stdio.h>
#include <math.h>

int main() {
    float demandRate, setupCosts, holdingCost, eoq, tbo;

    printf("Enter demand rate (items per unit time): ");
    scanf("%f", &demandRate);

    printf("Enter setup costs (per order): ");
    scanf("%f", &setupCosts);

    printf("Enter holding cost (per item per unit time): ");
    scanf("%f", &holdingCost);

    eoq = sqrt((2 * demandRate * setupCosts) / holdingCost);
    tbo = sqrt((2 * setupCosts) / (demandRate * holdingCost));

    printf("Economic Order Quantity (EOQ): %.2f\n", eoq);
    printf("Time Between Orders (TBO): %.2f\n", tbo);

return 0;
}
