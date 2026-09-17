#include<stdio.h>

#include<stdio.h>

void main()
{
    int i, j, a[3][3] = {{1,2,3}, {4,5,6}, {7,8,9}};

    for(i=0 ;i<3; i++)
    {
        for(j=0;j<3;j++)
        {
            if(i == 0 || j == 0 || j == 2)
            {
                printf("o ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

}