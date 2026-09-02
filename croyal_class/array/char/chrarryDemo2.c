#include<stdio.h>

void main()
{
 
    char name[100];
    printf("\n enter name :");
    //scanf("%s",&name);
    gets(name); //--->scanf
    printf("\n name = %s",name);
   
}