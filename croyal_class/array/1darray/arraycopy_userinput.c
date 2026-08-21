#include<stdio.h>

void main()
{
 
    int a[5],b[5],i;

    //scan loop
    for(i=0;i<5;i++){
        printf("\n enter %d index element : ",i);
        scanf("%d",&a[i]);
    }//scan loop end

    //copy loop
    for(i=0;i<5;i++){
        b[i] = a[i];
    }//copy loop end...

    //printing loop for b
    for(i=0;i<5;i++){
        printf("\n index = %d element = %d",i,b[i]);
    } //end of prinintg loop
   
}