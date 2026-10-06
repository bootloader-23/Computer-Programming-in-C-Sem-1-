#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Enter number of customers: ");
    scanf("%d", &n);

    int balance[n];
    int result[n];

    printf("Enter the balances:\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &balance[i]);
    }

    int positive = 0;
    int negative = 0;

    for (int i = 0; i < n; i++)
    {
        if (balance[i] > 0)
        {
            positive += balance[i];
        }
        else if (balance[i] < 0)
        {
            negative += -balance[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        if (balance[i] > 0)
        {
            positive -= balance[i];
        }
        else if (balance[i] < 0)
        {
            negative -= -balance[i];
        }

        result[i] = abs(positive - negative);
    }

    printf("\nNew balances:\n");

    for (int i = 0; i < n; i++)
    {
        printf("%d ", result[i]);
    }

    printf("\n");

    return 0;
}
