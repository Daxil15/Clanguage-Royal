#include<stdio.h>

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}// fact end

void main()
{
    int ans = fact(5);
    printf("ans: %d", ans);
}