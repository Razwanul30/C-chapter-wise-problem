#include <stdio.h>
#include <string.h>

int main() {
    char isbn[15];
    int i, sum = 0, digit, checkDigit;
    printf("Enter ISBN (with hyphens): ");
    scanf("%s", isbn);

    int len = strlen(isbn);
    char temp[11];
    int j = 0;
    for (i = 0; i < len; i++) {
        if (isbn[i] != '-') {
            temp[j++] = isbn[i];
        }
    }
    temp[j] = '\0';

    if (strlen(temp) != 10) {
        printf("Invalid ISBN\n");
    } else {
        for (i = 0; i < 9; i++) {
            if (temp[i] >= '0' && temp[i] <= '9') {
                digit = temp[i] - '0';
            } else {
                printf("Invalid ISBN\n");
                return 0;
            }
            sum += (i + 1) * digit;
        }

        checkDigit = sum % 11;

        if (checkDigit == 10) {
            if (temp[9] == 'X') {
                printf("Valid ISBN\n");
            } else {
                printf("Invalid ISBN\n");
            }
        } else {
            if (temp[9] == (checkDigit + '0')) {
                printf("Valid ISBN\n");
            } else {
                printf("Invalid ISBN\n");
            }
        }
    }

    return 0;
}