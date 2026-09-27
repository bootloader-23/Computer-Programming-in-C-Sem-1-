//Writa a program to calculate compound interest.
// Compounded Annually.
// Time period in years.

#include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    interest = principal * (1 + rate) * time;
    printf("Compound interest: %.2f\n", interest);
    return 0;
}
