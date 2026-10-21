#include<stdio.h>

//n = 123
//n =12
//n =1
int countdigit(int n){

    //123>=0 && 123<10
    //12>=0 && 12<10
    //1>=0 && 1<10
    if(n>=0 && n<10){
        return 1; //1
    }

    //retutn 1 + countdigit(12)1 + 2 = 3
    //return 1 + countdigit(1) 1 + 1 =2
    return 1 + countdigit(n/10);

}

void main()
{
   
    int ans;
    ans = countdigit(12345); 
    printf("\n ans = %d",ans);
   
}