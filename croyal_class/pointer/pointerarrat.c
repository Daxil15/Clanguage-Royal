#include<stdio.h>

void main()
{
    int a[]= {1,2,3,4,5};
    int *p;

    p = &a[0]; //0th elm address = p //.... 80
    printf("\n 0th elment address value = %d",*p);
    p++; //.... 84
     //4 byte increment
     printf("\n 0th elment address value = %d",*p);
     p++; //4 byte inc  ....88
     printf("\n 0th elment address value = %d",*p);
}