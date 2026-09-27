/*WAP to calculate gross salary of a person, where gross_salary=basic+da+ta and da is
10% of basic and ta is 12% of basic.*/

#include <stdio.h>
int main() {
    float basic, da, ta, gross_salary;
    printf("Enter basic salary: ");
    scanf("%f", &basic);
    da = 0.1 * basic;
    ta = 0.12 * basic;
    gross_salary = basic + da + ta;
    printf("Gross salary: %.2f\n", gross_salary);
    return 0;
}
