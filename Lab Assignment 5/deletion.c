//Doubt - desired output is not coming!!
// reused the code written for insertion as deletionn is opposite of insertion


#include<stdio.h>
int main(){
    int n;
    int i;
    int index;
    // int val;

    printf("\nEnter size of array: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements: ");
    for ( i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array: ");
    for( i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");

    printf("From which index do you want to delete? ->");
    scanf("%d", &index);

    // printf("\nEnter new element: ");
    // scanf("%d", &val);

    for ( i = index; i > n - 1; i++){
        arr[i] = arr[i+1];
    }

    // arr[index] = val;
    n--;

    printf("\nUpdate Array\n");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

}
