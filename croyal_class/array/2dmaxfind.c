#include<stdio.h>

void main ()
{
    int a[3][3] = {{1,2,3},{4,90,6},{7,8,9}};
    int i, j, max = a[0][0];


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }
    printf("Max element is: %d",max);
}//main end