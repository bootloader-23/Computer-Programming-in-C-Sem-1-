#include<stdio.h>
int main(){
    float time=1;
    float amt = 10000;
    float interest = 5;

    printf("\nAmount dipostied: %f", amt);
    printf("\nRate of interest: %f%% p.a.", interest);

    while(amt <= 15000){
        amt = amt + ((interest/100)*amt);
        time++;
    }

    printf("\nThe final amount is %f after %f years.", amt, time);
}
