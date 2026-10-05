#include<stdio.h>
#include "array_utils.h"
int main(){
    int n, i, j;

    printf("\nArray length: ");
    scanf("%d", &n);

    int arr[n];

    printf("enter the array elements: \n");
    inputArray(arr, n);

    printf("\nyour array: ");
    printArray(arr, n);


    //if we sort the array then the 0th element will by default
    // be the smallest and the n-1 th element will be largest.

    int temp;

    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    printf("\nsorted array -> ");
    printArray(arr, n);

    int min = arr[0];
    int max = arr[n-1];

    printf("\n%d is the smallest and %d is the largest.\n", min, max);

}
