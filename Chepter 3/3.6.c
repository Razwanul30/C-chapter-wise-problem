#include <stdio.h>

int main() {
    float purchasePrice, depreciation, salvageValue;
    int yearsOfService;

    printf("Enter the purchase price: ");
    scanf("%f", &purchasePrice);

    printf("Enter the years of service: ");
    scanf("%d", &yearsOfService);

    printf("Enter the annual depreciation: ");
    scanf("%f", &depreciation);

    // Calculate salvage value
    salvageValue = purchasePrice - (depreciation * yearsOfService);

    printf("Salvage value of the item: %.2f\n", salvageValue);

    return 0;
}
