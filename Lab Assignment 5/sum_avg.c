#include<stdio.h>
int main(){
    int n, i;
    int sum;
    float avg;

    printf("\nEnter array length: ");
    scanf("%d", &n);

    int arr[n];

    printf("\nEnter array elements: ");
    for( i =0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nOriginal Array\n");
    for( i =0; i < n; i++){
        printf("%d, ", arr[i]);
    }

    for( i = 0; i < n; i++){
        sum +=  arr[i];
    }
    printf("\nSum = %d", sum-1);

    avg = sum / n;
    printf("\nAverage = %f \n", avg);
}
