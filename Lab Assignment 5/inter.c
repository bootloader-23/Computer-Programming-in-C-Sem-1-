#include<stdio.h>
// #include "array_utils.h"
int main(){
    int i, j, n1, n2;
    int check;

    printf("\n1st Array lenght: ");
    scanf("%d", &n1);
    int arr_1[n1];

    printf("\nEnter elements: ");
    for(i = 0; i < n1; i++){
        scanf("%d", &arr_1[i]);
    }

    printf("\n2nd Array lenght: ");
    scanf("%d", &n2);
    int arr_2[n2];

    printf("\nEnter elements: ");
    for(i = 0; i < n1; i++){
        scanf("%d", &arr_2[i]);
    }

    printf("\ninitial arrays are: \n");
    for(i = 0; i < n1; i++){
        printf("%d ", arr_1[i]);
    }
    printf("\n");
    for(i = 0; i < n1; i++){
        printf("%d ", arr_2[i]);
    }

    int merge[n1 + n2];

    for(i = 0; i < n1; i++){
        merge[i] = arr_1[i];
    }
    for(i = 0; i < n2; i++){
        merge[n1 + i] = arr_2[i];
    }


    printf("\nUnion : ");
    for(i = 0; i < n1 + n2; i++){
        printf("%d ", merge[i]);
    }

    int inter[n1 > n2 ? n1 : n2];
    int k = 0;

    for(i = 0; i < n1; i ++){
        check = 0;

        for(j = 0; j < n2; j++){
            if(arr_1[i] == arr_2[j]){
                check = 1;
                break;
            }
        }

        if(check){
            inter[k] = arr_1[i];
            k++;
        }
    }

    printf("\nintersection : ");
    for(i = 0; i < k; i++){
        printf("%d ", inter[i]);
    }
}
