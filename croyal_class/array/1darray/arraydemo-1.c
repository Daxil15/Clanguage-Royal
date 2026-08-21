#include<stdio.h>
void main(){

    int marks[5] = {10,11,12,13,14},i;

    //how to access the index
    for(i=0;i<5;i++){
        //printf("%d",marks[i]);
        printf("\nIndex: %d Marks: %d",i,marks[i]);
    }
}