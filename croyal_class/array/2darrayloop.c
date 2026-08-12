#include<stdio.h>

void main()
{
    
    int a[3][3],i,j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("\n enter data for %d[%d] :" ,i,j);
            scanf("%d",&a[i][j]);
        }
    } //scan loop end


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf(" %d",a[i][j]);
        }
        printf("\n");
    }

   
}