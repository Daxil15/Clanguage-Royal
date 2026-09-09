#include<stdio.h>

void main()
{
    int a[3][3][3] = {{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, {{10, 11, 12}, {13, 14, 302}, {16, 17, 18}}, {{19, 20, 21}, {22, 23, 24}, {25, 26, 27}}};
    int i, j, k, max = a[0][0][0];

    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            for(k=0; k<3; k++)
            {
                if(a[i][j][k] > max)
                {
                    max = a[i][j][k];
                }
            }// end of inner loop of k
        }// end of inner loop of j
    }// end of outer loop of i
    printf("Max element is: %d", max);
}