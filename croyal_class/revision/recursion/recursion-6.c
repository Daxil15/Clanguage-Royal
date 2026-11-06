#include<stdio.h>

int fact(int num)
{
    if(num == 1)
    {
        return 1;
    }

    return num * fact(num-1);
}

void main()
{
    int ans;
    ans = fact(5);
    printf("Factorial: %d\n", ans);
}