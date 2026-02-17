#include <stdio.h>
int main () {
    int x,y,z,temp;
    printf("Enter the values of x, y, and z: ");
    scanf("%d %d %d",&x,&y,&z);
    //Rptate the value
    temp=x;
    x=y;
    y=z;
    z=temp;
    printf("After rotation: \n");
    printf("x = %d\n",x);
    printf("y = %d\n",y);
    printf("z = %d\n",z);

    return 0;
}
