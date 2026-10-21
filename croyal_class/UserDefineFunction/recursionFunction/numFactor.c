#include<stdio.h>

void factors(int n, int i)
{
    if(i>n)
    {
        return;
    }
    if(n%i==0)
    {
        printf("%d\t",i);
    }
    factors(n,i+1);
}//factors end

void main()
{
    factors(15, 1);
}