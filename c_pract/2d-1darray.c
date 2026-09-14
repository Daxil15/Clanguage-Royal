#include<stdio.h>

void main()
{
    int a[3][3], b[3*3];

    int i, j, k, temp;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("entre the emlement: ");
            scanf("%d", &a[i][j]);
        }
    }

    printf("Unsorted array:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    k=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            b[k] = a[i][j];
            k++;
        }
    }

    for(i=0; i<3*3; i++)
    {
        for(j=0;j<3*3;j++)
        {
            if(b[j] > b[j+1])
            {
                temp = b[j];
                b[j] = b[j+1];
                b[j+1] = temp;
            }
        }
    }

    k = 0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            a[i][j] = b[k];
            k++;
        }
    }


    printf("sorted array: \n");

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}