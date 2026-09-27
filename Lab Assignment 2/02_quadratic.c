#include<stdio.h>
#include<math.h>

int main(){
    float coeff_1, coeff_2, coeff_3;
    float discriminant, root_1, root_2;

    printf("Coefficient 1: ");
    scanf("%f", &coeff_1);
    printf("Coefficient 2: ");
    scanf("%f", &coeff_2);
    printf("Coefficient 3: ");
    scanf("%f", &coeff_3);

    discriminant = pow(coeff_2, 2)-(4*coeff_1*coeff_3);
    printf("The discriminant is %f \n", discriminant);

    if(discriminant>0){
        printf("The discriminant %f is greater than 0, so \n", discriminant);
        printf("Both roots are real and distinct. \n");
        root_1 = (-coeff_2 + sqrt(discriminant))/2;
        root_2 = (-coeff_2 - sqrt(discriminant))/2;
        printf("They are %f and %f", root_1, root_2);
    }

    else if(discriminant == 0){
        printf("The discriminant %f is greater than 0, so \n", discriminant);
        printf("Both roots are real and equal. \n");
        root_1 = (-coeff_2 + sqrt(discriminant))/2;
        root_2 = (-coeff_2 - sqrt(discriminant))/2;
        printf("They are %f and %f", root_1, root_2);
    }

    else{
        printf("The discriminant is less than zero and the roots are imaginary.");
    }

    return 0;

}
