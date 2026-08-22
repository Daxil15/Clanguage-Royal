#include <stdio.h>

void main() {
    int n = 21;   
    int i, j, mid;

    mid = (n + 1) / 2;

    for (i = 1; i <= n; i++) 
    {
        for (j = 1; j <= n; j++) 
        {

            if (i <= mid) 
            {
                if (j == i || j == n + 1 - i) 
                {
                    printf("*");
                } 
                else 
                {
                    printf(" ");
                }
            }/* main if end*/
            else 
            {
                if (j == mid) 
                {
                    printf("*");
                } 
                else 
                {
                    printf(" ");
                }
            }// main else end
        }// inner loop end
        printf("\n"); 
    }// outter loop end

}