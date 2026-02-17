#include <stdio.h>
int main () {
    int num,pos_count=0,neg_count=0;
    printf("Enter numbers (0 to terminate):\n");
    while (1) {
        scanf("%d",&num);
        if (num==0) {
            break;
        }
        else if (num>0) {
            pos_count++;
        }
        else if (num<0) {
            neg_count++;
        }
    }
    printf("Positive number: %d\n",pos_count);
    printf("negative number: %d\n",neg_count);
    return 0;
}
