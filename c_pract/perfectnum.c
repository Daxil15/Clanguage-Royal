#include<stdio.h>

void main()
{
    int i, j, sum; ;
    for(j=1;j<=1000;j++)
    {
        sum = 0;
        for(i=1;i<j;i++)
        {
            if(j % i == 0)
            {
                sum = sum + i;
            }
        }
        if(sum == j)
        {
            printf("%d is a perfect number.\n", j);
        }
    }
}// main end