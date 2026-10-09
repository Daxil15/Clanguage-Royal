#include<stdio.h>

void main()
{
    int i, j, count=0;

    for(i=0; i<12; i++)
    {
        if(i%4==0)
        {
            count++;
        }
    }

    printf("%d",count);
}