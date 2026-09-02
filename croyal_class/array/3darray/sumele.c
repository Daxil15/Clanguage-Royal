#include<stdio.h>

void main()
{
    int a[3][3][3],i,j,k,sum=0;
    
    //scan loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("element for index a[%d][%d][%d]:\n",i,j,k);
                scanf("%d",&a[i][j][k]);
            }//scan loop end for k
        }//scan loop end for j
    }//scan loop end for i


    //print loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                printf("%d ",a[i][j][k]);
            }//print loop end for k
            printf("\n");
        }//print loop end for j
        printf("\n");
    }//print loop end for i


    //sum loop
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                sum += a[i][j][k];
            }
        }
    }

    printf("Sum of all elements in the 3D array is: %d\n", sum);
}