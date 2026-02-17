#include <stdio.h>

int main() {
    int marks, i, more_than_80 = 0, more_than_60 = 0, more_than_40 = 0;
    int less_than_40 = 0, range_81_to_100 = 0, range_61_to_80 = 0;
    int range_41_to_60 = 0, range_0_to_40 = 0;

    printf("Enter marks (or -1 to stop):\n");

    while (1) {
        scanf("%d", &marks);
        if (marks == -1) {
            break; // Exit loop if -1 is entered
        }

        if (marks > 80) {
            more_than_80++;
            more_than_60++;
            more_than_40++;
            range_81_to_100++;
        } else if (marks > 60) {
            more_than_60++;
            more_than_40++;
            range_61_to_80++;
        } else if (marks > 40) {
            more_than_40++;
            range_41_to_60++;
        } else {
            less_than_40++;
            range_0_to_40++;
        }
    }

    printf("\nResults:\n");
    printf("More than 80: %d\n", more_than_80);
    printf("More than 60: %d\n", more_than_60);
    printf("More than 40: %d\n", more_than_40);
    printf("40 or less: %d\n", less_than_40);
    printf("Range 81-100: %d\n", range_81_to_100);
    printf("Range 61-80: %d\n", range_61_to_80);
    printf("Range 41-60: %d\n", range_41_to_60);
    printf("Range 0-40: %d\n", range_0_to_40);

    return 0;
}
