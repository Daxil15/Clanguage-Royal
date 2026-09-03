#include<stdio.h>

void main()
{
    int sNum, eNum, num, arr[16]; 
    int range, i, j, temp;
    
    printf("Enter start numbers: ");
    scanf("%d", &sNum);
    printf("Enter end numbers: ");
    scanf("%d", &eNum);
    if(sNum > eNum)
    {
        temp = sNum;
        sNum = eNum;
        eNum = temp;
    }
    for(range=sNum; range<=eNum; range++)
    {
            num = range;
            i = 0;
            while(num > 0)
            {
                arr[i] = num % 2;
                num = num / 2;
                i++;
            }//while loop end
            
    
            printf("\n%d--> ",range);
            for(j = i-1; j>=0; j--)
            {
                printf("%d", arr[j]);
            }//for loop end
       }
}// main end