#include<stdio.h>

int power(int n, int exp)
{
    if(exp == 0)
    {
        return 1;
    }

    return n * power(n, exp-1);
}

void main()
{
    int ans;
    ans = power(2,5);
    printf("Result: %d\n", ans);
}