#include<stdio.h>

void main(){
    int cho,choIn;
    char i;
    printf("\n1----Print Ascii of A-Z.");
    printf("\n2----Print Ascii of a-z.");
    printf("\nEnter the choice: ");
    scanf("%d",&cho);

    switch(cho)
    {
        case 1: printf("\n1----Print Ascii of Vowles");
                printf("\n2----Print Ascii if consonent");
                printf("\n3----Print Ascii of A-Z");
                printf("\nEnter the choice: ");
                scanf("%d",&choIn);
                switch(choIn)
                {
                    case 1: for(i='A';i<='Z';i++)
                            {
                                if(i=='A' || i=='E' || i=='I' || i=='O' || i=='U')
                                {
                                    printf("%c -> %d\n",i,i);
                                }
                            }
                            break;
                    case 2: for(i='A';i<='Z';i++)
                            {
                                if(i!='A' && i!='E' && i!='I' && i!='O' && i!='U')
                                {
                                    printf("%c -> %d\n",i,i);
                                }
                            }// for end      
                            break;
                    case 3: for(i='A';i<='Z';i++)
                            {
                                printf("%c -> %d\n",i,i);
                            }// for end      
                            break;
                    defaut: printf("Enter the valid choice form 1-4.....");

                }// inner switch end
                break;//outer case-1 end

        case 2: printf("\n1----Print Ascii of Vowles");
                printf("\n2----Print Ascii if consonent");
                printf("\n3----Print Ascii of a-z");
                printf("\nEnter the choice: ");
                scanf("%d",&choIn);
                switch(choIn)     
                {
                    case 1:for(i='a';i<='z';i++)
                            {
                                if(i=='a' || i=='e' || i=='i' || i=='o' || i=='u')
                                {
                                    printf("%c -> %d\n",i,i);
                                }
                            }
                            break;
                    case 2:for(i='a';i<='z';i++)
                            {
                                if(i!='a' && i!='e' && i!='i' && i!='o' && i!='u')
                                {
                                    printf("%c -> %d\n",i,i);
                                }
                            }
                            break;
                    case 3: for(i='a';i<='z';i++)
                            {
                                printf("%c -> %d\n",i,i);
                            }//for end
                            break;
                }// inner switch end
    }//outer switch end
}//main end