#include<stdio.h>

void sumArray(int a[])
{
    int i, sum = 0;
    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }
    printf("Sum: %d",sum);
}// end of sumArray

void main()
{  
    int marks[5]= {10, 20, 30, 40, 50};
    sumArray(marks);
}// end of main