#include<stdio.h>
#include "array_utils.h"

int main(){
    int i, len1, len2;

    printf("\nEnter size of 1st array: ");
    scanf("%d", &len1);

    int arr_1[len1];

    printf("\nEnter size of 2nd array: ");
    scanf("%d", &len2);

    int arr_2[len2];

    printf("\nEnter elements in 1st array: ");
    inputArray(arr_1, len1);
    printf("\nEnter elements in 2nd array: ");
    inputArray(arr_2, len2);

    printf("\nArray 1: ");
    printArray(arr_1, len1);
    printf("\nArray 2: ");
    printArray(arr_2, len2);

    int arr_merged[len1 + len2];

    for(i = 0; i < len1; i++){
        arr_merged[i] = arr_1[i];
    }
    for(i = 0; i < len2; i++){
        arr_merged[len1 + i] = arr_2[i];
    }

    printf("\nMerged Array: ");
    printArray(arr_merged, len1 + len2);

}
