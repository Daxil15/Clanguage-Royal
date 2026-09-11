#include<stdio.h>

void main()
{
    char arr[100], reversname[100];
    int i, j=0, len=0;

    printf("Enter the charcter: ");
    gets(arr);

     for(i=0;arr[i]!='\0';i++){
        len++;
    }

    printf("Charcter: ");
    for(i=len-1; i>=0; i--)
    {
        printf("%c", arr[i]);
        reversname[j] = arr[i];
        j++;
    }
    reversname[j] = '\0';
    printf("\nRevers: %c", reversname);
}

// #include<stdio.h>

// void main()
// {
//     int i,len=0,j=0;
//     char name[100],revname[100];

//     printf("\n enter name ::");
//     gets(name);

//     // for(i=0;name[i]!='\0';i++)    {
//     //     printf("\n char = %c",name[i]);
//     // }

//     for(i=0;name[i]!='\0';i++){
//         len++;
//     }

//     printf("\n len = %d",len);
//   //raj
//   //012

//     //i=2
//     for(i=len-1;i>=0;i--){

//         //j
//         printf("\n char = %c",name[i]);
//         //revname[2] = j
//         revname[j] = name[i];
//         j++;
//     }
//     revname[j]='\0';

//     printf("\n revname = %s",revname);
   
// }
