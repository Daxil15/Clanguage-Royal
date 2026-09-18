#include<stdio.h>
#include<string.h>

void main()
{
    char name[100], copyName[100];
    int temp;
    printf("enter name: ");
    gets(name);

    strcpy(copyName, name);
    strrev(copyName);
    
    temp = strcmp(copyName, name);

    if(temp == 0)
    {
        printf("Name is palaindrom.");
    }
    else
    {
        printf("Name is not palaindrom.");
    }

}