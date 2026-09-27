// WAP to Convert Fahrenheit to Celcius in C.

#include<stdio.h>
int main() {
    float fahrenheit, celcius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    celcius = (fahrenheit - 32) * 5 / 9;
    printf("Temperature in Celcius: %.2f\n", celcius);
    return 0;
}
