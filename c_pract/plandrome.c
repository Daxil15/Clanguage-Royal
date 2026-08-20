#include<stdio.h>

void main()
{
    int  num, rev = 0, lasdig;
    
    printf("Enter the number: ");
    scanf("%d",&num); 

   // rev=0;
    lasdig = num % 10;
    rev = rev * 10 + lasdig;
    num = num / 10;

    if (num == rev)
    {
        printf("number is plaindrom.");
    }
    else
    {
        printf("number is not plaindrom.");
    }
}