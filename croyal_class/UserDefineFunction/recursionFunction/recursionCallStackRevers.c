#include<stdio.h>

void count(int n)
{
    if(n==0)
    {
        return;
    }
    count(n-1);
    
}