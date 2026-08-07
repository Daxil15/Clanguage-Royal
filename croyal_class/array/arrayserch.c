#include<stdio.h>

void main()
{
    int i, searchelm, n, index=-1, found=0;

    printf("Enter the length of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the %d element of array:",i);
        scanf("%d",&a[i]);
    }//scan array element loop

    printf("\nEnter the element to be searched: ");
    scanf("%d",&searchelm);

    for(i=0;i<n;i++)
    {
        if(a[i]==searchelm)
        {
            found=1;
            break;
        }
    }//search loop
    if(found)
    {
        printf("\nElement %d found in array." ,searchelm);
    }
    else
    {
        printf("\nElement %d not found in the array.",searchelm);
    }
}// main end