#include<stdio.h>
int main(){
    int num, factorial = 1;

    printf("\nEnter the number whose factorial you want: \n");
    scanf("%d", &num);

    int disp_num = num;

    while (num > 0){
        factorial = factorial * num;
        num--;
    }

    printf(" \n %d! is: %d \n", disp_num, factorial );

    return 0;
}
