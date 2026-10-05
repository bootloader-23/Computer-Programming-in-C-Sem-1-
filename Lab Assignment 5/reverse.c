#include<stdio.h>
int main(){
    int n;
    int i;

    printf("\nWhat lenght array do you want? ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++){
        printf("\n %d th element: ", i);
        scanf("%d", &arr[i]);
    }

    printf("\n The original array is: ");
    for(i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }

    for(i = 0; i < n/2; i++){
        int temp = arr[i];
                arr[i] = arr[n - 1 - i];
                arr[n - 1 - i] = temp;
    }

    printf("\n The original array is:\n ");
    for(i = 0; i < n; i++){
        printf("%d \n", arr[i]);
    }

}
