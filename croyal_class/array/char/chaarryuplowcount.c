#include<stdio.h>

void main()
{

    char a[100];
    int i, countU = 0, countL = 0;

    printf("Entre the name: ");
    gets(a);

    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i]>='A' && a[i]<='Z')
        {
            countU++;
        }
        if(a[i]>='a' && a[i]<='z')
        {
            countL++;
        }
    }
    printf("Capital Char: %d", countU);
    
    printf("\n\nLower Char: %d",countL);
}