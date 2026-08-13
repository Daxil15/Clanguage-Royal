#include<stdio.h>

void main()
{
    int i, a[]= {10, 20, 30, 40, 50, 60}, arraysize,sum=0;
    printf("size of array: %d\n\n",sizeof(a));
    arraysize=sizeof(a) / sizeof(int);
    for(i=0 ; i<arraysize ; i++)
    {
        if(i == arraysize){
            printf("%d ", a[i]);
        }
        else{
            printf("%d + ",a[i]);
        }
        sum = sum + a[i];
    }//for end
    printf("= %d",sum);
}// main end