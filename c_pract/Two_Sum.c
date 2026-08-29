#include<stdio.h>
void main()
{
    int i, nums[3] = {4, 2, 6}, sum = 0,n1,n2;


    for(i=0;i<3;i++)
    {
        sum = nums[i] + nums[i+1];
        // printf("%d", sum);
        // printf("\n%d", nums[i]);
    }
    
        if(sum == 8)
        {
            n1 = nums[i];
            n2 = nums[i+1];
            printf("ele: %d %d", nums[i], nums[i+1]);
        }
        else
        {
            printf("non");
        }
}// main end