#include<stdio.h>
void main()
{
    int  num, rev = 0, lasdig, i, temp;
    
    printf("Enter the number: ");
    scanf("%d",&num); 

    temp = num;
    while(num != 0)
    {   
        lasdig = num % 10;
        rev = rev * 10 + lasdig;
        num = num / 10;
    }
    if(temp == rev)
    {
        printf("Number is plandrom.");
    }
    else
    {
        printf("Number is not plandrom.");
    }
}