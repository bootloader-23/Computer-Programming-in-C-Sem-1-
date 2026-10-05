#include<stdio.h>
int main(){
    int n;
    int i;
    int index;
    int val;

    printf("\nEnter size of array: ");
    scanf("%d", &n);

    int arr[n+1];

    printf("\nEnter the elements: ");
    for ( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    for( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("At which index do you want the new value? ->");
    scanf("%d", &index);

    printf("\nEnter new element: ");
    scanf("%d", &val);

    for ( i = n; i > index; i--){
        arr[i] = arr[i-1];
    }

    arr[index] = val;
    n++;

    printf("\nUpdate Array\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}
