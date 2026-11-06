#include<stdio.h>

int sumNum(int num)
{
    int sum = 0;

    while(num > 0)
    {
        sum = sum + num % 10;
        num = num /10;
    }
    return sum;
}

void main()
{
    int rlt;
    rlt = sumNum(12345);
    printf("Sum of digit: %d", rlt);
}