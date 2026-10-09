#include<stdio.h>

int hcf(int num1, int num2)
{
    if(num2==0)
    {
        return num1;
    }

    return hcf(num2,num1%num2);
}//hcf end

void main()
{
    int ans = hcf(8, 33);
    printf("%d",ans);
}// main end