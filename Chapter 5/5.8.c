#include <stdio.h>

int main() {
    int purchase_amount;
    char item_type;
    float discount, net_amount;

    printf("Enter purchase amount: ");
    scanf("%d", &purchase_amount);

    printf("Enter item type (M for Mill cloth, H for Handloom): ");
    scanf(" %c", &item_type);

    switch (item_type) {
        case 'M':
            if (purchase_amount >= 0 && purchase_amount <= 100) {
                discount = 0.05;
            } else if (purchase_amount >= 101 && purchase_amount <= 200) {
                discount = 0.05;
            } else if (purchase_amount >= 201 && purchase_amount <= 300) {
                discount = 0.075;
            } else {
                discount = 0.10;
            }
            break;
        case 'H':
            if (purchase_amount >= 0 && purchase_amount <= 100) {
                discount = 0.05;
            } else if (purchase_amount >= 101 && purchase_amount <= 200) {
                discount = 0.075;
            } else if (purchase_amount >= 201 && purchase_amount <= 300) {
                discount = 0.10;
            } else {
                discount = 0.15;
            }
            break;
        default:
            printf("Invalid item type.\n");
            return 1;
    }

    net_amount = purchase_amount * (1 - discount);

    printf("Net amount to be paid: %.2f\n", net_amount);

    return 0;
}
