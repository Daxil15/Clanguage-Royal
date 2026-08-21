#include<stdio.h>

void main ()
{
    int a[3][3] = {{18,235,34},{454,90,13},{745,348,976}};
    int i, j, max = a[0][0];


    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j] < max)
            {
                max = a[i][j];
            }
        }
    }
    printf("Min element is: %d",max);
}//main end