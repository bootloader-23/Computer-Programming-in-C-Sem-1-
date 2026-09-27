//Using MATH library of C to give the various trigonometric ratios for a given
// angle taken as user input in radians.


#define PI 3.141592
#include<stdio.h>
#include<math.h>
int main(){
    float angle;

    printf("Please enter your angle in radians: \n");
    scanf("%f", &angle);

    float sin_value = sin(angle);
    float cos_value = cos(angle);
    float tan_value = tan(angle);

    float csc_value = 1/sin(angle);
    float sec_value = 1/cos(angle);
    float cot_value = 1/tan(angle);

    printf("Sine of %f is %f \n", angle, sin_value);
    printf("Cosine of %f is %f \n", angle, cos_value);
    printf("Tangent of %f is %f \n", angle, tan_value);
    printf("Cosecant of %f is %f \n", angle, csc_value);
    printf("Secant of %f is %f \n", angle, sec_value);
    printf("Cotangent of %f is %f \n", angle, cot_value);

    return 0;

}
