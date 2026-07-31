#include<stdio.h>

void main()
{
    int a[5]={1,2,3,4,5},b[5],i;

    printf("Element of A....");
    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,a[i]);
    }

    for(i=0;i<5;i++)
    {
        b[i]=a[5-i-1];
    }

    printf("\n\n\nElement of B....");
    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,b[i]);
    }    
}// mein end