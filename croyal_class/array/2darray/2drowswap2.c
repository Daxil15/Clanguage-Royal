#include<stdio.h>

void main()
{
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i=0,j,temp;

    if(i==0)
        {
            for(j=0;j<3;j++)
        {
            temp = a[i][j];
            a[i][j] = a[2][j];
            a[2][j] = temp;
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}