#include<stdio.h>

void main()
{

    int a[2][2][2];
    int i, k, g;

    for(i=0;i<2;i++)
    {
        for(k=0;k<2;k++)
        {
            for(g=0;g<2;g++)
            {
                printf("Enter the vale  a[%d][%d][%d]: ",i,k,g);
                scanf("%d",&a[i][k][g]);
            }//scan loop end for g
        }//scan loop end for k
    }//scan loop end for i

    for(i=0;i<2;i++)
    {
        for(k=0;k<2;k++)
        {
            for(g=0;g<2;g++)
            {
                printf("%d ",a[i][k][g]);
            }//print loop end for g
            printf("\n");
        }//print loop end for k
        printf("\n");
    }//print loop end for i

}//main end