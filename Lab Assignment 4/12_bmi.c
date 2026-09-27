#include<stdio.h>
int main(){
    float wt, ht;

    do{
        printf("\nEnter weight(in kg): ");
        scanf("%f", &wt);
    }while(wt<=0);

    do{
        printf("\nEnter height(in m): ");
        scanf("%f", &ht);
    }while(ht<=0);

    float bmi = wt/ht;

    if(bmi > 25){
        printf("\nOverweight!");
    }

    else{
        printf("\n You are fine.");
    }
}
