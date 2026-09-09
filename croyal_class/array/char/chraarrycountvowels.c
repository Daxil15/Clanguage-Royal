#include<stdio.h>

void main()
{
    char string[50];
    int i, count=0;

    printf("\n enter string :");
    gets(string);
    printf("\n string is : %s",string);

    for(i=0; string[i]!='\0'; i++)
    {
        if(string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u')
        {
            count++;
        }
    }
    printf("\n vowels in string: %d", count);
}// main end