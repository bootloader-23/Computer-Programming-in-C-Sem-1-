#include<stdio.h>
int main(){
    int num, lim;
    printf("\nEnter the number whose table you want to print: \n");
    scanf("%d", &num);
    printf("\nEtner the limit till where you want to print the table: \n");
    scanf("%d", &lim);

    for(int i = 1; i <= lim; i++){
        printf("\n%d x %i = %d", num, i, num*i);
    }
    printf("\n");
    return 0;
}
