#include<stdio.h>
int main(){
    int N, k;

printf("\nTotal tickets: \n");
scanf("%d", &N);

while(N>0){
    printf("\nAvailable tickets: %d", N);
    printf("\nHow many do you want: ");
    scanf("%d", &k);

        if (N < k){
            printf("\n Oops! not enough tickets.\n");
        }
    N = N - k;

    }
    return 0;

}
