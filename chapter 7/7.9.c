#include <stdio.h>

int main() {
    int arr[100], n, i, j, max_idx, temp;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = n - 1; i > 0; i--) {
        max_idx = 0;
        for (j = 1; j <= i; j++) {
            if (arr[j] > arr[max_idx]) {
                max_idx = j;
            }
        }

        temp = arr[i];
        arr[i] = arr[max_idx];
        arr[max_idx] = temp;
    }

    printf("Sorted array in ascending order:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}