#include<stdio.h>

int accounts[3] = {10000, 20000, 30000};

int* getAccount()
{
    int i;
    static int max;
    max = accounts[0];
    
    for(i=0; i<3; i++)
    {
        if(accounts[i]>max)
        {
            max = accounts[i]; 
        }
    }
    

    return &max;
}

void main()
{
    int *m;
    m = getAccount();

    printf("\nmax: %d", *m);
}//main end