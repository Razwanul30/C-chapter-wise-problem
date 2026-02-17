#include <stdio.h>

int main() {
    int num, sum = 0, positiveCount = 0;
    for (int i = 0; i < 10; i++) {
        scanf("%d", &num);
        if (num > 0) { 
            sum += num;
            positiveCount++;
        }
        if (sum > 999) { 
            break;
        }
    }
    printf("Sum: %d\n", sum);
    printf("Positive Count: %d\n", positiveCount);
    return 0;
}