#include <stdio.h>

int main() {
    int customerCode, callsMade;
    float bill;

    printf("Enter customer code: ");
    scanf("%d", &customerCode);

    printf("Enter calls made: ");
    scanf("%d", &callsMade);

    if (callsMade > 100) {
        bill = 250 + (callsMade - 100) * 1.25;
    } else {
        bill = 250;
    }

    printf("Customer Code: %d\n", customerCode);
    printf("Total Bill: Rs. %.2f\n", bill);

    return 0;
}
