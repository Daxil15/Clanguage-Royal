#include<stdio.h>

void main()
{
    int a[5]={1,2,3,4,5},b[5],i;

    for(i=0;i<5;i++)
    {
        b[i] = a[i];
    }

    printf("Element of A");
    for (i = 0; i < 5; i++)
    {
        printf("\n index = %d element = %d", i, a[i]);
    }

    printf("\n\nElement of B");
    for (i = 0; i < 5; i++)
    {
        printf("\n index = %d element = %d", i, b[i]);
    }
    
}