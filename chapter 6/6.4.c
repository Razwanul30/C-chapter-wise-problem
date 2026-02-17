#include <stdio.h>

int main() {
    int m = 10;
    int a = 1, b = 1;
    
    if (m >= 1) {
        printf("%d ", a);
    }
    if (m >= 2) {
        printf("%d ", b);
    }
    
    int i = 3;
    do {
        int next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
        i++;
    } while (i <= m);
    
    printf("\n");
    return 0;
}