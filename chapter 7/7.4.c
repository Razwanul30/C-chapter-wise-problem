#include <stdio.h>

int main() {
    int pascal[10][10] = {0}, i, j;

    for (i = 0; i < 10; i++) {
        pascal[i][0] = pascal[i][i] = 1;
        for (j = 1; j < i; j++) pascal[i][j] = pascal[i - 1][j - 1] + pascal[i - 1][j];
    }

    printf("Pascal's Triangle (10 rows):\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j <= i; j++) printf("%4d", pascal[i][j]);
        printf("\n");
    }

    return 0;
}