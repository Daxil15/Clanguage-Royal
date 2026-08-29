#include<stdio.h>

void main()
{
    int i;

    for(i=1;i<=10;i++)
    {
        if(i == 12)
        {
            break;
        }
        else
        {
            printf("%d\t",i);
        }
    }
}