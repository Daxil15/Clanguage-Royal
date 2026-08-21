#include<stdio.h>

void main()
{
    int a[5],b[5],i;
    
    printf("Enter the 5 value of element");
    //scan loop
    for(i=0;i<5;i++)
    {
        printf("\nEnter the value of  index %d: ",i);
        scanf("%d",&a[i]);
    }//scan loop end

    //copy loop 
    for(i=0;i<5;i++)
    {
        b[i]=a[5-i-1];
    }//copy loop end

    //print element of A array
    printf("\nArray A");
    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,a[i]);
    }

    //print element of B array
    printf("\n\nArray B");
    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,b[i]);
    }
}// main  end