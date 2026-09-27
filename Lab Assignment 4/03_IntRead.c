#include<stdio.h>
int main(){
    int a;

    printf("\nPlease enter the value: ");

    do{
        printf("->");
        scanf("%d", &a);
        printf("\n%d\n", a);
    } while(a<100);

    return 0;
}
