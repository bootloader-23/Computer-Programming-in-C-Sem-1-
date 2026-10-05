#include<stdio.h>
int main(){
    int n;
    int val;

    printf("\nLength of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("\nEnter the elements of the array: ");
    for( int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    printf("\nSearch item: ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++){
        if (arr[i] == val){
            printf("%d was found at %d th index.", val, i);
        }
    }
    printf("\n");
}
