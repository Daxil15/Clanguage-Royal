#include<stdio.h>

void main()
{
    char name[] = "Daxil P Chakrani";
    char *p = &name[0];
    int countU = 0, countL = 0; 
    
    while(*p!='\0')
    {
        if(*p >= 'A' && *p <= 'Z')
        {
            countU++;
        }
        if(*p >= 'a' && *p <= 'z')
        {
            countL++;
        }
        *p++;
    }
    printf("\nUpper char in array: %d", countU);
    printf("\nLower char in array: %d", countL);
}