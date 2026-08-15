#include<stdio.h>

void main()
{
    int a[3][3], shcele, found=0;
    int i, j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Enter the value for [%d][%d]: ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter the element to be searched: ");
    scanf("%d",&shcele);


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] == shcele)
            {
                found = 1;
                break;
            }
        }
    }

    if(found)
    {
        printf("\nElemrnt %d is found in array...",shcele);
    }
    else
    {
        printf("\nElement %d not found in the array.", shcele);
    }
}