#include<stdio.h>

int sumRang(int sp, int ep)
{
    int i, sum=0;
    for(i=sp; i<=ep; i++)
    {
        sum = sum + i;
    }
    return sum;
}// end of sumRang

void main()
{
    int sp,ep,i,ans=0;
    printf("\n enter sp:");
    scanf("%d",&sp);

    printf("\n enter ep:");
    scanf("%d",&ep);

    ans = sumRang(sp,ep);
    printf("\n sum = %d",ans);
}// end of main