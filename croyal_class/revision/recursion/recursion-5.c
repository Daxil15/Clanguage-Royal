#include<stdio.h>

void printNum(int n)
{
    if(n==0)
    {
        return;
    }

    printNum(n-1);
    if(n % 2 == 0)
    {
        printf("Num: %d\n", n);
    }
}

void main()
{
    printNum(10);
}