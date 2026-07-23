#include<stdio.h>

void main(){
   
    int i=1,no,fact=1;
    printf("\n enter no : ");
    scanf("%d",&no);
    do{
        fact = fact * i;
        i++; 
    }while(i<=no);

    printf("\n fact = %d",fact);
   
}