#include<stdio.h>

void main(){
    int no,count=0;
    printf("Entre any numbers: ");
    scanf("%d",&no);

    do{
        no = no / 10;
        count++;
    }while(no!=0);
    printf(" Number Count: %d",count);
}// main end