/*
    name: Daxil
    doc: 22nd july2026
    objective: to print :
    * * * * *
    *       * 
    *       *
    *       *
    * * * * *
*/

#include<stdio.h>

void main(){
    int i,j;
    for(i=1;i<=5;i++){
        for(j=1;j<=5;j++){
            if(i==1 || i==5 || j==1 || j==5){
                printf("* ");
            }//if
            else{
                printf("  ");
            }//else
        }//for-j
        printf("\n");
    }//for-i
}// main