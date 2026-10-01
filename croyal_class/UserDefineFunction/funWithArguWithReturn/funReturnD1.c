#include<stdio.h>

int findLen(char ch[])
{
    int i, len=0;

    for(i=0; ch[i]!='\0'; i++)
    {
        len++;
    }
    return len;
}// end of findLen

void main()
{
    int length;
    char  a[10] = "daxil", b[100] = "chakrani";
    length = findLen(a);
    printf("length-1: %d", length);
    
    length = findLen(b);
    printf("\nlength-2: %d", length);
}