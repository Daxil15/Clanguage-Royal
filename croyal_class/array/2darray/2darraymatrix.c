#include<stdio.h>
void main()
{
   
    int a[3][3]={{1,2,3},{4,5,6},{7,8,9}},i,j;
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i==1&&j==1){
                printf(" * ");
            }
            else{
                printf(" %d ",a[i][j]);
            }
        }
        printf("\n");
    }
}