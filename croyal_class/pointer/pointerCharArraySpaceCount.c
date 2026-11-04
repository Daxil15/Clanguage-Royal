#include<stdio.h>

void main()
{
    char name[] = "daxil p chakrani";
    char *p = &name[0];
    int count = 0; 
    
    while(*p!='\0')
    {
        if(*p == ' ')
        {
            count++;
        }
        *p++;
    }
    printf("\nspace in array: %d", count);
}