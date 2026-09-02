#include<stdio.h>

void main()
{
    char name[50];
    int i, count=0;

    printf("\n enter name :");
    gets(name);
    printf("\n name is : %s",name);

    for(i=0;name[i]!='\0';i++)
    {
        if(name[i] == 32)
        {
            count++;
        }
    }
    printf("\n Numbers of spaces in name is : %d",count);
}