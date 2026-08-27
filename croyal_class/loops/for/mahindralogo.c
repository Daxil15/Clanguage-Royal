/*
  1 2 3 4 5 6 7 8 9
1 *               * 
2 * *           * * 
3 * * *       * * * 
4 * * * *   * * * *
5 * * * * * * * * * 
6 * * * *   * * * * 
7 * * *       * * * 
8 * *           * * 
9 *               *
*/
#include<stdio.h>

void main()
{
    int i,j;
    for(i=1;i<=9;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(i==j || i+j == 10 || j == 1 || j == 9)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}