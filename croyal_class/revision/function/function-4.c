#include<stdio.h>

int revNum(int num)
{
    int rev = 0;

    while(num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num /10;
    }
    return rev;
}

void main()
{
    int rlt;
    rlt = revNum(12345);
    printf("Sum of digit: %d", rlt);
}