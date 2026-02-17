#include <stdio.h>

int main() {
    int temperature[10][31];
    int i, j, highest_temp = -101, lowest_temp = 101;
    int highest_city, highest_day, lowest_city, lowest_day;

    printf("Enter the temperature for 10 cities for 31 days:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 31; j++) {
            printf("City %d, Day %d: ", i + 1, j + 1);
            scanf("%d", &temperature[i][j]);
            if (temperature[i][j] < -100 || temperature[i][j] > 100) {
                printf("Invalid temperature! Enter between -100 and 100.\n");
                return 1;
            }
        }
    }

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 31; j++) {
            if (temperature[i][j] > highest_temp) {
                highest_temp = temperature[i][j];
                highest_city = i;
                highest_day = j;
            }
            if (temperature[i][j] < lowest_temp) {
                lowest_temp = temperature[i][j];
                lowest_city = i;
                lowest_day = j;
            }
        }
    }

    printf("Highest temp: %d in city %d on day %d\n", highest_temp, highest_city + 1, highest_day + 1);
    printf("Lowest temp: %d in city %d on day %d\n", lowest_temp, lowest_city + 1, lowest_day + 1);

    return 0;
}