#include<stdio.h>
int main(){
    int num;

    printf("\nHow many computers need servicing?");
    scanf("%d", &num);

    if( num <= 3)
        printf("\nTotal cost = ₹%d", num*100);
    else if( num > 3 && num < 7)
        printf("\nTotal cost = ₹%d", num*75 );
    else if( num > 7 && num < 10)
        printf("\nTotal cost = ₹%d", num*50);
    else if( num > 10)
        printf("\nTotal cost = ₹%d", num*40);
    else
        printf("\nInvalid Input");


}
