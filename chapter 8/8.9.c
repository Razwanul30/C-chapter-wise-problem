#include <stdio.h>

void printWords(int num) {
    switch (num) {
        case 0: printf("ZERO "); break;
        case 1: printf("ONE "); break;
        case 2: printf("TWO "); break;
        case 3: printf("THREE "); break;
        case 4: printf("FOUR "); break;
        case 5: printf("FIVE "); break;
        case 6: printf("SIX "); break;
        case 7: printf("SEVEN "); break;
        case 8: printf("EIGHT "); break;
        case 9: printf("NINE "); break;
        case 10: printf("TEN "); break;
        case 11: printf("ELEVEN "); break;
        case 12: printf("TWELVE "); break;
        case 13: printf("THIRTEEN "); break;
        case 14: printf("FOURTEEN "); break;
        case 15: printf("FIFTEEN "); break;
        case 16: printf("SIXTEEN "); break;
        case 17: printf("SEVENTEEN "); break;
        case 18: printf("EIGHTEEN "); break;
        case 19: printf("NINETEEN "); break;
        case 20: printf("TWENTY "); break;
        case 30: printf("THIRTY "); break;
        case 40: printf("FORTY "); break;
        case 50: printf("FIFTY "); break;
        case 60: printf("SIXTY "); break;
        case 70: printf("SEVENTY "); break;
        case 80: printf("EIGHTY "); break;
        case 90: printf("NINETY "); break;
    }
}

int main() {
    float amount;
    int rupees, paise, digit;
    
    printf("Enter the amount in RRRR.PP format: ");
    scanf("%f", &amount);
    
    rupees = (int)amount;
    paise = (int)((amount - rupees) * 100);
    
    // Process rupees
    if (rupees == 0) {
        printf("ZERO ");
    } else {
        if (rupees >= 1000) {
            digit = rupees / 1000;
            printWords(digit);
            printf("THOUSAND ");
            rupees %= 1000;
        }
        
        if (rupees >= 100) {
            digit = rupees / 100;
            printWords(digit);
            printf("HUNDRED ");
            rupees %= 100;
        }

        if (rupees >= 20) {
            digit = rupees / 10 * 10;
            printWords(digit);
            rupees %= 10;
        }

        if (rupees > 0) {
            printWords(rupees);
        }
    }

    printf("RUPEES ");
    
    // Process paise
    if (paise == 0) {
        printf("ZERO PAISE");
    } else {
        printf("AND ");
        if (paise >= 10) {
            digit = paise / 10 * 10;
            printWords(digit);
            paise %= 10;
        }
        
        if (paise > 0) {
            printWords(paise);
        }
        printf("PAISE");
    }

    printf("\n");
    return 0;
}