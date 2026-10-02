#include<stdio.h>
int main(){
    int days;
    float fine;

    printf("\nHow many days have you delayed?");
    scanf("%d", &days);

    if(days < 5){
        printf("\nYour total fine is: ");
        fine = 0.5 * days;
        printf(" %f", fine);
    }
    else if(days > 5 && days < 10){
        printf("\nYour total fine is: ");
        fine = 1 * days;
        printf(" %f", fine);
    }
    else if(days > 10){
        printf("\nYour total fine is: ");
        fine = 5 * days;
        printf(" %f", fine);
    }
    else{
        printf("Invalid input");
    }


}
