#include <stdio.h>

int main() {
    int count[6] = {0}, ballot, spoilt_ballots = 0;

    printf("Enter the ballot numbers (1-5, 0 to stop):\n");
    while (1) {
        scanf("%d", &ballot);
        if (ballot == 0) break;
        if (ballot >= 1 && ballot <= 5) count[ballot]++;
        else spoilt_ballots++;
    }

    printf("Votes for each candidate:\n");
    for (int i = 1; i <= 5; i++) printf("Candidate %d: %d\n", i, count[i]);

    printf("Spoilt ballots: %d\n", spoilt_ballots);
    return 0;
}