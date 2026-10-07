#include<stdio.h>

int power(int b, int exp)
{
    if(exp == 0)
    {
        return 1;
    }
    printf("\n%d", exp-1);
    return b*power(b, exp-1);   
}// power end

void main()
{
    int ans;
    ans = power(3,3);
    printf("ans: %d", ans);
}// main end