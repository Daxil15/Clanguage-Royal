/*
  1 2 3 4 5 6 7 8 9
 1*               * 
 2* *           * * 
 3* * *       * * * 
 4* * * *   * * * *
 5* * * * * * * * * 
 6* * * *   * * * * 
 7* * *       * * * 
 8* *           * * 
 9*               *
*/
#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            (j <= i && i + j <= 10) || (j >= i && i + j >= 10) ?printf("*"):printf(" ");
            //i==j || i+j==10 || j == 1 || j == 9 ?printf("*"):printf(" ");
        }
        printf("\n");
    }
}