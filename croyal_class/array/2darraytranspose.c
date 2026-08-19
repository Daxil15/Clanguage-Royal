#include<stdio.h>

void main()
{
    int a[3][2] = {{1,2},{3,4},{5,6}};
    int t[2][3];
    int i,j;

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            printf("%d ",a[i][j]);
        }//inner loop end
        printf("\n");
    }//print loop end

    //copy loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            t[j][i] = a[i][j];
        }//end of inner loop
    }//end of swap loop

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",t[i][j]);
        }//inner loop end
        printf("\n");
    }//print loop end
}// main end