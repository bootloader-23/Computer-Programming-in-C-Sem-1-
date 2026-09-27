/* You have a circular garden in your backyard with a radius of 7.5 meters. You want to cover
the garden with grass turf, and the turf is sold at ₹55 per square meter. Write a C program
to calculate the area of the garden and the total cost of covering it with turf. */

#include <stdio.h>
int main() {
    float radius = 7.5;
    float area = 3.14 * radius * radius;
    float cost = area * 55;
    printf("Area: %.2f\n", area);
    printf("Cost: %.2f\n", cost);
    return 0;
}
