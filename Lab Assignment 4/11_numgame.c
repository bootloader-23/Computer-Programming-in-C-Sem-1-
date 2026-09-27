#include<stdio.h>
#include<stdlib.h>
int main(){
    int num;
    int guess;

    num = rand() % 100+1;

    do{
        printf("\nEnter your guess between 1-100: ");
        scanf("%d", &guess);

        if(guess > num){
            printf("\nGuessed too high!!");
        }

        else if(guess < num){
            printf("\nGuessed too low!!");
        }

        else{
            printf("Sahi Jawab!!! 7 Crore!!!");
        }
    }while(guess != num);

    return 0;
}
