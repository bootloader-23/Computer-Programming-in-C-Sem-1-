#include<stdio.h>
int main(){
    int n, i, j, k;

    printf("\nArray length: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter the elements: ");
    for (i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nThe original array: ");
    for (i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    for( i = 0; i < n; i++){
        for ( j = i + 1; j < n; j++){
            if(arr[i] == arr[j]){
                for ( k = j; k < n - 1; k++){
                    arr[k] = arr[k + 1];
                }

                n--;
                j--;
            }
        }
    }

    printf("\nFinal array: ");
    for(i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }
}
