#include<stdio.h>

void main()
{
    char name[100], lowerName[100];
    int i;

    printf("Enter the Name in Uppercase: ");
    gets(name);

    for(i=0 ; name[i]!='\0'; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            lowerName[i] = name[i] + 32;
        }
        else
        {
            lowerName[i] = name[i];
        }
    }
    lowerName[i] = '\0'; 

    printf("Lower char: %s",lowerName);

}