#include <stdio.h>

int main() {
    int A[100], B[100], C[200];
    int n, m, i = 0, j = 0, k = 0;

    printf("Enter the size of array A: ");
    scanf("%d", &n);
    printf("Enter the elements of array A (sorted in ascending order):\n");
    for (i = 0; i < n; i++) scanf("%d", &A[i]);

    printf("Enter the size of array B: ");
    scanf("%d", &m);
    printf("Enter the elements of array B (sorted in ascending order):\n");
    for (i = 0; i < m; i++) scanf("%d", &B[i]);

    i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        C[k++] = (A[i] < B[j]) ? A[i++] : B[j++];
    }
    while (i < n) C[k++] = A[i++];
    while (j < m) C[k++] = B[j++];

    printf("Merged array C (sorted in ascending order):\n");
    for (i = 0; i < n + m; i++) printf("%d ", C[i]);
    printf("\n");

    return 0;
}