#include <stdio.h>
int main(){
    int n;
    int i=1;
    printf("\nEnter the number: \n");
    do{
        printf("->");
        scanf("%d", &n);
        printf("%d", n);

        if(n%2==0){
            printf("\n %d is an even number.", n);
        }
        i++;
    }while(i < 20);
    return 0;
}
