#include<stdio.h>
int account[3]={10000,20000,30000};
int* get( int accountno)
{
    if(accountno < 0 || accountno >=3)
    {
        return NULL;
    }
     return &account[accountno];
} 
void getupdate()
{
    int i;
    for(i=0;i<3;i++)
    {
         printf("\nAccount %d = %d", i+1,account[i]);
    }
}
void main()
{
    int *c;
    c = get(0);
    if(account != NULL)
    {
    printf("\nValue of c = %d",*c);
    *c = *c + 2000;
    getupdate();
    }
    else
    {
        printf("\nIncorrect");
    }

}