#include<stdio.h>

void count(int n)
{
    if(n==0)
    {
        return;
    }// base case
    printf("n: %d\n", n);
    count(n-1);//recersive case
}

void main()
{

    count(10);

}// end of main