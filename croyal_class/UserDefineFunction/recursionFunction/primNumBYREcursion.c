#include<stdio.h>


//n=6,i=2
int prime(int n,int i){

    //6<2
    if(n<2){
        return 0;
    }
    
    //2>3
    if(i>n/i){
        return 1; //1
    }
    
    //6%2 ==0
    if(n%i==0){
        return 0; //0
    }

    return prime(n,i+1);
    
}
void main()
{
 
    int ans;
    ans = prime(6,2);
    if(ans==1){
        printf("\n no is prime");
    }
    else{
        printf("\n no is not prime");
    }
}