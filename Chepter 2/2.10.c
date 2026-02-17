#include <stdio.h>

#define INTEREST_RATE 5.5
#define LOAN_PERIOD 12

int main() {
    double principal, interest, total_amount;
    
    printf("Enter loan principal amount: ");
    scanf("%lf", &principal);
    
    interest = (principal * INTEREST_RATE * LOAN_PERIOD) / (100 * 12);
    total_amount = principal + interest;
    
    printf("Loan principal: %.2lf\n", principal);
    printf("Annual Interest Rate: %.2lf%%\n", INTEREST_RATE);
    printf("Loan Period: %d months\n", LOAN_PERIOD);
    printf("Simple Interest: %.2lf\n", interest);
    printf("Total Amount to be Paid: %.2lf\n", total_amount);
    
    return 0;
}