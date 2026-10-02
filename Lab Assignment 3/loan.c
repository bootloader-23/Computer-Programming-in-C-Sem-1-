#include<stdio.h>
int main(){
    float amt, fin_amt;
    char ans1, ans2, ans3;

    printf("\n How much do you want to borrow? ");
    scanf("%f", &amt);

    printf("\n Your total payble amount with interest of 15%% will be: ");
    fin_amt = amt + 0.15*amt;
    printf("\n Final amt without rebates: ₹%f", fin_amt);

    printf("\n Answer the following in y or n to get rebates!");

    printf("\n Are you from a rural area?");
    scanf(" %c", &ans1);

    if (ans1 == 'y' || ans1 == 'Y'){
        fin_amt = fin_amt - (0.02*amt);
    }
    else{
        printf("\n You're not eligible for this rebate!");
    }

    printf("\n Do you categorise Below Poverty Line?");
    scanf(" %c", &ans2);

    if (ans2 == 'y' || ans2 == 'Y'){
        fin_amt = fin_amt - (0.02*amt);
    }
    else{
        printf("\n You're not eligible for this rebate!");
    }

    printf("\n Are you taking loan for Agricutlure, Fisheries, or Dairy?");
    scanf(" %c", &ans3);
    if (ans3 == 'y' || ans3 == 'Y'){
        fin_amt = fin_amt - (0.02*amt);
    }
    else{
        printf("\n You're not eligible for this rebate!");
    }

    printf("\n Your total payable amount is: ₹%f", fin_amt);


}
