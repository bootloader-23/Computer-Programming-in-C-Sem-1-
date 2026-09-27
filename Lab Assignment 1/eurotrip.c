/* You plan a trip to Europe costing ₹1,50,000. You take a travel loan from a bank at a simple
interest rate of 8% per annum for 2 years. Write a C program to calculate the total interest
you will pay and the total amount to be repaid at the end of the term. */

#include <stdio.h>
int main() {
    float principal = 150000;
    float rate = 0.08;
    int time = 2;
    float interest = principal * rate * time;
    float total = principal + interest;
    printf("Total interest: %.2f\n", interest);
    printf("Total amount: %.2f\n", total);
    return 0;
}
