#include<stdio.h>
int main(){
    float num1, num2;
    float res;
    char op;

    printf("\nEnter two numbers: ");
    scanf("%f", &num1);
    scanf("%f", &num2);

    printf("\nEnter the operator: ");
    scanf(" %c", &op);

    switch(op){
        case '+':
            res = num1 + num2;
            printf("\n%f + %f = %f", num1, num2, res);
            break;

        case '-':
            res = num1 - num2;
            printf("\n%f - %f = %f", num1, num2, res);
            break;

        case '*':
            res = num1 * num2;
            printf("\n%f x %f = %f", num1, num2, res);
            break;

        case '/':
            res = num1 / num2;
            printf("\n%f / %f = %f", num1, num2, res);
            break;

        default:
            printf("\nPlease enter valid input.\n");
            break;
    }
    return 0;
}
