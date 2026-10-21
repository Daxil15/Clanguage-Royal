#include<stdio.h>

int revNum(int n, int rev)
{
    if(n==0)
    {
        return rev;
    }
    return revNum(n/10, rev*10+n%10);
}

void main()
{
    int ans;
    ans = revNum(12345, 0);
    printf("%d", ans);
}