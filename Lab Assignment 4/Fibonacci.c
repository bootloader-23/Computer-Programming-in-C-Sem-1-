#include<stdio.h>
int main(){
//To print Fibonacci Sequence
    int N, i;
    int num1 = 0;
    int num2 = 1;
    int sum;

    printf("enter the upper limit: \n");
    scanf("%d", &N);

    printf("The fibonacci sequence is: ");
    printf("%d \n %d \n", num1, num2);

    for(i=1;i <=N-2; i++ ){
        sum = num1 + num2;
        printf("%d \n", sum);
        num1 = num2;
        num2 = sum;
    }

    return 0;
}
