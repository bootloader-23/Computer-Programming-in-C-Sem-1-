#include <stdio.h>
int main(){
    int num;

    printf("Enter a number: \n");
    scanf("%d", &num);

    if(num < 0){
        printf("%d is negative. \n", num);
    }
    else if(num > 0){
        printf("%d is positive. \n", num);
    }
    else{
        printf("%d is 0. \n", num);
    }

    if(num % 2 == 0){
        printf("%d is even \n", num);
    }
    else if(num % 2 != 0){
        printf("%d is odd \n", num);
    }
    else{
        printf("invalid input");
    }
}
