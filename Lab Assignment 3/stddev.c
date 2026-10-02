#include<stdio.h>
#include<math.h>
int main(){
    float a, b, c, d, e;

    printf("\nEnter the 5 values spearated by space.");
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);

    float mean, min, max, std_dev;

    mean = (a + b + c + d +e)/5;

    printf("\nMean = %f", mean);

    min = a;
        max = a;

        if(b < min)
            min = b;

        if(c < min)
            min = c;

        if(d < min)
            min = d;

        if(e < min)
            min = e;

        if(b > max)
            max = b;

        if(c > max)
            max = c;

        if(d > max)
            max = d;

        if(e > max)
            max = e;

        printf("Minimum = %f\n", min);
        printf("Maximum = %f\n", max);

        std_dev = sqrt(
                ((a - mean) * (a - mean) +
                 (b - mean) * (b - mean) +
                 (c - mean) * (c - mean) +
                 (d - mean) * (d - mean) +
                 (e - mean) * (e - mean)) / 5
            );

        printf("standard deviation = %f", std_dev);

}
