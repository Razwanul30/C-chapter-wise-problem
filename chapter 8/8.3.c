#include <stdio.h>
#include <string.h>

int main() {
    char str[100], extracted[100];
    int m, n, i, j;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }
    printf("Enter the starting position (n): ");
    scanf("%d", &n);
    printf("Enter the number of characters to extract (m): ");
    scanf("%d", &m);
    n--;
    if (n < 0 || n >= strlen(str) || m < 0 || n + m > strlen(str)) {
        printf("Invalid input: Please check the values of m and n.\n");
        return 1;
    }
    for (i = n, j = 0; j < m; i++, j++) {
        extracted[j] = str[i];
    }
    extracted[m] = '\0';
    printf("Extracted string: %s\n", extracted);
    return 0;
}
