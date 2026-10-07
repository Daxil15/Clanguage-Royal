#include<stdio.h>

int sum(int n)
{
    if(n==0)
    {
        return 0;
    }
    return n+sum(n-1);
}// end of sum

void main()
{
    int ans;
    ans = sum(5);
    printf("ans: %d", ans);
}// end of main