#include <stdio.h>

int main() {
    int rows, cols, i, j;
    printf("Enter number of rows and columns for matrices: ");
    scanf("%d %d", &rows, &cols);

    int A[100][100], B[100][100], result[100][100];

    printf("Enter elements of matrix A:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of matrix B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    printf("A + B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = A[i][j] + B[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    printf("A - B:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            result[i][j] = A[i][j] - B[i][j];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}