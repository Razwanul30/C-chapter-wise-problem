#include <stdio.h>

int main() {
    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 18; j++) {
            if ((i == 0 || i == 14) && (j > 2 && j < 15)) {
                printf("*");
            } else if ((i == 1 || i == 13) && (j == 2 || j == 15)) {
                printf("*");
            } else if (i == 2 && (j == 1 || j == 16)) {
                printf("*");
            } else if (i == 3 && (j == 0 || j == 17)) {
                printf("*");
            } else if ((i > 3 && i < 7) && (j == 0)) {
                printf("*");
            } else if ((i > 7 && i < 11) && (j == 17)) {
                printf("*");
            } else if ((i == 7 || i == 11) && (j > 2 && j < 15)) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}