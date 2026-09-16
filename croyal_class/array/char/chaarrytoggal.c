#include<stdio.h>

void main()
{
    char name[100], toggleName[100];
    int i;

    printf("Enter the Name in Uppercase: ");
    gets(name);

    for(i=0 ; name[i]!='\0'; i++)
    {
        if(name[i]>='A' && name[i]<='Z')
        {
            toggleName[i] = name[i] + 32;
        }
        else
        {
            toggleName[i] = name[i] - 32;
        }
    }
    toggleName[i] = '\0'; 

    printf("Lower char: %s",toggleName);

}