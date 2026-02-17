#include <stdio.h>

int main() {
    char name[50];
    int units;
    float bill;

    printf("Enter the name of the user: ");
    scanf("%s", name);

    printf("Enter the number of units consumed: ");
    scanf("%d", &units);

    if (units <= 200) {
        bill = units * 0.80;
    } else if (units <= 300) {
        bill = 200 * 0.80 + (units - 200) * 0.90;
    } else {
        bill = 200 * 0.80 + 100 * 0.90 + (units - 300) * 1.00;
    }

    bill += 100; // Meter charge

    if (bill > 400) {
        bill *= 1.15; // Surcharge
    }

    printf("Name: %s\n", name);
    printf("Bill: Rs. %.2f\n", bill);

    return 0;
}