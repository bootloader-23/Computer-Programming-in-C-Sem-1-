#include<stdio.h>
int main(){

    float temp[6];

    printf("Enter the tempterature readings in Kelvin: ");
    for(int i=0; i<6; i++){
        scanf("%f", &temp[i]);
    }

    printf(" \nThe given temperature readings are:\n");
    for (int i = 0; i < 6; i++) {
            printf("%f ", temp[i]);
        }
        printf("\n");

    float min = temp[0];
    float max = temp[0];
    //Finding the largest reading
    for(int i=1; i<6; i++){
        if(max < temp[i]){
            max = temp[i];
        }
        if(min > temp[i]){
            min = temp[i];
        }
    }

    printf("\n %f is the max temperature, and %f is the least temperature.", max, min);


    return 0;
}
