#include<stdio.h>

void main()
{
    int a[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};
    int t[3][4];
    int i,j;

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }//print loop end

    printf("=======\n");

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            t[j][i] = a[i][j];
        }//end of inner loop
    }//end of swap loop

    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("%d ",t[i][j]);
        }
        printf("\n");
    }//print loop end
}// main end