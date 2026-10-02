#include<stdio.h>

void count(int n)
{
    if(n==11)
    {
        return;
    }
    printf("\nn: %d", n);
    count(n+1);
    printf("\nn: %d", n);
}

void main()
{
    count(1);
}