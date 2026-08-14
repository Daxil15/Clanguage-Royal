#include<stdio.h>

void main()
{
    int a[3][3], i, j, sum=0;

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            {
                printf("\nEnter the element: ");
                scanf("%d",&a[i][j]);
            }
    }// scan loop end

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum = sum + a[i][j];
            printf("%d ",a[i][j]);
        }
        printf("\n");
    } //print loop end

    printf("Sum: %d",sum);
}// main end