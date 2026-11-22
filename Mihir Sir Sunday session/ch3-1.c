#include <stdio.h>

void main()
{
    int i, n, a, c;
    float sum = 0.00;
    printf("Enter the number");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("\n 1/%d+", i);
        sum = sum + 1.0 / i;
    }
    printf("\nsum = %f", sum);

}