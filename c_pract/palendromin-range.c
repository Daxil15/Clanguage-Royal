#include<stdio.h>

void main()
{
    int spoint, epoint, num, rev, i, lasdig;

    printf("Enter the Starting vale of range: ");
    scanf("%d",&spoint);
    printf("Enter the Ending vale of range: ");
    scanf("%d",&epoint);

    printf("List of plaindrom numbers: \n");

    for(i=spoint;i<=epoint;i++)
    {
        num = i;
        rev = 0;
        while(num>0)
        {
            lasdig = num % 10;
            rev = rev * 10 +lasdig;
            num = num / 10;
        }

        if(rev == i)
        {
            printf("%d\t", i);
        }
    }
}