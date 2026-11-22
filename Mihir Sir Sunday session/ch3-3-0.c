#include <stdio.h>

int main()
{
    int a[100], i, n, pn = 0, nn = 0;
    printf("How many number You want to add in array:");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("A[%d] =", i);
        scanf("%d", &a[i]);
    }
    for (i = 0; i < a[i]; i++)
    {
        pn = 0, nn = 0;
        if (a[i] > 0)
        {
            pn++;
            printf("\nPositive numbers-->%d ", pn);
        }
        else if (a[i] < 0)
        {
            nn++;
            printf("\nNegative Numbers-->%d", nn);
        }
        else
        {
            exit(0);
        }
    }

    return 0;
}