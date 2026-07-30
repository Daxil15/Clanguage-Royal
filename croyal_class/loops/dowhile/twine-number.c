#include<stdio.h>
int main(){
    int sum=0,rem=0,no,mul=1;
    printf("\nEnter the number=");
    scanf("%d",&no);
    do{
        rem=no%10;
        sum=sum+rem;
        mul=mul*rem;
        no=no/10;
    }while(no!=0);
    if(sum==mul){
        printf("This is Twin Number");
    }
    else{
        printf("This is not Twin number");
    }
}