/*
    Author: Daxil P. Chakrani
    Doc: 4-8-2026
    objective: To demonstrate the use of all 3 loops with switch case statement in C programming language.
    email:chakranidaxil@gmail.com
*/

#include<stdio.h>
#include<stdlib.h>

void main()
{
    int choiceloop, choicefor, choicewhile, choicedo, i,j;

    start:
    printf("\n1----For Loop");
    printf("\n2----While Loop");
    printf("\n3----Do While Loop");
    printf("\n4----Exit");
    printf("\nEnter the choice: ");
    scanf("%d",&choiceloop);

    switch(choiceloop)
    {
        case 1: forstart:
                printf("\nYou have selected For Loop");
                printf("\n1-----print small a...z");
                printf("\n2-----print capital A----Z");
                printf("\n3-----normal triangle");
                printf("\n4-----reverse triangle");
                printf("\n5-----exit");
                printf("\nEnter the choice: ");
                scanf("%d",&choicefor);
                
                switch(choicefor)
                {
                    case 1: for(i='a';i<='z';i++)
                            {
                                printf("%c \t",i);
                            }
                            break;
                    case 2: for(i='A';i<='Z';i++)
                            {
                                printf("%c \t",i);
                            }
                            break;
                    case 3: for(i=1;i<=5;i++)
                            {
                                for(j=1;j<=i;j++)
                                {
                                    printf("* ");
                                }
                                printf("\n");
                            }
                            break;
                    case 4: for(i=5;i>=1;i--)
                            {
                                for(j=1;j<=i;j++)
                                {
                                    printf("* ");
                                }
                                printf("\n");
                            }
                            break;
                    case 5: exit(0);
                            break;
                    default: printf("\nPlease select the valid choice from 1-5.");
                }//switch end
                goto forstart;
                break;
        case 2: whilestart:
                printf("\nYou have selected While Loop");
                printf("\n1----print small a...z");
                printf("\n2----print capital A-...Z");
                printf("\n3-----normal triangle");
                printf("\n4-----reverse triangle");
                printf("\n5-----exit");
                printf("\nEnter the choice: ");
                scanf("%d",&choicewhile);

                switch(choicewhile)
                {
                    case 1: i='a';
                            while(i<='z')
                            {
                                printf("%c \t",i);
                                i++;
                            }
                            break;
                    case 2: i='A';
                            while(i<='Z')
                            {
                                printf("%c \t",i);
                                i++;
                            }
                            break;
                    case 3: i=1;
                            while(i<=5)
                            {
                                j=1;
                                while(j<=i)
                                {
                                    printf("* ");
                                    j++;
                                }
                                printf("\n");
                                i++;
                            }
                            break;
                    case 4: i=5;
                            while(i>=1)
                            {
                                j=1;
                                while(j<=i)
                                {
                                    printf("* ");
                                    j++;
                                }
                                printf("\n");
                                i--;
                            }
                            break;
                    case 5: exit(0);
                            break;
                    default: printf("\nPlease select the valid choice from 1-5.");
                }// switch end
                goto whilestart;
                break;
        case 3: dostart:
                printf("\nYou have selected Do While Loop");
                printf("\n1----print small a...z");
                printf("\n2----print capital A-...Z");
                printf("\n3-----normal triangle");
                printf("\n4-----reverse triangle");
                printf("\n5-----exit");
                printf("\nEnter the choice: ");
                scanf("%d",&choicedo);

                switch(choicedo)
                {
                    case 1: i='a';
                            do
                            {
                                printf("%c \t",i);
                                i++;
                            }while(i<='z');
                            break;
                    case 2: i='A';
                            do
                            {
                                printf("%c \t",i);
                                i++;
                            }while(i<='Z');
                            break;
                    case 3: i=1;
                            do
                            {
                                j=1;
                                do
                                {
                                    printf("* ");
                                    j++;
                                }while(j<=i);
                                printf("\n");
                                i++;
                            }while(i<=5);
                            break;
                    case 4: i=5;
                            do
                            {
                                j=1;
                                do
                                {
                                    printf("* ");
                                    j++;
                                }while(j<=i);
                                printf("\n");
                                i--;
                            }while(i>=1);
                            break;
                    case 5: exit(0);
                            break;
                    default: printf("\nPlease select the valid choice from 1-5.");
                }//switch end
                goto dostart;
                break;
        case 4: exit(0);
                break;
        default: printf("\nPlease select the valid choice from 1-4.");
    }//switch end
    goto start;
}//main end