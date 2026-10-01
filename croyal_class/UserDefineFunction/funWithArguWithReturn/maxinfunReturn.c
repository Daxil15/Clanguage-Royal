#include<stdio.h>

int maxNum(int num[], int size)
{
    int i, max;
    max = num[0];
    for(i=0; i<size; i++)
    {
        
        if(max<num[i])
        {
            max = num[i];
        }
    }
    return max;
}//end of maxNum

void main()
{
    int max, siz = 6, number[100] = {20, 40, 834, 65, 24, 465};
    max = maxNum(number, siz);
    printf("Maximun: %d", max);
}