#include<stdio.h>

int sumOfDigit(int n)
{
    if(n == 0)
    {
        return 0;
    }

    return n%10 + sumOfDigit(n/10);
}

void main()
{
    int ans;
    ans = sumOfDigit(265);
    printf("Result: %d\n", ans);
}