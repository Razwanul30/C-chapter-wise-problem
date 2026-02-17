#include <stdio.h>
int main () {
    float price;
    printf("Enter the price:\n");
    scanf("%f",&price);
    int paisa=(int) (price*100+.5);
    printf("The price in paisa is %d",paisa);
    return 0;
}
