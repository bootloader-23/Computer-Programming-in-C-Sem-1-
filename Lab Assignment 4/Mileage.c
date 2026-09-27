#include <stdio.h>

int main()
{
    int N;
    int distance = 0;

    printf("Enter the amount of fuel in litres: ");
    scanf("%d", &N);

    while (N >= 2)
    {
        N = N - 2;
        distance = distance + 10;

        printf("Travelled %d km, fuel left = %d litres\n", distance, N);
    }

    printf("Total distance travelled = %d km\n", distance);

    return 0;
}
