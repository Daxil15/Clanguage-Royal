#include<stdio.h>

//123 -->6

//n=123
//n=12
//n=1
//n=0
int digitsum(int n){

    //123==0 - false
    //12 ==0 false
    //1 ==0 false
    //0 ==0 true
    if(n==0){
        return 0;
    }

    //     123%10 + digitsum(123/10) =  3 + digitsum(12) 3 + 3 = 6
    //     12%10 + digitsum(12/10)   =  2 + digitsum(1)  2 + 1 = 3
    //     1%10  + digitsum(1/10)    =  1 + digitsum(0)  1 + 0 = 1
     return n%10 + digitsum(n/10);
    
}


void main()
{
   
    int ans;
    ans = digitsum(123);
    printf("\n ans = %d",ans);
   
}