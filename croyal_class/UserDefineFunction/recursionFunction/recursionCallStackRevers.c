#include<stdio.h>

void count(int n)
{
    if(n==0)
    {
        return;
    }
    printf("\nn: %d", n);
    count(n-1);
    printf("\nn: %d", n);
}
void main()
{
    count(10);
}