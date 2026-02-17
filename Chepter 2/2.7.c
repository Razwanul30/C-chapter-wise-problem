#include <stdio.h>
int main () {
    int x=123456,y=654321;
    short int z=x+y; //Overflow
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d (Overflow occcurred)\n",z);
    return 0;
}
