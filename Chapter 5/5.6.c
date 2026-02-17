#include <stdio.h>
#include <math.h>

int main() {
    printf("Square Root Table (0 to 9.9):\n");
    printf("---------------------------\n");
    printf("      ");
    for (int i = 0; i <= 9; i++) {
        printf("%4d ", i);
    }
    printf("\n");

    for (int i = 0; i <= 9; i++) {
        printf("%4d | ", i);
        for (int j = 0; j <= 9; j++) {
            float num = i + j / 10.0;
            printf("%4.2f ", sqrt(num));
        }
        printf("\n");
    }

    return 0;
}
