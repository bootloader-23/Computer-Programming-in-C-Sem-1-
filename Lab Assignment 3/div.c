#include<stdio.h>
int main(){
    int num;

    printf("enter number: \n");
    scanf("%d", &num);

    if(num % 5 == 0 && num % 8 == 0)
        printf("\n%dis divisible by both 5 and 8. ", num);

    else if(num % 5 == 0 && num % 8 != 0)
        printf("\n%d is divisible by 5 but not 8.", num);

    else if(num  != 5 && num % 8 == 0)
        printf("\n%d is divisible by 8 but not 5.", num);

    else{
        printf("\n%d is neither divisible by 5 nor by 8.", num);
    }
}
