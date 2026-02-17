#include <stdio.h>
int main () {
    float n,sum=0;
    printf("Enter the last value of the series:\n");
    scanf("%f",&n);
    for ( int i=1; i<=n; i++) {
        sum+=1.0/i;
    }
    printf("Sum of the hermonic series is %.2f",sum);
    return 0;
}
