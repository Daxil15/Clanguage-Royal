// #include<stdio.h>

// int accounts[3] = {10000, 20000, 30000};

// int* getAccount(int accountNo)
// {
//     if(accountNo<=0 || accountNo>=3){
//         return NULL;
//     }

//     return &accounts[accountNo];
// }

// void getUpdates()
// {
//     int i;
//     for(i=0; i<3; i++)
//     {
//         printf("\naccount: %d", accounts[i]);
//     }
// }

// void main()
// {
//     int *bal;
//     bal = getAccount(0);
//     if(accounts != NULL)
//     {
//         printf("\nValue of c = %d",*bal);
//         *bal = *bal + 2000;
//         getUpdates();
//     }
// }//main end

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
         printf("\nAccount = %d",account[i]);
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