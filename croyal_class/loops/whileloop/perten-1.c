#include<stdio.h>
void main()
{
    int i, j, k;

    i = 1;
    while(i <= 5)
    {
        j = 5;
        while(j >= i-1)
        {
            printf(" " );
            j--;
        }
        k = 1;
        while(k <=i)
        {
            printf("* " );
            k++;
        }
        printf("\n");
        i++;
    }
    
}