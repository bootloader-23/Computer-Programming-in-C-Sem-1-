//WAP to input a fraction (rational number) and display. (Ask the user to input numerator
//and denominator, then display it in the form of p/q without simplification)

#include<stdio.h>
int main() {
    int num1, num2;
    printf("Enter numerator: ");
    scanf("%d", &num1);
    printf("Enter denominator: ");
    scanf("%d", &num2);
    printf("Fraction: %d/%d\n", num1, num2);
    return 0;
}
