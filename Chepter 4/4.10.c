#include <stdio.h>

int main() {
    printf("%-10s %-10s %10s\n", "Name", "Code", "Price");
    printf("%-10s %-10d %10.2f\n", "Fan", 67831, 1234.50);
    printf("%-10s %-10d %10.2f\n", "Motor", 450, 5786.70);

    return 0;
}