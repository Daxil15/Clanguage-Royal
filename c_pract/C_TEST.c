#include<stdio.h>
int main()
{
    char ch[50];
    int i, len = 0;
    
    printf("Enter char: ");
    gets(ch);
    printf("Name = %s", ch);
    for(i=0; ch[i] != '\0'; i++)
    {
        len++;
    }
    printf("\nLength = %d", len);
}