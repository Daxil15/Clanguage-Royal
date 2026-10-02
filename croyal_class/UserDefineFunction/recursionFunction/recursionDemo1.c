#include<stdio.h>

void count(int n)
{
    if(n==11)
    {
        return;
    }// base case
    printf("n: %d\n", n);
    count(n+1);//recersive case
}//end of count

void main()
{

    count(1);

}// end of main