#include<stdio.h>

//bubble sort 

void main()
{
    int arr[5],i,j,temp;

    for(i=0;i<5;i++)
    {
        printf("\nEnter the %d element: ",i);
        scanf("%d",&arr[i]);
    }// element input loop end

    for(i=0;i<5;i++)
    {
        for(j=0;j<4;j++)
        {
            if(arr[j]<arr[j+1])
            {
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }// swap if end
        }//inner loop end
    }//swapping loop end

    for(i=0;i<5;i++)
    {
        printf("\nIndex: %d Element: %d",i,arr[i]);
    }//print loop end
}// main end