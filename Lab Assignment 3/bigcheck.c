//method 1

#include<stdio.h>
int main(){
    int a, b, c;

    printf("\nEnter the 3 numbers: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a > b && a > c){
        printf("\n%d is the greatest integer.", a);
    }
    else if(b > a && b > c){
        printf("\n%d is the greatest integer.", b);
    }
    else{
        printf("\n%d is the greatest integer.", c);
    }

    return 0;
}
