// WAP to calculate simple interest.

#include <stdio.h>
int main() {
    float principal, rate, time, interest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the time period: ");
    scanf("%f", &time);
    interest = principal * rate * time;
    printf("Simple interest: %.2f\n", interest); //%.2f format specifier for floating value upto 2 decimal places.
    return 0;
}
