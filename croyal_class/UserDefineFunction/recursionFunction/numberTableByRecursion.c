#include<stdio.h>

void printTable(int n, int i)
{
    if(i>10)
    {
        return;
    }

    printf("\n%d * %d = %d", n, i, n*i);
    printTable(n,i+1);
}// printTable end

void main()
{
    printTable(2, 1);
}// main end

/*
    for(i=1; i<=10; i++)
    {
        ans = n * i;
        printf("%d * %d = %d",n ,i, ans)
    }
*/