#include<stdio.h>

void spaceCount(char a[])
{
    int i, count = 0;
    for(i=0; a[i] != '\0'; i++)
    {
        if(a[i] == ' ')
        {
            count++;
        }
    }
    printf("The space in string: %d",count);
}// end of spaceCount

void main()
{
    char ch[10] = "D A X I L";
    spaceCount(ch);
}// main end