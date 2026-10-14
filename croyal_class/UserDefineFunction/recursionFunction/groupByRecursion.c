#include<stdio.h>

int group(int total, int groupNum)
{
    if(total<groupNum)
    {
        return 0;
    }// if end

    return 1 + group(total-groupNum, groupNum);
}// group end

void main()
{
    int g;
    g = group(100, 3);
    printf("%d",g);
}// main end