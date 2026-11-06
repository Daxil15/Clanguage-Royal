#include<stdio.h>

int sumOfDigit(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return 1 + sumOfDigit(n/10);
}

void main()
{
    int ans;
    ans = sumOfDigit(6);
    printf("Result: %d\n", ans);
}