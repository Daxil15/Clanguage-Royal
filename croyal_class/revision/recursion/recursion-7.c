#include<stdio.h>

int sum(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return num + sum(num-1);
}

void main()
{
    int ans;
    ans = sum(5);
    printf("sum: %d\n", ans);
}