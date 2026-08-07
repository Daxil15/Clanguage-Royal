#include<stdio.h>

void main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for(i=1;i<=n/2;i++)
    {
        if(n % i == 0)
        {
            printf("%d * %d\n",i,n/i);
        }
    }

}// main end